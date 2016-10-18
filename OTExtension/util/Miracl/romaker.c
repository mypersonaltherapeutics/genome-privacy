/*
 *   This program reads in GF(p) elliptic curve details from a .ecs file, and automatically generates
 *   ROMs containing parameters and precomputed data for a targetted processor.
 *
 *   The .ecs file may be one of the provided standard nist elliptic curves (e.g. secp192.ecs), or it can
 *   be generated by the schoof or sea applications
 *
 *   Compile on a PC using a standard MIRACL header. Note that on a 32-bit processor (i.e. MIRACL is defined as 32)
 *   this program can create ROMS for 32-bit, 16-bit and 8-bit processors. To create a ROM for a 64-bit processor
 *   this program must be compiled and run on a 64-bit processor (e.g. core 2 under Linux).
 *
 *   cl /O2 romaker.c miracl.lib
 *
 *   The output of this program can be pasted directly into an application like ecdhp*.c
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "miracl.h"

//#define MICROSOFT64

void strip(char *name)
{ /* strip off filename extension */
    int i;
    for (i=0;name[i]!='\0';i++)
    {
        if (name[i]!='.') continue;
        name[i]='\0';
        break;
    }
}

static int answer(void)
{
    char ch;
    scanf("%c",&ch);
    getchar();
    if (ch=='Y' || ch=='y') return 1;
    return 0;
}

/* NOTE! May be necessary to change %lx in certain cases
   e.g. for Microsoft 64-bit compilers, change to %I64x */

void bprint(mr_small *n,int len,int words,int wsize,BOOL last)
{
    int i,j,k;
    BOOL first=TRUE;
    mr_small e,w=((mr_small)1<<wsize);
    for (i=k=0;i<len;i++)
    {
        e=n[i];
        if (MIRACL==wsize)
        {
            if (first)
            {
#ifdef MICROSOFT64
				printf("0x%I64x",e);
#else
                printf("0x%lx",e);
#endif
                first=FALSE;
            }
#ifdef MICROSOFT64
			else printf(",0x%I64x",e);
#else
            else printf(",0x%lx",e);
#endif
        }
        else for (j=0;j<(MIRACL/wsize);j++)
        {
            if (first)
            {
#ifdef MICROSOFT64
				printf("0x%I64x",e%w);
#else
                printf("0x%lx",e%w);
#endif
                first=FALSE;
            }
#ifdef MICROSOFT64
			else printf(",0x%I64x",e%w);
#else
            else printf(",0x%lx",e%w);
#endif
            k++;
            if (k>=words) break;
            e/=w;
        }        
    }
    if (last) printf("};\n");
    else printf(",\n");
}

int main()
{
    FILE *fp;
    big e,n,a,b,x,y,r,t;
    epoint *g;
    BOOL last;
    ebrick binst;
    char fname[100];
    int nb,bits,window,len,bptr,m,i,j,winsize,special,wsize,words,inca;
    miracl *mip=mirsys(50,0);
    n=mirvar(0);
    e=mirvar(0);
    a=mirvar(0);
    b=mirvar(0);
    x=mirvar(0);
    y=mirvar(0);
    r=mirvar(0);
    t=mirvar(0);

    printf("Enter name of .ecs file= ");
    gets(fname);
    strip(fname);
    strcat(fname,".ecs");

    if ((fp=fopen(fname,"rt"))==NULL)
    {
        printf("Unable to open file %s\n",fname);
        return 0;
    }
    fscanf(fp,"%d\n",&bits);

    mip->IOBASE=16;
    cinnum(n,fp);
    cinnum(a,fp);
    cinnum(b,fp);
    cinnum(r,fp);
    cinnum(x,fp);
    cinnum(y,fp);
    mip->IOBASE=10;

    nb=logb2(n);
    printf("modulus is %d bits in length\n",nb);
    printf("Enter window size in bits (1-10)= ");
    scanf("%d",&window);
    getchar();

    printf("Have you MR_SPECIAL defined in application mirdef.h (Y/N)?");
    special=answer();
	
	printf("Do you want to include curve A parameter in rom - no need if its small (=-3 for example) (Y/N)?");
	inca=answer();

    printf("Enter word size of application processor (8, 16, 32 or 64 bit)= ");
    scanf("%d",&wsize);
    getchar();

    if (wsize!=8 && wsize!=16 && wsize!=32 && wsize!=64 || wsize>MIRACL)
    {
        printf("Error - Unsupported word size\n");
        exit(0);
    }

    ebrick_init(&binst,x,y,a,b,n,window,nb);

    len=MR_ROUNDUP(bits,MIRACL);
    words=MR_ROUNDUP(bits,wsize);

    printf("\n--------------------CUT HERE----------------------\n\n");
    printf("#define CURVE_BITS %d\n",bits);
    printf("#define WINDOW %d\n",window);
    printf("#define WORDS %d\n",words);

    printf("\nstatic const mr_small rom[]={\n");

    bprint(n->w,len,words,wsize,FALSE);
	if (inca) bprint(a->w,len,words,wsize,FALSE);
    bprint(b->w,len,words,wsize,FALSE);
    bprint(r->w,len,words,wsize,FALSE);
    bprint(x->w,len,words,wsize,FALSE);
    bprint(y->w,len,words,wsize,TRUE);

    printf("\nstatic const mr_small prom[]={\n");
    bptr=0;
    last=FALSE;
    winsize=2*(1<<window);
    for (i=0;i<winsize;i++)
    {
        zero(t);
        t->len=len;
        for (j=0;j<len;j++)
            t->w[j]=binst.table[bptr++];
        if (special) redc(t,t);
        if (i==winsize-1) last=TRUE;
        bprint(t->w,len,words,wsize,last);
    }

    ebrick_end(&binst);

    return 0;
}


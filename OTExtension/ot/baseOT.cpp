/*
 * baseOT.cpp
 *
 *  Created on: Mar 20, 2013
 *      Author: mzohner
 */


/* NIST p256 bit elliptic curve prime 2#256 */

char *ecp256 = (char *)"FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF";
/* elliptic curve parameter B */
char *ecb256 = (char *)"5ac635d8aa3a93e7b3ebbd55769886bc651d06b0cc53b0f63bce3c3e27d2604b";
/* elliptic curve - point of prime order (x,y) */
char *ecx256 = (char *)"6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296";
char *ecy256 = (char *)"4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5";

/* NIST p224 bit elliptic curve prime 2#224 */
char *ecp224 = (char *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000000001";
/* elliptic curve parameter B */
char *ecb224 = (char *)"b4050a850c04b3abf54132565044b0b7d7bfd8ba270b39432355ffb4";
/* elliptic curve - point of prime order (x,y) */
char *ecx224 = (char *)"b70e0cbd6bb4bf7f321390b94a03c1d356c21122343280d6115c1d21";
char *ecy224 = (char *)"bd376388b5f723fb4c22dfe6cd4375a05a07476444d5819985007e34";

/* NIST p192 bit elliptic curve prime 2#192-2#64-1 */
char *ecp192 = (char *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF";
/* elliptic curve parameter B */
char *ecb192 = (char *)"64210519E59C80E70FA7E9AB72243049FEB8DEECC146B9B1";
/* elliptic curve - point of prime order (x,y) */
char *ecx192 = (char *)"188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF1012";
char *ecy192 = (char *)"07192B95FFC8DA78631011ED6B24CDD573F977A11E794811";

/* p160 bit elliptic curve prime */
char *ecp160 = (char *) "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFF";
/* elliptic curve parameter B */
char *ecb160 = (char *) "1C97BEFC54BD7A8B65ACF89F81D4D4ADC565FA45";
/* elliptic curve - point of prime order (x,y) */
char *ecx160 = (char *) "4A96B5688EF573284664698968C38BB913CBFC82";
char *ecy160 = (char *) "23A628553168947D59DCC912042351377AC5FB32";

char *ecx163 = (char *) "2fe13c0537bbc11acaa07d793de4e6d5e5c94eee8";
char *ecy163 = (char *) "289070fb05d38ff58321f2e800536d538ccdaa3d9";

char *ecx233 = (char *) "17232ba853a7e731af129f22ff4149563a419c26bf50a4c9d6eefad6126";
char *ecy233 = (char *) "1db537dece819b7f70f555a67c427a8cd9bf18aeb9b56e0c11056fae6a3";

char *ecx283 = (char *) "503213f78ca44883f1a3b8162f188e553cd265f23c1567a16876913b0c2ac2458492836";
char *ecy283 = (char *) "1ccda380f1c9e318d90f95d07e5426fe87e45c0e8184698e45962364e34116177dd2259";

const char* ifcp1024 = "B10B8F96A080E01DDE92DE5EAE5D54EC52C99FBCFB06A3C69A6A9DCA52D23B616073E28675A23D189838EF1E2EE652C013ECB4AEA906112324975C3CD49B83BFACCBDD7D90C4BD7098488E9C219A73724EFFD6FAE5644738FAA31A4FF55BCCC0A151AF5F0DC8B4BD45BF37DF365C1A65E68CFDA76D4DA708DF1FB2BC2E4A4371";//"124325339146889384540494091085456630009856882741872806181731279018491820800119460022367403769795008250021191767583423221479185609066059226301250167164084041279837566626881119772675984258163062926954046545485368458404445166682380071370274810671501916789361956272226105723317679562001235501455748016154805420913";
const char* ifcg1024 = "A4D1CBD5C3FD34126765A442EFB99905F8104DD258AC507FD6406CFF14266D31266FEA1E5C41564B777E690F5504F213160217B4B01B886A5E91547F9E2749F4D7FBD7D3B9A92EE1909D0D2263F80A76A6A24C087A091F531DBF0A0169B6A28AD662A4D18E73AFA32D779D5918D08BC8858F4DCEF97C2A24855E6EEB22B3B2E5";//"115740200527109164239523414760926155534485715860090261532154107313946218459149402375178179458041461723723231563839316251515439564315555249353831328479173170684416728715378198172203100328308536292821245983596065287318698169565702979765910089654821728828592422299160041156491980943427556153020487552135890973413";
const char* ifcq1024 = "F518AA8781A8DF278ABA4E7D64B7CB9D49462353";

const char* ifcp2048 = "AD107E1E9123A9D0D660FAA79559C51FA20D64E5683B9FD1B54B1597B61D0A75E6FA141DF95A56DBAF9A3C407BA1DF15EB3D688A309C180E1DE6B85A1274A0A66D3F8152AD6AC2129037C9EDEFDA4DF8D91E8FEF55B7394B7AD5B7D0B6C12207C9F98D11ED34DBF6C6BA0B2C8BBC27BE6A00E0A0B9C49708B3BF8A317091883681286130BC8985DB1602E714415D9330278273C7DE31EFDC7310F7121FD5A07415987D9ADC0A486DCDF93ACC44328387315D75E198C641A480CD86A1B9E587E8BE60E69CC928B2B9C52172E413042E9B23F10B0E16E79763C9B53DCF4BA80A29E3FB73C16B8E75B97EF363E2FFA31F71CF9DE5384E71B81C0AC4DFFE0C10E64F";//"00b65b726556c9a2402a04b59b68a0cb95da0212463f749b51b5c193b74900bc180346bc26fd0e1e0a8a7401d7bbbeb6af392d5c6d731cb4fad8f9690bd1c4359b8903e922b9da095697734fb70c398578db49449cd9a26171cb477f226c7183aeaef698276a133f2b132d3d7b1ef989f167e4cc5f93c7df56ed1d58c581813918a49a4cbcc80c40a37bc70d8d2710d9496a0c95dd2c54dff7601d40b3537f3cd44c140a8a75e3b2b38cc5a63a7a289fd53642ec198853c9c53608f0ed773499bf93f53dda18c9cbe7aedf64da73adeaae9fe11710ec2584e5d8c249c51a4e7fc7cd76d7fd9253407cfa4c32060e8e7979b7135a413c01b9615dc3386cc9a3709b";
const char* ifcg2048 = "AC4032EF4F2D9AE39DF30B5C8FFDAC506CDEBE7B89998CAF74866A08CFE4FFE3A6824A4E10B9A6F0DD921F01A70C4AFAAB739D7700C29F52C57DB17C620A8652BE5E9001A8D66AD7C17669101999024AF4D027275AC1348BB8A762D0521BC98AE247150422EA1ED409939D54DA7460CDB5F6C6B250717CBEF180EB34118E98D119529A45D6F834566E3025E316A330EFBB77A86F0C1AB15B051AE3D428C8F8ACB70A8137150B8EEB10E183EDD19963DDD9E263E4770589EF6AA21E7F5F2FF381B539CCE3409D13CD566AFBB48D6C019181E1BCFE94B30269EDFE72FE9B6AA4BD7B5A0F1C71CFFF4C19C418E1F6EC017981BC087F2A7065B384B890D3191F2BFA";//"008adeebc1dbabc36b87f623db7b945c15af86cac74eecd9549a18fa14e76278ac94177ee398225b6376806410a18da49c6bea5102a3101c8f43a30a046f59389c6d3d9ca73fe8950c3b02939aa63468c1b1192fabe42f74b9501b1dd5a39d75c9633a60bacd9d2964121853ad9db99667f20728cf0fa0bf40520ee64d733760c8e0ed430c22ce98a1dc0107da70cdf738930d0d878fc9885770ef922e359f9c2960828d09615a50b19ab3630839c74fa939f00fe27d75568a6d3d213d6938d283e244c87a774f50cfa26192965e52687bc8046e940a0fafc558497d2a2f8b33cf1a22a9636f97ac33e8516d676379a016377ea45ae0bb44ccb30c7cb2f85e2ab8";
const char* ifcq2048 = "801C0D34C58D93FE997177101F80535A4738CEBCBF389A99B36371EB";

const char* ifcp3072 = "4660194093823565506151007332698542081380390944320667936220310340292682538415201463451360005469701273992420569531194415296871671272562243754789577412471203509686259933515539120145538889500684305065682267020422897056483203401642088590732633756278140548667640739272073464322452643609409839498807131787408915921523565001045685221279165409792825261753615641493423723165471868882028678262386826730035778207616806238910696112513243832793252430036079010833108716296401084350809152423357477416465451376967706115065572717893335336664895800189754170750266169252030669114411476002012410621336179123441424048589750501111541393610787337793314723136089502117079738181113934544472215273637670210480814609550715859453809706797176331069587697357167970759889883398852942449568449890603652456531060380065260476714266615239827983706919432589669744367350756821903843388105282430635020233707272521317674908786962912228887786913664926989228941514639";//"4789243463423558042555942692067952010762941537156456953540207552393517268106963979997829026263647966345508471957906220742100227273384809716752152112356809825736300757377245802611753896061859326237585053121166511488055185732839278062397760542437485455001142202189435272728709541874806877733850125589928683405291686167533266713936916675782448917821790738415042990061268204756037256482352769204623714637964899766769955563661482997312273357479538189538517145384302735254987990835037196275140131495878169397796729856237474545282819466276030272350690656820774870407765694055030510886563214726305250475193447404448987580428573823087076250936463211266260424571314164485183464492496052322524964994076849736875524485625736125539794888488754272502203109743730459721059579701891700685852089310632886111935746207218212166594263729240408980591141882951231690705885743071588694711524369611401615638599873148777498602296639831856612247665021";
const char* ifcg3072 = "326984479748743614358878489890111032378521682641889472728164592588245254735528952815040417677135099463681521117067228131302984716932197927691804537047698386112034189358693637764887258325546424576668654933254773228919028116187485325776123548207630122958160311311825230114818910264101591293903307807790394765896174615027850669640300925521032111542648598127663424462192520490917608209583615366128345913820058976254028107968965281721876376153097516948596625654797921929621363755081263164203185942482227411046415127689226121648774535224687708280963930985498313715804706762069594298539593719253724193098201932449349224692341850008449711165375995101343314201170357859203662648251088921851885444086613889195257606710405156897225917687758015354941738963422772322756212536951044725465040734436163477969317027796051497934165333064621979305683254912099909723895352817468375097484456065145582788954244042708099846989842764657922387568064";// "2160520890381000056007657643243429873074958704510399432913343295708996752548164839769903341093252559831860900701193192562818688247615415786663735598112460146846795605682700004601839784712647668365990653831938418748005412270836134744826460948248057729380379226401090764535946353265060683782502632969162586096268685152865962222861901267532144917625816876992295984794617310226677399144624190218230425225446163477438826108973805696142676104536334682740626195572874773359182313764494044146238803592517599298886664249718365933398591936954061485060605858266612466425666407440613251131465090157566740372012599597095678634369430696426360778888785815452635230389040236453264600018871371049581621037039225056418281127472896664431348097475952759433511397526843858700296695192163658572951041054351185123394179949273815116087614497977570773174953888408872632726100294942696240394436920568841989388330145750695278253233343153002655304051047";
const char* ifcq3072 = "95729504467608377623766753562217147614989054519467474668915026082895293552781";

#include "baseOT.h"

#ifdef OTEXT_USE_GMP
// mpz_export does not fill leading zeros, thus a prepending of leading 0s is required
void BaseOT::mpz_export_padded(BYTE* pBufIdx, int field_size, mpz_t to_export) {
	size_t size = 0;
	mpz_export(pBufIdx, &size, 1, sizeof(pBufIdx[0]), 0, 0, to_export);

	if (size < field_size) {
		for (int i = 0; i + size < field_size; i++) {
			pBufIdx[i] = 0;
		}
		pBufIdx += (field_size - size);
		mpz_export(pBufIdx, &size, 1, sizeof(pBufIdx[0]), 0, 0, to_export);
	}
}
#endif

void BaseOT::hashReturn(BYTE* ret, BYTE* val, int val_len, int ctr) {
	SHA_CTX sha;
	OTEXT_HASH_INIT(&sha);
	OTEXT_HASH_UPDATE(&sha, (BYTE*) val, val_len);
	OTEXT_HASH_UPDATE(&sha, (BYTE*) &ctr, sizeof(int));
	OTEXT_HASH_FINAL(&sha, ret);

}

void BaseOT::PointToByteArray(BYTE* pBufIdx, int field_size, ECn &point)
{
	int itmp;
	Big bigtmp;
	//compress to x-point and y-bit and convert to byte array
	itmp = point.get(bigtmp);

	//first store the y-bit
	pBufIdx[0] = (BYTE) (itmp & 0x01);

	//then store the x-coordinate (sec-param/8 + 4 byte size)
	big_to_bytes(field_size, bigtmp.getbig(), (char*) pBufIdx+1, true);
}

void BaseOT::ByteArrayToPoint(ECn *point, int field_size, BYTE* pBufIdx) {
	int itmp;
	Big bigtmp;
	itmp = (int) (pBufIdx[0]);

	bytes_to_big(field_size, (const char*) pBufIdx + 1, bigtmp.getbig());
	*point = ECn(bigtmp, itmp);
}


void BaseOT::PointToByteArray(BYTE* pBufIdx, int field_size, EC2 &point)
{
	int itmp;
	Big bigtmp;
	//compress to x-point and y-bit and convert to byte array
	itmp = point.get(bigtmp);

	//first store the y-bit
	pBufIdx[0] = (BYTE) (itmp & 0x01);

	//then store the x-coordinate (sec-param/8 + 4 byte size)
	big_to_bytes(field_size, bigtmp.getbig(), (char*) pBufIdx+1, true);

}

void BaseOT::ByteArrayToPoint(EC2 *point, int field_size, BYTE* pBufIdx) {
	int itmp;
	Big bigtmp;
	itmp = (int) (pBufIdx[0]);

	bytes_to_big(field_size, (const char*) pBufIdx + 1, bigtmp.getbig());
	*point = EC2(bigtmp, itmp);
}


void BaseOT::SampleRandomPoint(EC2 *point, int field_size) {

	Big bigtmp;
	int itmp = rand()%2;
	do
	{
		bigtmp = rand(field_size, 2);
		*point = EC2(bigtmp, itmp);
	}	
	while (point_at_infinity(point->get_point()));
}

void BaseOT::SampleRandomPoint(ECn *point, int field_size) {
	Big bigtmp;
	int itmp = rand()%2;
	do
	{
		bigtmp = rand(field_size, 2);
		*point = ECn(bigtmp, itmp);
	}	
	while (point_at_infinity(point->get_point()));
}


#ifdef OTEXT_USE_GMP
BOOL BaseOT::GMP_Init(int secparam, BYTE* seed) {
	m_SecParam = secparam;
	mpz_init(m_NPState.p);
	mpz_init(m_NPState.g);
	mpz_init(m_NPState.q);
	switch (secparam)
	{
	case 1024:
		mpz_set_str(m_NPState.p, ifcp1024, 16);	mpz_set_str(m_NPState.g, ifcg1024, 16);	mpz_set_str(m_NPState.q, ifcq1024, 16); break;
	case 2048:
		mpz_set_str(m_NPState.p, ifcp2048, 16);	mpz_set_str(m_NPState.g, ifcg2048, 16);	mpz_set_str(m_NPState.q, ifcq2048, 16); break;
	case 3072:
		mpz_set_str(m_NPState.p, ifcp3072, 10);	mpz_set_str(m_NPState.g, ifcg3072, 10);	mpz_set_str(m_NPState.q, ifcq3072, 10); break;
	default:
		mpz_set_str(m_NPState.p, ifcp1024, 16);	mpz_set_str(m_NPState.g, ifcg1024, 16);	mpz_set_str(m_NPState.q, ifcq1024, 16);	m_SecParam = 1024; break;
	}
	
	//TODO: Seed gmp from seed using gmp_randseed (gmp randstate t state, mpz t seed )
	gmp_randinit_mt (m_NPState.rnd_state ); 
	m_NPState.field_size = mpz_sizeinbase(m_NPState.p, 2)/8;
	/*if(secparam != 2048 || secparam != 1024)
	{
		mpz_cdiv_q_ui(m_NPState.q, m_NPState.p, 2);
		mpz_sub_ui(m_NPState.q, m_NPState.p, 1);
	}*/
	return true;
}

BOOL BaseOT::GMP_Cleanup()
{
	//TODO: Further cleanup
	gmp_randclear(m_NPState.rnd_state);
	return TRUE;
}
#endif

BOOL BaseOT::Miracl_Init(int secparam, BYTE* seed) {
	//secparam = 163;
	m_SecParam = secparam;
	miracl *mip = mirsys(secparam, 2);
	//miracl *mip=mirsys(MR_ROUNDUP(abs(163),4),16);  
	char *ecp = NULL, *ecb = NULL, *ecx = ecx160, *ecy = ecy160;

	m_BB = new Big();
	m_BA = new Big();
	m_BP = new Big();
	
	switch (secparam)
	{
	case 160:
		ecp = ecp160;	ecb = ecb160;	ecx = ecx160;	ecy = ecy160;	break;
	case 163: 
		ecx = ecx163;	ecy = ecy163;	m_nM = 163;	m_nA = 7;	m_nB = 6;	m_nC = 3;	*m_BA = 1;	break;
	case 192:
		ecp = ecp192;	ecb = ecb192;	ecx = ecx192;	ecy = ecy192;	break;
	case 224:
		ecp = ecp224;	ecb = ecb224;	ecx = ecx224;	ecy = ecy224;	break;
	case 233: 
		ecx = ecx233;	ecy = ecy233;	m_nM = 233;	m_nA = 74;	m_nB = 0;	m_nC = 0;	*m_BA = 0;	break;
	case 256:
		ecp = ecp256;	ecb = ecb256;	ecx = ecx256;	ecy = ecy256;	break;
	case 283: 
		ecx = ecx283;	ecy = ecy283;	m_nM = 283;	m_nA = 12;	m_nB = 7;	m_nC = 5;	*m_BA = 0;	break;
	default:
		ecp = ecp192;	ecb = ecb192;	ecx = ecx192;	ecy = ecy192;	m_SecParam = 192; break;
	}
	//seed the miracl rnd generator
	irand((long)(*seed));

	//Change the base to read in the parameters
	mip->IOBASE = 16;
	*m_BB = 1;

	if(m_SecParam == 160 || m_SecParam == 192 || m_SecParam == 224 || m_SecParam == 256)
	{
		mip->IOBASE = 16;
		*m_BA = -3;
		*m_BB = ecb;
		*m_BP = ecp;
		ecurve(*m_BA, *m_BB, *m_BP, MR_BEST);
		m_bUsePrimeField = true;
	} 
	else
	{
		ecurve2_init(m_nM, m_nA, m_nB, m_nC, m_BA->getbig(), m_BB->getbig(), false, MR_BEST);
		m_bUsePrimeField = false;
	}

	m_X = new Big();
	m_Y = new Big();
	*m_X = ecx;
	*m_Y = ecy;
	//change the base back
	mip->IOBASE = 10;



	return true;
}

BOOL BaseOT::Miracl_Cleanup()
{
	delete m_Y;
	delete m_X;
	delete m_BA;
	delete m_BB;
	delete m_BP;

	mirexit();

	return TRUE;
}



BOOL BaseOT::Miracl_InitBrick(ebrick* brick, ECn* point)
{
	Big x, y;
	point->getxy(x, y);
	return ebrick_init(brick, x.getbig(), y.getbig(), m_BA->getbig(), m_BB->getbig(), m_BP->getbig(), 8, m_SecParam);
}

BOOL BaseOT::Miracl_InitBrick(ebrick2* brick, EC2* point)
{
	Big x, y;
	point->getxy(x, y);
	return ebrick2_init(brick, x.getbig(), y.getbig(), m_BA->getbig(), m_BB->getbig(), m_nM, m_nA, m_nB, m_nC, 8, m_SecParam);
}


int BaseOT::Miracl_mulbrick(ebrick2* bg, big x, big y, big z)
{
	return mul2_brick(bg, x, y, z);
}

int BaseOT::Miracl_mulbrick(ebrick* bg, big x, big y, big z)
{
	return mul_brick(bg, x, y, z);
}

void BaseOT::Miracl_brickend(ebrick2* bg)
{
	ebrick2_end(bg);
}

void BaseOT::Miracl_brickend(ebrick* bg)
{
	ebrick_end(bg);
}

void BaseOT::Miracl_InitPoint(EC2* point, Big x, Big y)
{
	*point = EC2(x, y);
}

void BaseOT::Miracl_InitPoint(ECn* point, Big x, Big y)
{
	*point = ECn(x, y);
}


/*BOOL BaseOT::Miracl_InitBrick2(ebrick2* brick, ECn* point)
{
	Big x, y;
	point->getxy(x, y);
	return ebrick2_init(brick, x.getbig(), y.getbig(), m_BA->getbig(), m_BB->getbig(), m_nM, m_nA, m_nB, m_nC, 8, m_SecParam);
}*/


void BaseOT::printepoint(epoint *point)
{
	Big x, y;
	epoint_getxyz(point,x.getbig(),y.getbig(),NULL);
	cout << "(" << x << ", " << y << ")" << endl;
}

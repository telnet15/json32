
/************************************************************************************************************************
 * Author	: Aaron E											*
 * Date		: March 2016												*
 * Platforms	: GNU LINUX and Windows											*
 * Hardware	: x86_64 Intel(R) Celeron(R) M CPU  530  @ 1.73GHz GenuineIntel GNU/Linux				*
 * Comment	: Supporting file for JsonCipher1.cpp									*
 ************************************************************************************************************************/


/*--------------------------------------
  JSON DECODER
  JSONCIPHER.H  
---------------------------------- */



/******************************
 *Defined with corresponding  *
 *Ascii code or decimal form 
 *Warning it is in encrypted form
 * it is jumbled
 * ***************************/

#define a 0x72 //0x61 //97 
#define b 0x71 //0x62 //98
#define c 0x68 //0x63 //99
#define d 0x66 //0x64 //100
#define e 0x70 //0x65 //101
#define f 0x69 //0x66 //102
#define g 0x73 //0x67 //103
#define h 0x67 //0x68 //104
#define i 0x78 //0x69 //105
#define j 0x74 //0x6a //106
#define k 0x75 //0x6b //107
#define l 0x62 //0x6c //108
#define m 0x7a //0x6d //109
#define n 0x79 //0x6e //110
#define o 0x77 //0x6f //111
#define p 0x61 //0x70 //112
#define q 0x6b //0x71 //113
#define r 0x6a //0x72 //114
#define s 0x76 //0x73 //115
#define t 0x6f //0x74 //116
#define u 0x64 //0x75 //117
#define v 0x63 //0x76 //118
#define w 0x6d //0x77 //119
#define x 0x6c //0x78 //120
#define y 0x65 //0x79 //121
#define z 0x6e //0x7a //122

/*
 * Dont be confused with this it is just
 * in a HEXADECIMAL form one of the number system
 * it also can be converted into ascii code
 * 
 * */

#define	 A 0x52 //0x41
#define	 B 0x51	//0x42
#define  C 0x48	//0x43
#define	 D 0x46	//0x44
#define	 E 0x50	//0x45
#define	 F 0x49	//0x46
#define	 G 0x53	//0x47
#define	 H 0x47	//0x48
#define	 I 0x58	//0x49
#define	 J 0x54	//0x4a
#define	 K 0x55	//0x4b
#define	 L 0x42	//0x4c
#define	 M 0x5a	//0x4d
#define	 N 0x59	//0x4e	
#define	 O 0x57	//0x4f
#define	 P 0x41	//0x50
#define	 Q 0x4b	//0x51
#define	 R 0x4a	//0x52
#define	 S 0x56	//0x53
#define	 T 0x4f	//0x54
#define	 U 0x44	//0x55
#define	 V 0x43	//0x56
#define	 W 0x4d	//0x57
#define	 X 0x4c	//0x58
#define	 Y 0x45	//0x59
#define	 Z 0x43	//0x5a


/*
 * FUNCTUATIONS	and Special characters
 * in HEXADECIMALS 
 *
 * *  */

#define SPACE		0x20 //0x20       
#define QUESTIONMARK    0x7b //0x3f
#define EXCLAIM		0x31 //0x21
#define LEFT_PAREN	0x2c //0x28
#define RIGHT_PAREN	0x2b //0x29
#define LEFT_BRACKET    0x5b
#define RIGHT_BRACKET   0x5d

#define LEFT_CURL_BRAC  0x3f

#define PERIOD		0x7d //0x2e
#define COLON		      0x3a
#define SEMI_COLON	0x3b
#define DOUB_QUOTE	      0x22
#define SING_QUOTE            0x27
#define COMMA	              0x2c
#define LESS_THAN	      0x3c	/* < */
#define GREATER_THAN	      0x3e
#define AMPERSAND             0x26
#define DOLLAR_SIGN	      0x24
#define NUMBER_SIGN           0X23
#define ASTERISK	      0x2a
#define PERCENT		      0x25
#define PLUS_SIGN             0x2b
#define MINUS_SIGN	0x2d //0x2d
#define EQUAL_SIGN	0x39

/* PREPROCESSOR FOR NUMERIC CHARACTERS*/

#define NUM_1	0x21



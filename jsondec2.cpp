
/************************************************************************************************************************
 * FileName     : JSONENC.CPP
 * ProgName     : ADDPRO-LB DIGITAL BIBLE 2-3.3 ENCRYPTOR v2
 * Author       : Aaron E.                                                                                              *
 * Date         : March 2016,Sat Dec  7 00:55:30 UTC 2019
 ** Platforms	: GNU LINUX,Windows and FreeBSD 14.3-RELEASE (UNIX)									
 * hardware	: x86_64 Intel(R) Celeron(R) M CPU  530  @ 1.73GHz GenuineIntel GNU/Linux				*
 * 		  Linux 4.9.0-9-amd64 #1 SMP Debian 4.9.168-1+deb9u2 (2019-05-13) x86_64 GNU/Linux
 		  Intel(R) i7-7700HQ @ 2.80GHz
 * Desc         : A simple cryptograhic program by means of subtitution                                                 *
 *                my aim is to make more complex encryption or just apply                                               *
 *                the already exist good encryption like AES-512                                                        *
 *                                                                                                                      *
 * Comment      : all this code is orginally from the author. You can destribute, modify and use it with or without     *
 *                the authors permission. You don't owe anything from me and I don't owe anything from you.             *
 *                Sharing is caring!
 *                December 2019 I did some revision I change gets to fgets 'cause, 'gets' from stdio.h is not safe in
 *                today's C language ISO standard. To comply with this standard I made some modification. 
 *                To comply with this standard I made some modificationss
 *
 *                "using namespace std" is also contentious among programmers so I exclude it from the code!
 * To do        : code is poor, code must be concize and readable. Some memmory management                              *
 *                                                                                                                      *
 ************************************************************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jsondecoder.h"
#define MAXFIELD 500

//using namespace std;

class DBEncryptor
{
   public:
	void Message(void)
	{
		printf("\t\tADDPRO-LB DIGITAL BIBLE 2-3.3 DECRYPTOR v2.0\n");
	}
	
	void JsonCipher(void)
	{
	
	    char ClearText[MAXFIELD];

	    char CipheredText[500];
	    int  counter;
	  
	printf("Type or paste Encrypted text :");
	fgets(ClearText, sizeof(ClearText), stdin);
	counter = strlen(ClearText);
	printf("TextLength :%d",counter);
	
	for (int i1 =0; i1 <= counter; i1++)
	{
		/*
		 * Encryption happens here
		 * */
		
		if (ClearText[i1] == 'a'){CipheredText[i1] = a;}
		if (ClearText[i1] == 'b'){CipheredText[i1] = b;}
		if (ClearText[i1] == 'c'){CipheredText[i1] = c;}
		if (ClearText[i1] == 'd'){CipheredText[i1] = d;}
		if (ClearText[i1] == 'e'){CipheredText[i1] = e;}
		if (ClearText[i1] == 'f'){CipheredText[i1] = f;}
		if (ClearText[i1] == 'g'){CipheredText[i1] = g;}
		if (ClearText[i1] == 'h'){CipheredText[i1] = h;}
		if (ClearText[i1] == 'i'){CipheredText[i1] = i;}
		if (ClearText[i1] == 'j'){CipheredText[i1] = j;}
		
		if (ClearText[i1] == 'k'){CipheredText[i1] = k;}
		if (ClearText[i1] == 'l'){CipheredText[i1] = l;}
		if (ClearText[i1] == 'm'){CipheredText[i1] = m;}
		if (ClearText[i1] == 'n'){CipheredText[i1] = n;}
		if (ClearText[i1] == 'o'){CipheredText[i1] = o;}
		if (ClearText[i1] == 'p'){CipheredText[i1] = p;}
		if (ClearText[i1] == 'q'){CipheredText[i1] = q;}
		if (ClearText[i1] == 'r'){CipheredText[i1] = r;}
		if (ClearText[i1] == 's'){CipheredText[i1] = s;}
		if (ClearText[i1] == 't'){CipheredText[i1] = t;}
		if (ClearText[i1] == 'u'){CipheredText[i1] = u;}

		if (ClearText[i1] == 'v'){CipheredText[i1] = v;}
		if (ClearText[i1] == 'w'){CipheredText[i1] = w;}
		if (ClearText[i1] == 'x'){CipheredText[i1] = x;}
		if (ClearText[i1] == 'y'){CipheredText[i1] = y;}
		if (ClearText[i1] == 'z'){CipheredText[i1] = z;}
		
		
		
		if (ClearText[i1] == 'A'){CipheredText[i1] = A;}
		if (ClearText[i1] == 'B'){CipheredText[i1] = B;}
		if (ClearText[i1] == 'C'){CipheredText[i1] = C;}
		if (ClearText[i1] == 'D'){CipheredText[i1] = D;}
		if (ClearText[i1] == 'E'){CipheredText[i1] = E;}
		if (ClearText[i1] == 'F'){CipheredText[i1] = F;}
		if (ClearText[i1] == 'G'){CipheredText[i1] = G;}
		if (ClearText[i1] == 'H'){CipheredText[i1] = H;}
		if (ClearText[i1] == 'I'){CipheredText[i1] = I;}
		if (ClearText[i1] == 'J'){CipheredText[i1] = J;}
		if (ClearText[i1] == 'K'){CipheredText[i1] = K;}
		if (ClearText[i1] == 'L'){CipheredText[i1] = L;}
		if (ClearText[i1] == 'M'){CipheredText[i1] = M;}
		if (ClearText[i1] == 'N'){CipheredText[i1] = N;}
		if (ClearText[i1] == 'O'){CipheredText[i1] = O;}
		if (ClearText[i1] == 'P'){CipheredText[i1] = P;}
		if (ClearText[i1] == 'Q'){CipheredText[i1] = Q;}
		if (ClearText[i1] == 'R'){CipheredText[i1] = R;}
		if (ClearText[i1] == 'S'){CipheredText[i1] = S;}
		if (ClearText[i1] == 'T'){CipheredText[i1] = T;}
		if (ClearText[i1] == 'U'){CipheredText[i1] = U;}
		if (ClearText[i1] == 'V'){CipheredText[i1] = V;}
		if (ClearText[i1] == 'W'){CipheredText[i1] = W;}
		if (ClearText[i1] == 'X'){CipheredText[i1] = X;}
		if (ClearText[i1] == 'Y'){CipheredText[i1] = Y;}	
		if (ClearText[i1] == 'Z'){CipheredText[i1] = Z;}
	

		/*
		 * SPECIAL CHARACTERS
		 */
		
		if (ClearText[i1] == ' '){CipheredText[i1] = SPACE;}
		if (ClearText[i1] == '?'){CipheredText[i1] = QUESTIONMARK;}
		if (ClearText[i1] == '.'){CipheredText[i1] = PERIOD;}
		if (ClearText[i1] == '!'){CipheredText[i1] = EXCLAIM;}
		if (ClearText[i1] == ':'){CipheredText[i1] = COLON;}
		if (ClearText[i1] == '\''){CipheredText[i1] = SING_QUOTE;}
		if (ClearText[i1] == ';'){CipheredText[i1] = SEMI_COLON;}
		if (ClearText[i1] == '"'){CipheredText[i1] = DOUB_QUOTE;}
	
		if (ClearText[i1] == '('){CipheredText[i1] = LEFT_PAREN;}
		if (ClearText[i1] == ')'){CipheredText[i1] = RIGHT_PAREN;}
		if (ClearText[i1] == '['){CipheredText[i1] = LEFT_BRACKET;}
		if (ClearText[i1] == ']'){CipheredText[i1] = RIGHT_BRACKET;}
	
		if (ClearText[i1] == '{'){CipheredText[i1] = LEFT_CURL_BRAC;}

		if (ClearText[i1] == '<'){CipheredText[i1] = LESS_THAN;}
		if (ClearText[i1] == '>'){CipheredText[i1] = GREATER_THAN;}
		if (ClearText[i1] == '&'){CipheredText[i1] = AMPERSAND;}
		if (ClearText[i1] == '$'){CipheredText[i1] = DOLLAR_SIGN;}
		if (ClearText[i1] == '#'){CipheredText[i1] = NUMBER_SIGN;}
		if (ClearText[i1] == '*'){CipheredText[i1] = ASTERISK;}

		if (ClearText[i1] == '%'){CipheredText[i1] = PERCENT;}
		if (ClearText[i1] == '+'){CipheredText[i1] = PLUS_SIGN;}
		if (ClearText[i1] == '-'){CipheredText[i1] = MINUS_SIGN;} /*Minus Sign*/
		if (ClearText[i1] == '='){CipheredText[i1] = EQUAL_SIGN;} /*Double Hypen or equal sign*/


		/*NUMERIC CHARACTERS*/

		if (ClearText[i1] == '1'){CipheredText[i1] = NUM_1;}

	}

		printf("\nPlain Text:");

	  for (int jx=0; jx < counter; jx++)
	  {
	    printf("%c",CipheredText[jx]);
	  }
	     // Agregator[]

	  
	}

};


int main()
{
  // char quiter;
  DBEncryptor msg, Cipher;
  msg.Message();
  Cipher.JsonCipher();
  
  printf("\nExiting...");
  /* for sys command "pause" in windows And Linux/Unix is "sleep 2" */
  system("sleep 3");
 
//	printf("\nDECIMALS  %d ",((gathered[100] = 'a') - 32));
	return 0;
}

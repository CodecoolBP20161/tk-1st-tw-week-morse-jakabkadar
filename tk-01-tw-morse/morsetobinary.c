#include "selfprot.h"
#include <string.h>
#include <stdio.h>

/*
 * Function: MorseToBinary
 * --------------------------------------------
 * converts morse string input bits
 *
 * input: the convertable morse string
 * output: morse in bits
 *
 * returns: the number of used bits for morse
 */

int MorseToBinary(char input[], char output[]) {

	char conv[255] = "";

	int i, k, j, m, n;

	for (i=0; i<=strlen(input); i++){
			switch(input[i]) {
			      case '.' :
			    	 strcat(conv, "1");
			    	 break;
			      case '-' :
			    	 strcat(conv, "111");
			    	 break;
			      case ' ' :
				     strcat(conv, "0");
			         break;
			      case '/' :
				   	 strcat(conv, "000");
			         break;
			      case '\t' :
				   	 strcat(conv, "0000000");
			         break;
			      default:
			    	 strcat(conv, "");
			   }
	}

	int used = (int)strlen(conv) / 8;
	int remainder = (int)strlen(conv) % 8;

	for (k=0; k< used+1; k++) {
		for (j=0; j<8; j++) {
			if (conv[k*8+j] == '0') {
				output[k] <<=1;
			}
			else {
				output[k] <<=1;
				output[k] += 1;
			}
		}
	}

	for (m=0; m<remainder; m++) {
		for (n=0; n<8; n++) {
			if (conv[m*8+n] == '0') {
				output[m] <<=1;
			}
			else {
				output[m] <<=1;
				output[m] += 1;
			}
		}
	}
	return strlen(conv);
}

#include "selfprot.h"
#include <string.h>

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

	int i;
	char conv[15]="";

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
		   }
	}
}

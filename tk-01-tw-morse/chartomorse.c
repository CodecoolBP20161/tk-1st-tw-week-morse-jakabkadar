#include "selfprot.h"
#include <string.h>

/*
 * Function: CharToMorse
 * --------------------------------------------
 * convert characters/numbers to dots and dashes (morse code).
 * the function use the character-morse and number-morse maps
 * from the common header.
 *
 * input: the convertable string
 * output: converted morse string
 *
 * returns: the index of the last converted character of the input
 */
int CharToMorse(char input[], char *output) {

	int i;
	int r;

	for (i=0; i<=strlen(input); i++){

		if (i<strlen(input)-1){
			strcat(output, CHAR_TO_MORSE_ALPHA[((int)input[i])-65]);
			strcat(output, "/");

		} else if (i<strlen(input)){
			strcat(output, CHAR_TO_MORSE_ALPHA[((int)input[i])-65]);

		} else {
			strcat(output, "\n");
			r=input[i-1];
		}
	}

	return r;
}

/*
 * Tokenizer.c
 *
 *  Created on: 14.01.2023
 *      Author: Manuel Schönberger
 */

//Versuch mittels Array Pointer  (funktioniert nicht richtig):

/*

#include <stdio.h>
#include <string.h>

void tokenizeIndices(char *text) {
    int iText = 0;

    printf("0");

    while (text[iText] != '\0') {
    	iText += 1;
        if (text[iText] == ' ') {
        	printf(", %d", iText + 1);
        }
    }
}

void tokenizeAddress(char *text, char **ptr, int *i) {
    int iText = 0;

    ptr[*i] = &text[iText];
    printf("%p", ptr[*i]);

    while (text[iText] != '\0') {
    	iText += 1;
        if (text[iText] == ' ') {
        	ptr[*i] = &text[iText + 1];
        	*i += 1;
        }
    }
}

int main(int argc, char * argv[]) {
    char text[512] = "Ich bin schon groß und vier";

    char **ptr[20];
    int i = 0;

    printf("%s\n\n",text);

    printf("Indices:\n");
    tokenizeIndices(text);
    printf("\n\nAddress:\n");
    tokenizeAddress(text,ptr,&i);

    for(int j; j < i; j += 1) {
    	printf(", %p", ptr[j]);
    }

    return 0;
}

*/

//Anfänglich ohne Array Pointer:

/**/

void tokenizeIndices(char *text) {
    int iText = 0;

    printf("0");

    while (text[iText] != '\0') {
    	iText += 1;
        if (text[iText] == ' ') {
        	printf(", %d", iText + 1);
        }
    }
}

void tokenizeAddress(char *text) {
    char *pAddress = &text[0];

    printf("%p", pAddress);

    while (*pAddress != '\0') {
    	pAddress += 1;


        if (*pAddress == ' ') {
        	printf(", %p", pAddress + 1);
        }
    }
}

int main(int argc, char * argv[]) {
    char text[512] = "Ich bin schon groß und vier";

    printf("%s\n\n",text);

    printf("Indices:\n");
    tokenizeIndices(text);
    printf("\n\nAddress:\n");
    tokenizeAddress(text);

    return 0;
}

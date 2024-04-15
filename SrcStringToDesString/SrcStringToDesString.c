/*
 * SrcStringToDesString.c
 *
 *  Created on: 12.01.2023
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
/*
void copyString(char src[], char des[]) {
	int i = 0;

	while(src[i] != '\0') {
		des[i] = src[i];
		i += 1;
	}

	des[i] = '\0';
}
*/
void copyStringPointer(char *src, char *des) {

	while(*src != '\0') {
		*des++ = *src++;
	}

	*des = '\0';

	/* bessere Variante
	while(*des++ = *src++);
	*/
}


int main(int argc, char * argv[]) {
	char src[] = "Hello World!";
	char des[50];

//	copyString(src,des);
	copyStringPointer(src,des);

	printf("%s", des);

	return 0;
}

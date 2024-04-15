/*
 * Suche nach einer Teilzeichenkette.c
 *
 *  Created on: 15.12.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>

int main(int argv, char * argc[]) {
	char text[] = "dieses da ist es da";
	char pattern[] = "da";

	printf("text:\t\t%s\n",text);
	printf("pattern:\t%s\n\n",pattern);

	int iText = 0;
	int iPattern = 0;
	int patternLen = 0;
	int pos = 0;

	printf("Positionen:\n");

	while (pattern[++iPattern] != '\0') {
	}
	patternLen = iPattern;
	iPattern = 0;

	while (text[++iText] != '\0') {
	}
	text[iText] += ' ';
	iText = 0;

	while (text[iText] != '\0') {
		if (text[iText] == pattern[iPattern]) {
			pos = iText;
			while (text[iText] == pattern[iPattern]) {
				iText += 1;
				iPattern += 1;
			}
			if (iPattern == patternLen) {
				printf("%d\n", pos);
				pos = 0;
				iText -= 1;
			}
			else {
				pos = 0;
				iText -= 1;
			}
			iPattern = 0;
		}
	iText += 1;
	}

	return 0;
}

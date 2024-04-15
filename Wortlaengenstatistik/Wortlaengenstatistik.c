/*
 * Wortlängenstatistik.c
 *
 *  Created on: 14.01.2023
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
#include <string.h>

int patternCheck(char *res, char *check, int wordLength) {
	int iText = 0;
	int iPattern = 0;

	while(check[iText] != '\0') {
		while(check[iText] == res[iPattern]) {
			iText += 1;
			iPattern += 1;
		}

		if(iPattern == wordLength) {
			return 0;
		}

		iText += 1;
		iPattern = 0;
	}

	return 1;
}

void fillCheckArray(char *check, char *res, int wordLength, int *pICheck, int *pCheckLength) {
	int iTemp = 0;
	*pCheckLength += wordLength;

	while(*pICheck < *pCheckLength) {
		check[*pICheck] = res[iTemp];
		*pICheck += 1;
	}
}

int patternCount(char *res, char *text, int wordLength) {
	int iText = 0;
	int iPattern = 0;
	int occ = 0;

	while(text[iText] != '\0') {
		while(text[iText] == res[iPattern]) {
			iText += 1;
			iPattern += 1;
		}

		if(iPattern == strlen(res)) {
			occ += 1;
		}

		iText += 1;
		iPattern = 0;
	}

	return occ;
}

int checkLengthWord(int wordLength, int tempLength) {
	if(tempLength == wordLength) {
		return 1;
	}

	return 0;
}

void copyString(int i, int curIndex, char *text, char *temp) {
	int iTemp = 0;

	while(curIndex < i) {
		temp[iTemp] = text[curIndex];
		curIndex += 1;
		iTemp += 1;
	}

	temp[curIndex] = '\0';
}

int main(int argc, char * argv[]) {
	//Text:
	char text[512] = "Wenn.Fliegen,hinter?Fliegen,fliegen,fliegen?Fliegen,Fliegen.nach?";
	char temp[512];		//extracting word
	char res[512];		//resulting word
	char check[512];	//sum of all adding res

	//Indices:
	int i = 0;			//textcounter (letter)
	int curIndex = 0;	//textcounter (word)
	int iCheck = 0;		//checkcounter

	//String Lengths:
	int textLength = 0;
	int tempLength = 0;
	int wordLength = 1;
	int checkLength = 0;

	//String checking Variables (Boolean):
	int checkVarOccurrence = 0;
	int checkVarPattern = 0;

	//Occurrence counter:
	int occ = 0;

	textLength = strlen(text);

	while(wordLength < textLength) {
		while(i < textLength) {
			//go to end of each word (go through text until a word ends)
			while((text[i] != '.') && (text[i] != ',') && (text[i] != '?')) {
				i += 1;
			}

			//copy previous word into new array and check if word is as long as current value of 'wordLength'
			copyString(i,curIndex,text,temp);
			tempLength = i - curIndex;
			checkVarOccurrence = checkLengthWord(wordLength,tempLength);

			if(checkVarOccurrence == 1) {
				for(int j = 0; j < wordLength; j += 1) {
					res[j] = temp[j];
				}

				//count occurrence of current word and check if current word has previously been used
				occ = patternCount(res,text,wordLength);
				checkVarPattern = patternCheck(res,check,wordLength);

				if(checkVarPattern == 1) {
					printf("%s", res);
					printf("\t\t%d\n", occ);

					checkLength += wordLength;

					//put current word in new array, where used words are being stored
					for(int k = 0; iCheck < checkLength; k += 1) {
						check[iCheck] = res[k];
						iCheck += 1;
					}
					check[iCheck] = ' ';
				}
			}

			i += 1;
			curIndex = i;
		}

		i = 0;
		curIndex = 0;
		wordLength += 1;
	}

	return 0;
}

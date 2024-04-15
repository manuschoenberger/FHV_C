/*
 * Glätten von Messfehlern.c
 *
 *  Created on: 19.01.2023
 *      Author: Manuel Schönberger
 */

#include <stdio.h>

#define LEN 15

struct measures {
	int velocity;
	int height;
};

float mean(float vlct[], int *i) {
	float average = (vlct[*i] + vlct[*(i - 1)]) / 2;

	*i += 1;

	return average;
}

int main(int argc, char * argv[]) {
	float vlct[LEN] = {20,23,124,26,29,20,27,29,113,25,30,38,112,24,126};
	int hgth[LEN] = {400,410,430,430,430,420,450,460,480,490,520,560,610,670,790};

	printf("Velocity w/o filter:\n");
	for(int j = 0; j < LEN; j += 1) {
		printf("%0.1f, ", vlct[j]);
	}

/*	Deklaration of Structs:
	struct measures s1 = {vlct[0],hgth[0]};
	struct measures s2 = {vlct[1],hgth[1]};
	struct measures s3 = {vlct[2],hgth[2]};
	struct measures s4 = {vlct[3],hgth[3]};
	struct measures s5 = {vlct[4],hgth[4]};
	struct measures s6 = {vlct[5],hgth[5]};
	struct measures s7 = {vlct[6],hgth[6]};
	struct measures s8 = {vlct[7],hgth[7]};
	struct measures s9 = {vlct[8],hgth[8]};
	struct measures s10 = {vlct[9],hgth[9]};
	struct measures s11 = {vlct[10],hgth[10]};
	struct measures s12 = {vlct[11],hgth[11]};
	struct measures s13 = {vlct[12],hgth[12]};
	struct measures s14 = {vlct[13],hgth[13]};
	struct measures s15 = {vlct[14],hgth[14]};
*/

	int i = 1;
	float average = 0;

	average = mean(vlct,&i);

	while(i < LEN) {
		if(vlct[i] > (average + 50)) {
			vlct[i] = average;
			average = mean(vlct,&i);
		}
		average = mean(vlct,&i);
	}

	printf("\n\nVelocity with filter:\n");
	for(int j = 0; j < LEN; j += 1) {
		printf("%0.1f, ", vlct[j]);
	}

	return 0;
}

/*
 * Array Rotation.c
 *
 *  Created on: 18.01.2023
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
#define LEN 10

void rotate(int array[], int len){
	int temp = array[LEN - 1];

	for(int i = LEN - 1; i > 0; i -= 1){
		array[i] = array[i - 1];
	}

	array[0] = temp;
}

int main(int argc, char * argv[]) {
	int array[LEN] = {1,2,3,4,5,6,7,8,9,10};

	rotate(array, LEN);

	for(int i; i < LEN; i += 1) {
		printf("%d ", array[i]);
	}

	return 0;
}

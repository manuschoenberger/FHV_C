/*
 * AdventOfCodeFirst.c
 *
 *  Created on: 01.12.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>

#define VALUES_SIZE            (1024 * 16)

int calcMaxCalories(int values[], int valuesLength) {
	int sum = 0;
	int max = 0;

	for (int i = 0; i < valuesLength; i += 1) {
		if(values[i] != 0) {
			sum += values[i];
		}
		else {
			if (sum > max) {
				max = sum;
			}
			sum = 0;
		}
	}
	return max;
}

int stringToInt(char* s) {
    int result = 0;
    int i = 0;
    while ((s[i] >= '0') && (s[i] <= '9')) {
        result = result * 10 + (s[i] - '0');
        i = i + 1;
    }
    return result;
}

int main(int argc, char* argv[]) {
    char* filename = "input.txt";
    int values[VALUES_SIZE];
    int valuesLength = 0;

    printf("Opening file %s\n", filename);
    FILE* infile = fopen("input.txt", "r");
    char input[64];
    while (fgets(input, 64, infile) != NULL) {
        int val = stringToInt(input);
        printf("read: %s, converted: %d\n", input, val);
        values[valuesLength] = val;
        valuesLength = valuesLength + 1;
    }

    fclose(infile);
    printf("end of file.\n");
    printf("Array inhalt:\n");
    for (int i = 0; i < valuesLength; i += 1) {
        printf("%d, ", values[i]);
    }

    values[valuesLength++] = 0;

    int maxCalories = calcMaxCalories(values, valuesLength);

    printf("\n\nMax Calories: %d", maxCalories);

    return 0;
}


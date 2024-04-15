#include <stdio.h>
#include <stdlib.h>

//	#define LOOP "WHILE"
	#define LOOP "FOR"
//	#define LOOP "DO WHILE"

int main(int argc, char * argv[]) {
	int num = 20;
	int i = 1;
	int counterLine = 1;
	int counterRow = 1;

	// WHILE - LOOP

	if (LOOP == "WHILE") {
		printf("WHILE - LOOP:\n");
		while (i < num) {
			if (i % 2 != 0) {
				if (counterLine / counterRow == 1) {
					printf("\t%d\n", i);
					counterLine = 1;
					counterRow += 1;
				}
				else {
					printf("\t%d", i);
					counterLine += 1;
				}
			}

		i += 1;
		}
	}

	// FOR - LOOP

	if (LOOP == "FOR") {
		printf("FOR - LOOP:\n");
		for (i = 1; i < num; i += 1) {
			if (i % 2 != 0) {
				if (counterLine / counterRow == 1) {
					printf("\t%d\n", i);
					counterLine = 1;
					counterRow += 1;
				}
				else {
					printf("\t%d", i);
					counterLine += 1;
				}
			}

		i += 1;
		}
	}

	// DO WHILE - LOOP

	if (LOOP == "DO WHILE") {
		printf("DO WHILE - LOOP:\n");
		do {
			if ((i % 2 != 0) && (i <= num)){
				if (counterLine / counterRow == 1) {
					printf("\t%d\n", i);
					counterLine = 1;
					counterRow += 1;
				}
				else {
					printf("\t%d", i);
					counterLine += 1;
				}
			}

		i += 1;
		} while (i < num);
	}

	if (i == 1){
		printf("\t%d", i);
	}

	return 0;
}

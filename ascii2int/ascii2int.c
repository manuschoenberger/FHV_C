#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	char string[] = "12A";
	int i = 0;

	if ((string[i] < 58) && (string [i] > 47)) {
		while (string[i] != '\0') {
			if ((string[i] < 58) && (string [i] > 47)) {
				string[i] -= '0';
				printf("%d", string[i]);
			}
			else {
				break;
			}

			i = i + 1;
		}
	}

	else {
		printf("0");
	}

	return 0;
}


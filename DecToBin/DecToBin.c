#include <stdio.h>
#include <stdlib.h>
int main() {
	int num, remainder, bin, i = 1;
	scanf("%d", &num);
	int sNum = num;

	while (num != 0) {
		remainder = num % 2;
		num /= 2;
		bin += remainder * i;
		i *= 10;
	}

	printf("%d in binary is %d", sNum, bin);

	return 0;
}


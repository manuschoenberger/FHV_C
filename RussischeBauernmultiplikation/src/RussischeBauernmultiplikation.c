#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, res = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	int sA = a;
	int sB = b;

	int cancelVarB = 0;

	while (a >= 1) {
		if (a % 2 == 0) {
			cancelVarB = b;
		}
		res = res + b - cancelVarB;
		a /= 2;
		b *= 2;
		cancelVarB = 0;
	}

	printf("%d * %d = %d", sA, sB, res);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]) {

	//Array von char ist eine String

	char helloString[] = "Hallo Hallo Hallo";

	printf("String: %s\n", helloString);
	printf("\n");

	// String zeichenweise ausgeben

	int i = 0;
	while (helloString[i] != '\0') {
		printf("Zeichen: %c\n", helloString[i]);
		i += 1;
	}
	i = 0;

	printf("\n");


	// String zeichenweise ausgeben (mit ASCII und HEX)

	while (helloString[i] != '\0') {
		printf("Zeichen: %c, \tASCII %03d, \thex: %X\n", helloString[i], helloString[i], helloString[i]);
		i += 1;
	}
	i = 0;

	printf("\n");


	// Länge eines Strings bestimmen

	while (helloString[i] != '\0') {
		i += 1;
	}

	printf("Zeichenanzahl: %d\n", i);
	i = 0;

	while (helloString[++i] != '\0') {
	}

	printf("Zeichenanzahl: %d\n", i);
	printf("\n");


	//Zeichen invertieren

	while (--i >= 0) {
		printf("%c", helloString[i]);
	}

	return 0;
}



#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	int P = 1;
	int s = 2;
	int i;
	for (i = 1; i <= 4; i++) {
		P = P * 2 * i;
		int S = S + 3 * P;
		printf("S = %i\n", S);
	}
	system("pause");
}

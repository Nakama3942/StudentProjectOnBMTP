#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main() {
	int S = 0;
	int n = 1;
	int i;
	for (i = 1; i <= 3; i++) {
		int s = S + i;
		n = n * s;
		printf("S = %i\n", S);
	}
	system("pause");
}

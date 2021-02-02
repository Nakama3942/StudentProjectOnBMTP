/*Чему равно S во фрагменте: "S=0; for i=1->5: k=1+i, S=S+2*k"*/

#include <stdio.h>

void main() {
	int S = 0;
	int k;

	int i;
	for (i = 1; i <= 5; i++) {
		k = 1 + i;
		S = S + 2 * k;
	}
	printf("S = %i\n", S);
	system("pause");
}

/*Может ли быть  завершено использование оператора цикла, который
начинается таким образом: while (fabs(x)+1>0.793) {..;}*/

#include <stdio.h>
#include <math.h>

int main() {
	float x;

	printf("X = ");
	scanf("%f", &x);

	while (fabs(x) + 1 > 0.793) {
		x++;
		printf("\nX = %5.3f\n", x);
	}
	system("pause");
	return 0;
}

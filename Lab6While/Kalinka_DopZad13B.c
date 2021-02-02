/*В каком из вариантов значение переменной X будет завершать оператор цикла:
вариант A: while (x<1.3) {x=x*x;}
вариант B: while (fabs(x)>=1) {x--;}
вариант C: while (2*x>x) {x--;}
вариант D: while (x*x>=0) {x=sin(x)+1.315;}

Это вариант B*/

#include <stdio.h>
#include <math.h>

int main() {
	float x;

	printf("X = ");
	scanf("%f", &x);

	while (fabs(x) >= 1) {
		x--;
		printf("\nX = %5.3f\n", x);
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <math.h>
#include <Windows.h>

int x;
float y;

void f(int x) {
	if (x < 0) {
		y = x * x + 1;
		printf("\nПри X = %i: Y = %.3f\n", x, y);
	}
	else {
		y = 1.7 * x * x * x + fabs(cos(x) - 2.1);
		printf("\nПри X = %i: Y = %.3f\n", x, y);
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите значение X: ");
	scanf("%i", &x);
	f(x);
	system("pause");
}

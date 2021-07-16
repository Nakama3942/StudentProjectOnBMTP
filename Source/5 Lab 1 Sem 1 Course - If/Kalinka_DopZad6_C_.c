#include <stdio.h>
#include <math.h>
#include <Windows.h>

float x, y;

void f(int x) {
	if ((x > -15 && x < 1) || (x > 15 && x < 30)) {
		y = x / 2. + 5;
		printf("\nПри X = %i: Y = %f\n", x, y);
	}
	else if ((x > 5 && x < 10) || (x > 40)) {
		y = (x * x) + (1. / x);
		printf("\nПри X = %i: Y = %f\n", x, y);
	}
	else {
		printf("\nРешение отстутствует.\n");
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите значение X: ");
	scanf("%f", &x);
	f(x);
	system("pause");
}

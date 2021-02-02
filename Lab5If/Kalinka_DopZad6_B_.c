#include <stdio.h>
#include <math.h>
#include <Windows.h>

int x, y;

void f(int x) {
	if (x > -20 && x < 0) {
		y = x * x * x - 2 * x;
		printf("\nПри X = %i: Y = %i\n", x, y);
	}
	else if (x > 5) {
		y = x - x * x;
		printf("\nПри X = %i: Y = %i\n", x, y);
	}
	else {
		printf("\nРешение отстутствует.\n");
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

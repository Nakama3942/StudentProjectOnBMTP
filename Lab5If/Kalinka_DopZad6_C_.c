#include <stdio.h>
#include <math.h>
#include <Windows.h>

float x, y;

void f(int x) {
	if ((x > -15 && x < 1) || (x > 15 && x < 30)) {
		y = x / 2. + 5;
		printf("\n��� X = %i: Y = %f\n", x, y);
	}
	else if ((x > 5 && x < 10) || (x > 40)) {
		y = (x * x) + (1. / x);
		printf("\n��� X = %i: Y = %f\n", x, y);
	}
	else {
		printf("\n������� ������������.\n");
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� �������� X: ");
	scanf("%f", &x);
	f(x);
	system("pause");
}

/*� ����� �� ��������� �������� ���������� X ����� ��������� �������� �����:
������� A: while (x<1.3) {x=x*x;}
������� B: while (fabs(x)>=1) {x--;}
������� C: while (2*x>x) {x--;}
������� D: while (x*x>=0) {x=sin(x)+1.315;}

��� ������� C*/

#include <stdio.h>

int main() {
	float x;

	printf("X = ");
	scanf("%f", &x);

	while (2 * x > x) {
		x--;
		printf("\nX = %5.3f\n", x);
	}
	system("pause");
	return 0;
}
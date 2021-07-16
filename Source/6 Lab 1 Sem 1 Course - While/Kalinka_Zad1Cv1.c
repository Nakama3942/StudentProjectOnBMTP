/*��� ������� F(x)=x-2+sin(1/2); ������� �� 1,2 �� 2; ���������� �����  - 10;
����� ������������� ������, ��������� ����-����� �������� � ��������� ���
���������� ������� �������� ������� F(x) �� ��������� �� a �� b � �����
h=(b-a)/m, ��� m - ������� ����� �����. ���, ��� ����� - ��������� ���.
������� ��� �������� �������: 1)�������� ���������� � ������ ��������� ��
�������� xi=a+i*h (������������ ���� � ����������), ������ ������� � �����
"��� x[1]=<��������> ������� y[1]=<��������>"; 2)�������� ���������� � ������
��������� �� �������� x=x+h, ������ ������� � ����� �������, ��� x � y ���������
� ����� �������, � ���������� ���������� ����������� ���� �������������� ��� ����.*/

#include <stdio.h>
#include <math.h>
#include <Windows.h>

void f(float x);
float y;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	float a = 1.2; //������ �������
	float b = 2; //����� �������
	float m = 10; //���������� ����� �� �������
	float xi = a; //��������� �����

	float h = (b - a) / m; //����������� ���� �������
	
	float xy; //����� ��� ������ ���� �� X ��������, �� ��� ���������� Y

	int i = 1;
	for (i; i <= 10; i++) {
		xi = xi + h;
		xy = xi;
		f(xi);
		printf("��� X[%2i] = %4.2f: ������� Y[%4.2f] = %4.3f\n", i, xi, xy, y);
	}
	system("pause");
	return 0;
}
void f(float x) {
	/*��� ��� � ������� ��������� ������������ �������: ��� �������� �������� 1/2 ������
	��� �� �������, � ��� �������� 0.5 ����� ������ �������� ����������, � ��� ��������
	�������� sin(1/2) � ��������� ��� ������� �������� � �������*/
	y = x - 2 + 0.008;
}
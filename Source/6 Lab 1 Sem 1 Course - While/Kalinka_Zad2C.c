#include <stdio.h>
#include <math.h>
#include <Windows.h>

const float eps = 1E-6;
const float cosiks = cos(18);

int factorial(int n) { //�������� �������, ������� ����� ������� ���������
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double Maklorcosiks = 1; //����� "Maklorcosiks" ������������ ����� ������� ���� � ���� ���������
	int n = 0; //���������� ���������
	double an;
	
	do {
		n++; //���������� ����� �� �������
		int n2 = 2 * n; //��������������� ����������
		
		double oneinn = pow(-1, n); //������ ����� - ������� -1 � ������� �
		double x2n = pow(cosiks, n2); //������ ����� - ������� ��� � ������� 2�
		int fact2n = factorial(n2); //������ ����� - ������ ��������� ����� 2�

		an = oneinn * (x2n / fact2n); //��������� ��� ��� ����� � ������� ��� ���������� a_n
		Maklorcosiks = Maklorcosiks + an; //���������� ����� "an" � "b" ���
		printf("%lf    %lf\n", Maklorcosiks, an); //��� �������� ����������� ���������
	} while (fabs(an) >= eps);
	/*���� ����� ��������� ���� �� ��� ���, ���� �� �� ������ ������ ����-��,
	������ �� �����������, ���� �� ������ ����� ����-�� � ��������� � ���� (�����������),
	������� ���� ����������� ���� an ������ eps, � � ������ ����� an ����������� ��
	������, � ����� an ������ ������ eps - ���� ����������.*/

	printf("\n��� cos(18)[�������������� =%.2f] ��� �������� %e; %.2f = %lf ��� ���������� ��������� %i.\n\n", cosiks, eps, cosiks, Maklorcosiks, n);
	system("pause");

	return 0;
}

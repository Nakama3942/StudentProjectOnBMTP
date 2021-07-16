#include <stdio.h>
#include <math.h>
#include <Windows.h>

const float eps = 1E-6;
const float cosiks = cos(18);

int factorial(int n) { //Объявляю функцию, которая будет считать факториал
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

	double Maklorcosiks = 1; //Здесь "Maklorcosiks" представляет собой косинус икса в ряде Маклорена
	int n = 0; //Количество элементов
	double an;
	
	do {
		n++; //Увеличиваю номер на единицу
		int n2 = 2 * n; //Вспомогательная переменная
		
		double oneinn = pow(-1, n); //Первое число - возвожу -1 в степень н
		double x2n = pow(cosiks, n2); //Второе число - возвожу икс в степень 2н
		int fact2n = factorial(n2); //Третье число - нахожу факториал числа 2н

		an = oneinn * (x2n / fact2n); //Подставил все три числа в формулу для нахождения a_n
		Maklorcosiks = Maklorcosiks + an; //Увеличиваю число "an" в "b" раз
		printf("%lf    %lf\n", Maklorcosiks, an); //Для проверка исправности программы
	} while (fabs(an) >= eps);
	/*Если нужно выполнять цикл до тех пор, пока он не станет меньше чего-то,
	значит он выполняется, пока он больше этого чего-то и стремится к нему (уменьшается),
	поэтому цикл выполняется пока an больше eps, и с каждым разом an становиться всё
	меньше, и когда an станет меньше eps - цикл закончится.*/

	printf("\nДля cos(18)[приблизительно =%.2f] при точности %e; %.2f = %lf при количестве элементов %i.\n\n", cosiks, eps, cosiks, Maklorcosiks, n);
	system("pause");

	return 0;
}

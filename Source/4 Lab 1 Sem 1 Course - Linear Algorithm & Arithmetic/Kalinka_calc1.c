#include <math.h>
#include <stdio.h>
#include <Windows.h>

int main(void) {
    //Задаю ввод и вывод текста на русском
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Задаю основные переменные
    float x;
    double y;
    //Прошу ввести значение Х и записую его значение
    printf("Введите значение Х=");
    scanf("%f", &x);
    //Прописую формулы
    double a = (((3 * sin(x)) - (sin(3 * x))) / 4);
    double b = ((1 + cos(2 * x)) / 2);
    double c = pow(fabs(x), 0.3);
    double d = pow(x, 0.875);
    d = 3 + d;
    y = ceil((a + b - c) / (d));
    //Вывожу информацию расчётов
    printf("\r\nЛабораторная работа №4;\r\n");
    printf("Группа КМ-20\r\n");
    printf("Калиновский В.М.\r\n\r\n");
    printf("Формула Y=ceil((a+b-c)/(d))\r\n");
    printf("a=(((3*sin(x))-(sin(3*x)))/4)\r\n");
    printf("b=((1+cos(2*x))/2)\r\n");
    printf("c=pow(fabs(x), 0.3)\r\n");
    printf("d=pow(x, 0.875); d=3+d\r\n");
    printf("\r\n");
    printf("Результаты расчётов для X=%f: Y=%lf\r\n\r\n", x, y);
    system("pause");
    return 0;
}

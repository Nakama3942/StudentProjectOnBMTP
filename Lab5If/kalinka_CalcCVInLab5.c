#include <stdio.h>
#include <Windows.h>
#include <Math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double c = 0.2;
    double d = 0.1;
    double x, y, z, v;

    x = c - d;
    y = d * (cos(x) * cos(x) * cos(x));
    double yinc = pow(y, c + 1);
    z = yinc + (x / y);
    if (y < z) {
        v = x + y;
        printf("Входные данные: C = %lf; D = %lf. Выходные данные: X = %lf; Y = %lf; Z = %lf; так как Y < Z, то V1 = %lf.\n", c, d, x, y, z, v);
    }
    else {
        v = pow(y, 2 * z);
        printf("Входные данные: C = %lf; D = %lf. Выходные данные: X = %lf; Y = %lf; Z = %lf; так как Y >= Z, то V2 = %lf.\n", c, d, x, y, z, v);
    }
    system("pause");
    return 0;
}

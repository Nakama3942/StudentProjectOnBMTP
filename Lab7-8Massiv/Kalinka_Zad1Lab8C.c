/*Подсчитать в каждом столбике матрицы, сколько там нолевых элементов*/

#include <stdio.h>
#include <Windows.h>
#define NumMass 3

int N1 = 0, N2 = 0, N3 = 0;

void NN(int i) {
    if (i == 0) {
        N1++;
    }
    else if (i == 1) {
        N2++;
    }
    else {
        N3++;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i = 0;
    
    int Matrix1[NumMass] = { 0, -3, 0 };
    int Matrix2[NumMass] = { 0, 0, 4 };
    int Matrix3[NumMass] = { 1, 5, 0 };
    int Matrix4[NumMass] = { 2, 6, 0 };

    for (i; i < NumMass; i++) {
        if (Matrix1[i] == 0) {
            NN(i);
        }
        if (Matrix2[i] == 0) {
            NN(i);
        }
        if (Matrix3[i] == 0) {
            NN(i);
        }
        if (Matrix4[i] == 0) {
            NN(i);
        }
    }
    printf("Количество нолевых элементов в первом стобце: %i, во втором: %i, в третьем: %i.\n", N1, N2, N3);
    system("pause");
}

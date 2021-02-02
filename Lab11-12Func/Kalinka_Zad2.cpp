//Написать подпрограмму-функцию, которая будет считать суммы всех
//позитивных элементов, каждого ряда A(10; 20) и B(15; 10)

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void GenSortMassiv(char N, int a, int b) {
    srand(time(NULL)); //Нужно для генерации реально рандомного массива, которая зависит только от текущего времени
    cout << "\n\nГенерируем массив " << N << "(" << a << ", " << b << "):\n";
    int Massiv[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            Massiv[i][j] = (-50) + rand() % 100;
            if (j == b - 1) cout << Massiv[i][j] << "\n";
            else cout << Massiv[i][j] << "  ";
        }
    }

    cout << "\n" << "Считаем суммы позитивных элементов каждой строчки массива:";
    int SumEL[a];
    for (int m = 0; m < a; m++) {
        SumEL[m] = 0;
        for (int n = 0; n < b; n++) {
            if (Massiv[m][n] > 0) SumEL[m] += Massiv[m][n]; //Считаю положительные числа
            if (n == b - 1) cout << "\n" << "Строчка №" << m + 1 << ": сумма равна " << SumEL[m];
        }
    }
}

int main() {
    GenSortMassiv('A', 10, 20); //Вызываю функцию для генерации массива 10 на 20
    GenSortMassiv('B', 15, 10); //Вызываю функцию для генерации массива 15 на 10
    cin.get();
    return 0;
}

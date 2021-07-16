#include <iostream>
#include <math.h>
#include <random>
#include <ctime>
#ifndef _KalinkaLibForLab1112_
#define _KalinkaLibForLab1112_

using namespace std;

//==========   Код для первой программы из этой лабораторки   ==========

float Perimetr(float TablDlin[], int NKut) {
    float Perim = TablDlin[0];
    for (int j = 1; j < NKut; j++) Perim = Perim + TablDlin[j];
    return Perim;
}

void CountDlin(int TablCoord[][2], int NKut) {
    //Создаю массив, который будет хранить длины сторон
    float TablDlin[NKut];
    for (int k = 0; k < NKut; k++) {
        if (k == NKut - 1) TablDlin[k] = sqrt(((TablCoord[0][0] - TablCoord[k][0]) * (TablCoord[0][0] - TablCoord[k][0])) + ((TablCoord[0][1] - TablCoord[k][1]) * (TablCoord[0][1] - TablCoord[k][1])));
        else TablDlin[k] = sqrt(((TablCoord[k + 1][0] - TablCoord[k][0]) * (TablCoord[k + 1][0] - TablCoord[k][0])) + ((TablCoord[k + 1][1] - TablCoord[k][1]) * (TablCoord[k + 1][1] - TablCoord[k][1])));
        cout << "\nСторона N" << k + 1 << " = " << TablDlin[k];
    }
    cout << "\n\nПериметр равен " << Perimetr(TablDlin, NKut) << "\n\n";
}

void CreatedMassiv(int NKut) {
    //В следующем цикле пользователь вводит координаты углов. Они записываются в массив
    int TablCoord[NKut][2];
    for (int i = 0; i < NKut; i++) {
        cout << "\n\nВведите координаты " << i + 1 << " угла:";
        cout << "\nX = ";
        cin >> TablCoord[i][0];
        cout << "Y = ";
        cin >> TablCoord[i][1];
    }
    cout << "\n\nЗначения притняты. Вызываем функции расчёта длин и периметра...";
    CountDlin(TablCoord, NKut);
}

int Start() {
    int NKut;
    cout << "Введите количество углов в Н-кутнике: ";
    cin >> NKut; //Ввожу количество углов - размер массива
    return NKut;
}

//==========   Код для второй программы из этой лабораторки   ==========

void GenSortMassiv(char N, int a, int b) {
    srand(time(NULL));
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
            if (Massiv[m][n] > 0) SumEL[m] += Massiv[m][n];
            if (n == b - 1) cout << "\n" << "Строчка №" << m + 1 << ": сумма равна " << SumEL[m];
        }
    }
}

#endif
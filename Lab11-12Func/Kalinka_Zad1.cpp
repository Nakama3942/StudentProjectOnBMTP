//Написать подпрограмму-функцию, которая будет находить периметр Н-кутников,
//корды вершин которого заданы в массивах X, Y; длина считается в подпрограмме

//d1 = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))) формула для нахождения стороны
//dn = sqrt(((x(n+1)-xn)*(x(n+1)-xn))+((y(n+1)-yn)*(y(n+1)-yn))) формула для нахождения стороны

#include <iostream> //Подключаю эту библиотеку, так как только она корректно работает с вводом значений в двумерный массив
#include <math.h>

using namespace std;

//Функция расчёта периметра
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

int main() {
    CreatedMassiv(Start());
    cin.get(); cin.get();
    return 0;
}

/*Найти самый большой элемент и поменять его местами с последним*/

#include <stdio.h>
#include <Windows.h>
#define NumMass 23

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float MassivX[NumMass] = {-12.4, 0, 12.3, -1, 0.01, 0, 123.3, -18.97, 0, 0.8, 10.01, -1.2, 11.2, 12.3, 13.6, 0, -5.2, 12.3, -111.3, 45.7, -6.7, 0, 2.1};
    
    int i;
    int k;
    int n;
    
    float ZnachMass1 = MassivX[0];
    float ZnachMass2;
    
    for (i = 1; i < NumMass; i++) {
        ZnachMass2 = MassivX[i];
        if (ZnachMass1 < ZnachMass2) {
            ZnachMass1 = ZnachMass2;
        }
        printf("Проверка: Первое значение: %.2lf; второе значение: %.2lf\n", ZnachMass1, ZnachMass2);   
    }
    if (i == NumMass) {
        for (k = 0; k < NumMass; k++) {
            ZnachMass2 = MassivX[k];
            if (ZnachMass2 == ZnachMass1) {
                MassivX[k] = MassivX[22];
            }
        }
    }
    MassivX[22] = ZnachMass1;
    
    printf("\nМассив: ");
    for (n = 0; n < NumMass; n++) {
        printf(" %.2lf,", MassivX[n]);
    }

    printf("\n\nПоследнее число - самое большое: %.2lf.\n", ZnachMass1);
    system("pause");
}
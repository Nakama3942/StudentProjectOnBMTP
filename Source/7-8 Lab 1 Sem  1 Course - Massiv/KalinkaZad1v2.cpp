#include <iostream>
#include <ctime>

using namespace std;

void PrintMass(int *Mass, int Cap)
{
    for (int i = 0; i < Cap; i++)
        cout << Mass[i] << "\n";
}

void checkPlusMass(int *Mass, int Cap)
{
    int NewCap = 0, copyCap = 0;
    for (int i = 0; i < Cap; i++)
        if (Mass[i] >= 1)
            NewCap++;
    int newMass[NewCap];
    for (int i = 0; i < Cap; i++)
        if (Mass[i] >= 1)
        {
            newMass[copyCap] = Mass[i];
            copyCap++;
            Mass[i] *= -1;
        }
    cout << "Новый массив из положительных элементов: \n";
    PrintMass(newMass, NewCap);
}

void GenElMass(int *Mass, int Cap)
{
    srand(time(NULL));
    for (int i = 0; i < Cap; i++)
        Mass[i] = -7 + rand() % 27;
}

int main()
{
    srand(time(NULL));
    int Capacity = rand() % 34;
    int Massiv[Capacity];
    GenElMass(Massiv, Capacity);
    cout << "Старый массив: \n";
    PrintMass(Massiv, Capacity);
    checkPlusMass(Massiv, Capacity);
    cout << "Старый переписанный массив: \n";
    PrintMass(Massiv, Capacity);
    cin.get();
    return 0;
}

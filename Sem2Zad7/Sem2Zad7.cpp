#include <random>
#include <time.h>
#include <iostream>
using namespace std;

const int gLEN = 10;
const int latinaAlpha = 26;
const int coord = 2;

void spaceNum(int Num)
{
    int lenNum;
    if (Num / 10000 >= 1) lenNum = 5;
    else if (Num / 1000 >= 1) lenNum = 4;
    else if (Num / 100 >= 1) lenNum = 3;
    else if (Num / 10 >= 1) lenNum = 2;
    else lenNum = 1;
    char spaceNum[lenNum];
    for (int i = lenNum; i > 0; i--)
    {
        spaceNum[i - 1] = (Num % 10) + 48; //В таблице ASCII 0 начинается на 48 элементе
        Num /= 10;
    }
    for (int i = 0; i < lenNum; i++)
        cout << spaceNum[i] << "  ";
}

void coordC(int AB[coord][coord], int C[coord])
{
    C[0] = (AB[0][0] + AB[1][0]) / 2;
    C[1] = (AB[0][1] + AB[1][1]) / 2;
}

int elLat(char mass[gLEN])
{
    char alf[latinaAlpha] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int elLat = 0;
    for (int i = 0; i < gLEN; i++)
        for (int j = 0; j < latinaAlpha; j++)
            if (mass[i] == alf[j])
                elLat++;
    return elLat;
}

int main()
{
    char mass[gLEN] = {'b', 'c', 'd', 'e', '4', '3', '7', 'y', '9', 'g'};
    int AB[coord][coord] = { {2, 1}, {4, 9} }, C[coord];
    cout << "Quantity latina elements: " << elLat(mass);
    coordC(AB, C);
    cout << "\nCoordinate C: (" << C[0] << "; " <<C[1] << ").\n";
    srand(time(NULL));
    int randNum = 1 + rand() % 32766;
    spaceNum(randNum);
    cin.get();
    return 0;
}

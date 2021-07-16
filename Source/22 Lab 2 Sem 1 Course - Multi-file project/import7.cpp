#include "import7.h"

int Lenght(int Num, int count)
{
    if(Num /= 10 >= 1) return Lenght(Num /= 10, count + 1);
    else return count;
}

void spaceNum(int Num)
{
    int lenNum = Lenght(Num, 0);
    char spaceNum[lenNum];
    for (int i = lenNum; i > 0; i--)
    {
        spaceNum[i - 1] = (Num % 10) + 48; //В таблице ASCII 0 начинается на 48 элементе
        Num /= 10;
    }
    for (int i = 0; i < lenNum; i++)
        std::cout << spaceNum[i] << "  ";
}

void coordC(int AB[coord][coord], float C[coord])
{
    C[0] = (AB[0][0] + AB[1][0]) / 2.;
    C[1] = (AB[0][1] + AB[1][1]) / 2.;
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

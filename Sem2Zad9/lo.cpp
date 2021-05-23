#include "lo.h"

void load(char mass[gLEN], int AB[coord][coord])
{
    FILE *Mass = fopen("Mass1.txt", "rt");
    FILE *Coord = fopen("Coord2.bin", "rb");
    for(int i = 0; i < gLEN; i++)
    {
        fseek(Mass, i * 2, SEEK_SET);
        fscanf(Mass, "%c", &mass[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        fseek(Coord, i * 3, SEEK_SET);
        if(i < 2) fscanf(Coord, "%i", &AB[0][i]);
        else fscanf(Coord, "%i", &AB[1][i - 2]);
    }
    fclose(Mass);
    fclose(Coord);
}

void output(char mass[gLEN], int AB[coord][coord], float C[coord])
{
    std::cout << "Quantity latina elements: " << elLat(mass);
    coordC(AB, C);
    std::cout << "\nCoordinate C: (" << C[0] << "; " << C[1] << ").\n";
    srand(time(NULL));
    int randNum = 1 + rand() % 32766;
    spaceNum(randNum);
}

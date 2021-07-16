#include "revrite.h"

void saveLat()
{
    char newMass[gLEN];
    for(int i = 0; i < gLEN; i++)
    {
        cout << "\nPlease, input " << i << "th element for new string (" << i + 1 << " out of " << gLEN << "):\n";
        cin >> newMass[i];
    }
    FILE *Mass = fopen("Mass1.txt", "wt");
    for(int i = 0; i < gLEN; i++)
    {
        fseek(Mass, i * 2, SEEK_SET);
        fprintf(Mass, "%c", newMass[i]);
    }
    fclose(Mass);
    cout << "Quantity new latina elements: " << elLat(newMass);
}

void saveCoord()
{
    int newAB[coord][coord];
    float newC[coord];
    for(int i = 0; i < 4; i++)
    {
        if(i < 2)
        {
            cout << "\nPlease, input " << i + 1 << " coord for A:\n";
            cin >> newAB[0][i];
        }
        else
        {
            cout << "\nPlease, input " << i - 1 << " coord for B:\n";
            cin >> newAB[1][i - 2];
        }
    }
    FILE *Coord = fopen("Coord2.bin", "wb");
    for(int i = 0; i < 4; i++)
    {
        fseek(Coord, i * 3, SEEK_SET);
        if(i < 2) fprintf(Coord, "%i", newAB[0][i]);
        else fprintf(Coord, "%i", newAB[1][i - 2]);
    }
    fclose(Coord);
    coordC(newAB, newC);
    cout << "\nNew coordinate C: (" << newC[0] << "; " << newC[1] << ").\n";
}

void DelContent(int nfile)
{
    if(nfile == 1)
    {
        FILE *Mass = fopen("Mass1.txt", "wt");
        fclose(Mass);
    }
    else if(nfile == 2)
    {
        FILE *Coord = fopen("Coord2.txt", "wb");
        fclose(Coord);
    }
}

void revrite()
{
    char consert;
    cout << "\nRewrite the string for the first work? (1 - yes, 0 - delete, other - skip)";
    cin >> consert;
    switch (consert)
    {
    case '1':
        saveLat();
        break;
    case '0':
        DelContent(1);
        break;
    }
    cout << "\nAnd for the second work? (1 - yes, 0 - delete, other - skip)";
    cin >> consert;
    switch (consert)
    {
    case '1':
        saveCoord();
        break;
    case '0':
        DelContent(2);
        break;
    }
}

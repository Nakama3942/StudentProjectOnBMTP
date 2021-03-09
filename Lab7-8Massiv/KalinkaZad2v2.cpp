#include <iostream>

using namespace std;

void printMass(int Mass[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << Mass[i][j] << " ";
        cout << "\n";
    }
}

void sortMass(int Mass[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int m = 0; m < 4; m++)
        {
            int transit = Mass[i][m];
            for (int j = m; j < 4; j++)
            {
                if (transit < Mass[i][j])
                    transit = Mass[i][j];
            }
            for (int j = m; j < 4; j++)
            {
                if (Mass[i][j] == transit)
                {
                    Mass[i][j] = Mass[i][m];
                    Mass[i][m] = transit;
                }
            }
        }
    }
}

int main()
{
    int J[3][4] = { { 7, 5, 8, 0 }, { 1, 4, -6, 2 }, { -3, 2, 1, 0 } };
    cout << "Старый массив: \n";
    printMass(J);
    sortMass(J);
    cout << "Новый массив: \n";
    printMass(J);
    cin.get();
    return 0;
}

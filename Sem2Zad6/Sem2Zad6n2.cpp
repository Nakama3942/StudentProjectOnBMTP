#include <windows.h>
#include <iostream>
using namespace std;

struct stud
{
    char surname[25], name[25], patronymic[25];
    int oneTheme, twoTheme, threeTheme;
    bool quantity;
};

bool quantity(int one, int two, int three)
{
    if (one > 60 && two > 60 && three > 60) return true;
    else return false;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int quanstud = 5; //Количество студентов
    stud ved[quanstud]; //Массив студентов (ведомость)
    int numStud;
    for (int i = 0; i < quanstud; i++)
    {
        cout <<"\n***** Введите информацию о "<< (i+1) << " студенте\n";
        cout << "\nВведите фамилию: ";
        cin >> ved[i].surname;
        cout << "Введите имя: ";
        cin >> ved[i].name;
        cout << "Введите отчество: ";
        cin >> ved[i].patronymic;
        cout <<"\nЧисло баллов по первому предмету: ";
        cin >> ved[i].oneTheme;
        cout <<"Число баллов по второму предмету: ";
        cin >> ved[i].twoTheme;
        cout <<"Число баллов по третьему предмету: ";
        cin >> ved[i].threeTheme;
        if (quantity(ved[i].oneTheme, ved[i].twoTheme, ved[i].threeTheme)) ved[i].quantity = true;
        else ved[i].quantity = false;
    }
    cout << "\n\nИнформацию про какого студента вывести на экран? ";
    cin >> numStud;
    numStud--;
    cout << "\nФамилия: " << ved[numStud].surname;
    cout << "\nИмя: " << ved[numStud].name;
    cout << "\nОтчество: " << ved[numStud].patronymic;
    cout <<"\nЧисло баллов по первому предмету: " << ved[numStud].oneTheme;
    cout <<"\nЧисло баллов по второму предмету: " << ved[numStud].twoTheme;
    cout <<"\nЧисло баллов по третьему предмету: " << ved[numStud].threeTheme;
    if (ved[numStud].quantity) cout << "\nРезультат: Зачёт";
    else cout << "\nРезультат: Незачёт";
    cin.get();
    cin.get();
    return 0;
}

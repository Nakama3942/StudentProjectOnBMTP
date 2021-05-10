/*
Написать программу, которая создаёт на основе структуры за вариантом таблицы и позволяет
заполнить её значения, что позволяют в консоли. За запросом пользователя программа должна
выводить соответствующий ряд или всю полученную таблицу (запросы сформулировать по каждому
полю самостоятельно, соответственно тематики варианта). Вариант 3: имя структуры - телепередача,
первое поле - длительность показа, второе - название, третье - рейтин.
*/

#include <windows.h>
#include <iostream>
using namespace std;

struct TV
{
    float timeVision;
    char nameVision[150];
    int rate;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int longTV = 10;
    TV tv[longTV];
    bool continueTV = true;
    int ctnTV, i, ctn, numvis;
    cout << "Начать заполнение таблицы (1 - да, 0 - нет)? ";
    cin >> ctn;
    if (ctn == 1)
    {
        for (i = 0; i < longTV; i++)
        {
            cout << "\n\nВведите длительность показа: ";
            cin >> tv[i].timeVision;
            cout << "Введите название программы: ";
            fflush(stdin);
            cin.getline(tv[i].nameVision, 150);
            cout << "Введите рейтинг программы: ";
            cin >> tv[i].rate;
            cout << "Продолжить (1 - да, 0 - нет)? ";
            cin >> ctnTV;
            if (ctnTV == 0) continueTV = false;
            else if (ctnTV == 1) continueTV = true;
            else cout << "Ошибка ввода";
            if (!continueTV)
            {
                i++;
                break;
            }
        }
    }
    cout << "Какую передачу вывести на экран?\n";
    cin >> numvis;
    cout << tv[numvis - 1].timeVision << "\t\t" << tv[numvis - 1].nameVision << "\t\t" << tv[numvis - 1].rate << "\n";
    cin.get();
    cin.get();
    return 0;
}

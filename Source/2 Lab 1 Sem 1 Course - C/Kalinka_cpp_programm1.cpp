#include <stdio.h>
#include <Windows.h>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    SetConsoleCP(1251);       //Установка кодовой страницы в строку вводу
    SetConsoleOutputCP(1251); //Установка кодовой страницы в строку вывода

    char string1[] = "Мы рады видеть Вас в нашей программе, ";
    char string2[] = "Представтесь: "; //Додавання та ініціалізація строки
    cout << "Представтесь: ";
    char Name[500]; //Массив для ввода
    gets(Name);     //Функція gets() зчитує всі введені символи з пробілами до тих пір, поки не буде нажата клавіша Enter
    cout << string1 << Name << endl;
    system("pause");
    return 0;
}

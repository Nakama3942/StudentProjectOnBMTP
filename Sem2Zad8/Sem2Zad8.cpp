#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

/*
 * TODO: Взять за основу лабораторную радоту №2.5 (Semester.Eight) и поменять код
 * программы так, чтобы:
 * 1)Входящие данные брались не с клавиатуры, а с файла
 * 2)Результаты работы выводились и на экран, и в файл
 *
 * Основа (Semester.Eight):
 * 1) Считает количество разных слов, что имеются в заданном тексте
 * 2) Выводит на экран количество использованных символов
 * 3) Удаляет все слова, в которых имеются сдвленные буквы
 * NOTE: Программа должна считать строку с файла и записать результат в файл.
 */

class One{
public:
    One()
    {
        //cout << "Введите строку: ";
        //cin.getline(userSTR, 140);
        FILE *file1 = fopen("Prog.txt", "r");
        while (!feof(file1))                            //Пока не конец файла
            if (fgets(userSTR , 140 , file1) != NULL )  //Считать символы из файла
                fputs(userSTR, stdout);                 //Вывод на экран
        fclose(file1);
        countWord();
        WordSuggestion();
        checkDubbling();
    }
private:
    string word;
    char userSTR[140]{}, userSTRnew[140]{}, *userSTRword{};
    int countSymbol = 0, countWORD = 1;
    bool check{};
    void countWord()
    {
        for (unsigned long int i = 0; i < sizeof(userSTR) / sizeof(char); i++)
            if (userSTR[i] == ' ' && userSTR[i - 1] != '-')
                countWORD++;
        cout << "\nКоличество слов в вашем тексте: " << countWORD;
    }
    void WordSuggestion()
    {
        for (char i : userSTR)
            if (i != '\0')
                countSymbol++;
        cout << "\nКоличество написанных символов: " << countSymbol;
    }
    void checkDubbling()
    {
        userSTRword = strtok(userSTR, " ");
        while (userSTRword != nullptr)
        {
            word = userSTRword;
            for (unsigned long int j = 0; j < word.size(); j++)
            {
                if (userSTRword[j] == userSTRword[j + 1]
                        && userSTRword[j + 1] != '.')
                {
                    check = false;
                    break;
                }
                else
                    check = true;
            }
            if (check)
                strcat(userSTRnew, userSTRword);
            strcat(userSTRnew, " ");
            userSTRword = strtok(nullptr, " ");
        }
        strcat(userSTRnew, "\0");
        cout << "\n\nНовое предложение без слов с удвоенными буквами:\n\" "
             << userSTRnew << "\"";
        FILE *file2 = fopen("Result.txt", "w");
        fputs(userSTRnew, file2);
        fclose(file2);
    }
};

/*
 * TODO: Взять за основу лабораторную радоту №2.6 (Sem2Zad6) и поменять код
 * программы так, чтобы:
 * 1)Входящие данные вводились с клавиатуры и записывались в файл
 * 2)Программа имела возможность дописать данные в файл(отдельная функция), результаты
 * выводятся и на экран и в файл
 * 3)Данные с файла выводились на экран
 *
 * Основа (Sem2Zad6)
 * Написать программу, которая создаёт на основе структуры за вариантом таблицы и позволяет
 * заполнить её значения, что позволяют в консоли. За запросом пользователя программа должна
 * выводить соответствующий ряд или всю полученную таблицу (запросы сформулировать по каждому
 * полю самостоятельно, соответственно тематики варианта). Вариант 3: имя структуры - телепередача,
 * первое поле - длительность показа, второе - название, третье - рейтин.
*/

struct TV
{
    float timeVision;
    char nameVision[150];
    int rate, num;
};

class Two{
public:
    Two()
    {
        TV tv[longTV];
        for(;;){
            cout << "\n\nНачать заполнение таблицы (2 - вывести то, что есть; "
                    "1 - заполнить; 0 - ничего не делать)? ";
            cin >> ctn;
            switch(ctn)
            {
            case 2:
                load(tv);
                output(tv);
                break;
            case 1:
                load(tv);
                input(tv);
                save(tv);
                break;
            }
            if (ctn == 0) break;
        }
    }
private:
    const int longTV = 10;
    bool continueTV = true;
    int ctnTV, ctn, numvis, ptr;
    int NumStruct(struct TV *tv, int count)
    {
        if(tv[count - 1].num == count) return NumStruct(tv, count + 1);
        else return count - 1;
    }
    void input(struct TV *tv)
    {
        ptr = NumStruct(tv, 1);
        for (int i = ptr; i < longTV; i++)
        {
            tv[i].num = i + 1;
            cout << "\n№" << tv[i].num;
            cout << "\nВведите длительность показа: ";
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
            if (!continueTV) break;
        }
    }
    void save(struct TV *tv)
    {
        FILE *file = fopen("Struct.bin", "wb");
        fflush(file);
        fwrite(&tv, sizeof(tv), 153, file);
        fclose(file);
    }
    void load(struct TV *tv)
    {
        FILE *file = fopen("Struct.bin", "rb");
        fread(&tv, sizeof(tv), 153, file);
        fclose(file);
    }
    //NOTE: 153 элемента структуры = 2 целочислельные + 1 с плавающей точкой + 1 символ * 150
    void output(struct TV *tv)
    {
        fflush(stdin);
        cout << "Какую передачу вывести на экран?\n";
        cin >> numvis;
        cout << "\n№" << tv[numvis - 1].num << "\t\t"
             << tv[numvis - 1].timeVision << "\t\t"
             << tv[numvis - 1].nameVision << "\t\t"
             << tv[numvis - 1].rate << "\n";
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    One one;
    Two two;
    cin.get();
    cin.get();
    return 0;
}

<p align='center'>
    Центральноукраїнський національний технічний унiверситет<br>
    Кафедра програмування комп’ютерних систем і мереж<br>
    Дисципліна: Базові технології та методології програмування<br><br><br>
</p>
<p align='center'>
    Звiт<br>
    з лабораторної роботи №21<br>
    Тема: Технології програмування роботи з файлами<br><br>
    Мета роботи: Отримати знання та навики, необхідні для освоєння технології роботи з даними на основі використання файлів за допомогою засобів мови С++.<br><br><br>
</p>
<p align='right'>
    Виконав: ст. гр. КМ-20<br>
    Калиновський В.М.<br>
    Перевірила: доцент кафедри ПКСМ<br>
    Рибакова Л.В.<br>
    Варіант 3<br><br><br>
</p>
<p align='left'>
    Дата виконання: 22.05.2021<br>
    Дата оформлення: 22.05.2021<br><br>
</p>
<p align='center'>
    Кропивницький 2021 р.<br>
</p>

### Завдання 1

Взяти за основу лабораторну роботу №18, змінити код програмування так, що:

1. Вхідні дані вводилися не з клавіатури, а з файла
2. Результати виконання виводились і на екран, і у файл

### Завдання 2

Взяти за основу лабораторну роботу №19 (завдання 1), змінити код програмування так, що:

1. Вхідні дані (поля структури) вводилися з клавіатури і після введення записувалися у файл (окрема функція)
2. Програма мала можливість дописувати дані у файл (окрема функція) і виводити їх на екран
3. Дані з файла виводились на екран (окрема функція)

### Робота

Кожне із завдань являє собою два класи. Перший клас було перенесено із класа Eight лабораторної роботи Semester, яке являє собою вирішення 18 лабораторної роботи. У конструкторі із завдання 1 було зроблено наступні зміни:

1. Введення строки замінено на зчитування з одного файла
2. Дописано у кінці конструктора запис нової строки до другого файла

Було:
```cpp
cout << "Введите строку: ";
cin.getline(userSTR, 140);
```

Стало:
```cpp
while (!feof(file1))
    if (fgets(userSTR , 140 , file1) != NULL )
        fputs(userSTR, stdout);  
```

Було:
```cpp
cout << "\n\nНовое предложение без слов с удвоенными буквами:\n\" " << userSTRnew << "\"";
```

Стало:
```cpp
cout << "\n\nНовое предложение без слов с удвоенными буквами:\n\" " << userSTRnew << "\"";
    FILE *file2 = fopen("Result.txt", "w");
    fputs(userSTRnew, file2);
    fclose(file2);
```

_Що очікується від функції?_ Аналогічно із завданням лабораторної роботи №18 за винятком того, що програма зчитує дані з одного файла та записує до іншого.

Другий клас було створено на основі завдання 19 лабораторної. Спочатку воно не було класом, але щоб ця лабораторна була гарно написаною, а перше завдання зроблено класом, то й друге завдання перероблено під клас. Для конструктора із завдання 2 написана загальна структура функції так:

Крок 1: Спитати у користувача, чи буде він заносити інформацію (продовжити 2.1.1), зчитати (продовжити 2.2.1), чи завершити (продовжити 3);

Крок 2.1.1: Зчитати файл (навіть якщо він пустий);

Крок 2.1.2: Знайти останню структуру;

Крок 2.1.3: Дописати інформацію;

Крок 2.1.4: Зберегти інформацію;

Крок 2.1.5: Повернутися до кроку 1;

Крок 2.2.1: Зчитати інформацію;

Крок 2.2.2: Спитати у користувача, яку інформацію вивести;

Крок 2.2.3: Вивести задану інформацію;

Крок 2.2.4: Повернутися до кроку 1;

Крок 3: Завершити програму.

_Що очікується від функції?_ Аналогічно із завданням 19, за винятком того, що вона може зчитувати інформацію з файла і зберігати інформацію у файлі.

_Код функції буде наведено у повному коді у класі Two._

_Що очікується від програми?_ Програма поєднує попередні завдання і надає нових можливостей зчитуванні з файла та записа у файл.

Вхідні дані:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/21%20Lab%202%20Sem%201%20Course%20-%20File%20n1.png"/>
</p>

Вихідні дані:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/21%20Lab%202%20Sem%201%20Course%20-%20File%20n2.png"/>
</p>

Бінарний файл структури:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/21%20Lab%202%20Sem%201%20Course%20-%20File%20n3.png"/>
</p>

Файлова структура програми:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/21%20Lab%202%20Sem%201%20Course%20-%20File%20n4.png"/>
</p>

_Зауваження: Тратити час на збереження та читання інформації структури у читаємому стані у файлі я не хотів, тому вирішив зберігати інформацію у бінарному файлі._

Результат:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/21%20Lab%202%20Sem%201%20Course%20-%20File%20n5.png"/>
</p>

_Результат:_ як бачимо, програма зчитала інформацію з першого файла, обробила її, записала результат до другого файла та коректно працює зі структурою і бінарним файлом. Інформація зберігається та зчитується. _Вважаємо завдання виконаним! ✔_

_Повний код програми:_
```cpp
#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

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
```

### Висновок

Програма зчитує інформацію з файла і записує її у файл. Ми отримали знання та навики, необхідні для роботи з даними на основі використання файлів.

[Ссылка на методичку и готовые программы](https://drive.google.com/drive/folders/1POiRlPS6QJBbE7AUUKHlTo_gjM1su7-M?usp=sharing)

<p align='center'>
    Центральноукраїнський національний технічний унiверситет<br>
    Кафедра програмування комп’ютерних систем і мереж<br>
    Дисципліна: Базові технології та методології програмування<br><br><br>
</p>
<p align='center'>
    Звiт<br>
    з лабораторної роботи №22<br>
    Тема: Вивчити основні директиви препроцесорної обробки програм та отримати навики роботи зі структурами, функціями та модульною структурою програм.<br><br><br>
</p>
<p align='right'>
    Виконав: ст. гр. КМ-20<br>
    Калиновський В.М.<br>
    Перевірила: доцент кафедри ПКСМ<br>
    Рибакова Л.В.<br>
    Варіант 3<br><br><br>
</p>
<p align='left'>
    Дата виконання: 23.05.2021<br>
    Дата оформлення: 23.05.2021<br><br>
</p>
<p align='center'>
    Кропивницький 2021 р.<br>
</p>

### Завдання 1

За результатами виконання лабораторних робіт №20-21 розробити у вигляді багатофайлового проекта програми, що буде відповідати таким вимогам:

1. Заповнення масива (таблиці) даних повинно здійснбватися із зовнішнього файла
2. Програма повинна забезпечувати роботу з даними у різних режимах:
    * Додавання нових рядів у таблицю
    * Видалення ряда із заданим номером з таблиці
    * Виведення інформації, яка зберігається у ряді із заданим номером
    * Виведення на екран усієї таблиці

### Робота

Для виконання цього завдання я повністю взяв код із лабораторної роботи №20, трохи переробив функцію з додавання пробілів у числі між цифрами й додав функції завантаження інформації з файлів, їх зміни, очищення (загалом все, що потребує завдання), і в кінці розбив код на декілька бібліотек:

1. LO — завантаження та виведення завантаженої інформації
2. Import7 — оригінальний код із 20 лабораторної
3. Revrite — додані функції, які потребує поточне завдання
4. Constants.h — хідер з константами

Псевдо-код програми:

Крок 1: Зчитати інформацію з файлів;

Крок 2: Обробити інформацію;

Крок 3: Вивести оброблену інформацію;

Крок 4: Спитати користувача, чи хоче він змінити вміст файла символів, очистити, чи нічого не робити;

Крок 4.1.1: Якщо хоче змінити — записати новий вміст до нового масива;

Крок 4.1.2: Відкрити файл;

Крок 4.1.3: Перезаписати інформацію файла;

Крок 4.1.4: Обробити інформацію;

Крок 4.1.5: Вивести оброблену інформацію;

Крок 4.2: Якщо хоче видалити — відкрити файл на запис й нічого не записувати (все одно при закритті запишеться пустота — інформацію видалено);

Крок 4.3: Якщо користувач нічого не робить — запитати те саме для вміста файла координати й повторити кроки 4-4.3 для другог за винятком того, що користувач може повторно відмовитися від зміни файлів — приступити до крока 5;

Крок 5: Завершення програми.

_Код програми:_

***Constants.h***
```cpp
#ifndef CONSTANTS_H
#define CONSTANTS_H

const int gLEN = 10;
const int latinaAlpha = 26;
const int coord = 2;

#endif //CONSTANTS_H
```

***Import7.h***
```cpp
#ifndef IMPORT7_H
#define IMPORT7_H

#include "constants.h"
#include <iostream>

int Lenght(int Num, int count);
void spaceNum(int Num);
void coordC(int AB[coord][coord], float C[coord]);
int elLat(char mass[gLEN]);

#endif //IMPORT7_H
```

***Lo.h***
```cpp
#ifndef LO_H
#define LO_H

#include "constants.h"
#include "import7.h"

#include <random>
#include <time.h>
#include <iostream>

void load(char mass[gLEN], int AB[coord][coord]);
void output(char mass[gLEN], int AB[coord][coord], float C[coord]);

#endif //LO_H
```

***Revrite.h***
```cpp
#ifndef REVRITE_H
#define REVRITE_H

#include "constants.h"
#include "import7.h"

#include <iostream>
using namespace std;

void saveLat();
void saveCoord();
void DelContent(int nfile);
void revrite();

#endif //REVRITE_H
```

***Import7.cpp***
```cpp
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
        spaceNum[i - 1] = (Num % 10) + 48;
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
```

***Lo.cpp***
```cpp
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
```

***Main.cpp***
```cpp
#include "constants.h"
#include "revrite.h"
#include "lo.h"

int main()
{
    char mass[gLEN];
    int AB[coord][coord];
    float C[coord];
    load(mass, AB);
    output(mass, AB, C);
    revrite();
    cin.get();
    cin.get();
    return 0;
}
```

***Revrite.cpp***
```cpp
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
```

_Що очікується від програми?_ Програма має зчитати інформацію з файлів, обробити її, вивести результати обробки й за потреби користувача очистити файли чи перезаписати їх. Сама програма має складатися з окремих бібліотек.

Каталог проекта:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/22%20Lab%202%20Sem%201%20Course%20-%20Multi-file%20project%20n1.png"/>
</p>

Каталог програми:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/22%20Lab%202%20Sem%201%20Course%20-%20Multi-file%20project%20n2.png"/>
</p>

Виконання програми:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/22%20Lab%202%20Sem%201%20Course%20-%20Multi-file%20project%20n3.png"/>
</p>

Вміст файла для першої функціїї 20 лабораторної:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/22%20Lab%202%20Sem%201%20Course%20-%20Multi-file%20project%20n4.png"/>
</p>

Вміст файла для другої функціїї 20 лабораторної:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/22%20Lab%202%20Sem%201%20Course%20-%20Multi-file%20project%20n5.png"/>
</p>

_Результат:_ як ми бачимо, програма складається з декількох файлів, свій функціонал не втратил, а також тепер може записувати та очищати інформацію файлів. _Вважаємо завдання виконаним! ✔_

### Висновок

Ми вивчили основні директиви препроцесорної обробки програм та отримали навики роботи зі структурами, функціями та модульною структурою програм.

[Ссылка на методичку и готовые программы](https://drive.google.com/drive/folders/1ZsyFaRCWOaq0M1ZF2XJI4NRiU-Qj5VA8?usp=sharing)

<p align='center'>
    Центральноукраїнський національний технічний унiверситет<br>
    Кафедра програмування комп’ютерних систем і мереж<br>
    Дисципліна: Базові технології та методології програмування<br><br><br>
</p>
<p align='center'>
    Звiт<br>
    з лабораторної роботи №23<br>
    Тема: Отримати знання та навики у програмуванні динамічно зв’язаних структур.<br><br><br>
</p>
<p align='right'>
    Виконав: ст. гр. КМ-20<br>
    Калиновський В.М.<br>
    Перевірила: доцент кафедри ПКСМ<br>
    Рибакова Л.В.<br>
    Варіант 3<br><br><br>
</p>
<p align='left'>
    Дата виконання: 30.05.2021<br>
    Дата оформлення: 30.05.2021<br><br>
</p>
<p align='center'>
    Кропивницький 2021 р.<br>
</p>

### Завдання

Створити динамічно структуру — список студентів, що містить не менше 10 студентів. Для кожного студента зазначити рік народження та оцінки по чотирьом екзаменам. Реалізувати додання нових структур, видалення та виведення на екран. Організувати відбір елементів у окремий масив для стеків, що відносяться до студентів із середнім балом менше 4.

### Робота

Як працює додавання динамічної структури:

Крок 1: Створення динамічної структури;

Крок 2: Якщо структура перша — встановити показник цієї структури на NULL, а показник на першу структуру встановити нацю структуру;

Крок 3: Інакше — встановити показник на структуру, на яку вказує показник на першу структуру, а сам показник на першу структуру переназначити на дану структуру;

Крок 4: Заповнити покроково всі поля створеної структури;

_Код функції додавання:_
```cpp
void addStruct()
{
    STUD *newS = new STUD;
    if(firsts == NULL)
    {
        newS->next = NULL;
        firsts = newS;
    }
    else
    {
        newS->next = firsts;
        firsts = newS;
    }
    cout << "\nВведите фамилию студента: ";
    fflush(stdin);
    cin >> newS->name;
    cout << "Введите год рождения: ";
    cin >> newS->year;
    cout << "Введите балл по первому предмету: ";
    cin >> newS->ratingOne;
    cout << "Введите балл по второму предмету: ";
    cin >> newS->ratingTwo;
    cout << "Введите балл по третьему предмету: ";
    cin >> newS->ratingThree;
    cout << "Введите балл по четвёртому предмету: ";
    cin >> newS->ratingFour;
}
```

Як працює видалення останньої структури:

Крок 1: Створити вказівник, який ссилається на ту ж структуру, на яку ссилається й показник на першу структуру;

Крок 2: Переназначити показник на першу структуру на значення адреси, яке лежить в її структурі (на другу);

Крок 3: Видалити показник на першу структуру (тепер можна вважати, що друга стала першою й структуру видалено);

_Код функції видалення:_
```cpp
void delStruct()
{
    if(firsts!=NULL)
    {
        STUD *delS;
        delS = firsts;
        firsts = firsts->next;
        delete(delS);
        cout << "\nПоследняя структура удалена!";

    }
    else
        cout << "\nСтруктуры не обнаружены...";
}
```

Як працює виведення структур:

Крок 1: Створити показник на поточну структуру, який приймає значення показника на першу структуру;

Крок 2: Вивести позмінно інформацію зі структури;

Крок 3: Перейняти показник адреси з цієї структури (поточною структурою стане наступна);

Крок 4: Повторити 1-3, поки перейнявшийся показник не стане NULL;

_Код функції виведення:_
```cpp
void printStruct()
{
    if(firsts!=NULL)
    {
        STUD *currS;
        currS = firsts;
        do
        {
            cout << "\nФамилия и инициалы студента: " << currS->name << "\n";
            cout << "Год рождения: " << currS->year << "\n";
            cout << "Балл по первому предмету: " << currS->ratingOne << "\n";
            cout << "Балл по второму предмету: " << currS->ratingTwo << "\n";
            cout << "Балл по третьему предмету: " << currS->ratingThree << "\n";
            cout << "Балл по четвёртому предмету: " << currS->ratingFour << "\n\n";
            currS = currS->next;
        }
        while(currS != NULL);
    }
    else
        cout << "\nСтруктуры не обнаружены...";
}
```

Результат заповнення:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/23%20Lab%202%20Sem%201%20Course%20-%20Dynamically%20linked%20structures%20n1.png"/>
</p>

Результат виведення:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/23%20Lab%202%20Sem%201%20Course%20-%20Dynamically%20linked%20structures%20n2.png"/>
</p>

Результат виведення після видалення:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/23%20Lab%202%20Sem%201%20Course%20-%20Dynamically%20linked%20structures%20n3.png"/>
</p>

_Результат:_ Програма повністю виконує свій функціонал в міру доступних можливостей. Весь функціонал, який можливо реалізувати — реалізовано. Чому не все реалізовано — причини описано вище. _Вважаємо завдання виконаним! ✔_

_Повний код програми:_
```cpp
#include <windows.h>
#include <cstdio>
#include <iostream>
using namespace std;

struct STUD
{
    char name[20];
    int year, ratingOne, ratingTwo, ratingThree, ratingFour;
    STUD *next;
};

STUD *firsts; //Глобальный указатель на первый элемент

void addStruct() //Функция заполнения
{
    STUD *newS = new STUD;
    if(firsts == NULL)
    {
        newS->next = NULL;
        firsts = newS;
    }
    else
    {
        newS->next = firsts;
        firsts = newS;
    }
    cout << "\nВведите фамилию студента: ";
    fflush(stdin);
    cin >> newS->name;
    cout << "Введите год рождения: ";
    cin >> newS->year;
    cout << "Введите балл по первому предмету: ";
    cin >> newS->ratingOne;
    cout << "Введите балл по второму предмету: ";
    cin >> newS->ratingTwo;
    cout << "Введите балл по третьему предмету: ";
    cin >> newS->ratingThree;
    cout << "Введите балл по четвёртому предмету: ";
    cin >> newS->ratingFour;
}

void delStruct()
{
    if(firsts!=NULL)
    {
        STUD *delS;
        delS = firsts;
        firsts = firsts->next;
        delete(delS);
        cout << "\nПоследняя структура удалена!";

    }
    else
        cout << "\nСтруктуры не обнаружены...";
}

void printStruct()
{
    if(firsts!=NULL)
    {
        STUD *currS;
        currS = firsts;
        do
        {
            cout << "\nФамилия и инициалы студента: " << currS->name << "\n";
            cout << "Год рождения: " << currS->year << "\n";
            cout << "Балл по первому предмету: " << currS->ratingOne << "\n";
            cout << "Балл по второму предмету: " << currS->ratingTwo << "\n";
            cout << "Балл по третьему предмету: " << currS->ratingThree << "\n";
            cout << "Балл по четвёртому предмету: " << currS->ratingFour << "\n\n";
            currS = currS->next;
        }
        while(currS != NULL);
    }
    else
        cout << "\nСтруктуры не обнаружены...";
}

void fourScore()
{
    if(firsts != NULL)
    {
        STUD *currS;
        currS = firsts;
        int numStud = 0;
        cout << "Студенты, у кого меньше четырёх баллов:\n";
        do
        {
            float score = (currS->ratingOne + currS->ratingTwo + currS->ratingThree + currS->ratingFour) / 4.;
            if(score <= 4)
            {
                cout << "№" << numStud + 1 << " " << currS->name << ", "
                     << currS->year << " года рождения с баллами: "
                     << currS->ratingOne << ", " << currS->ratingTwo << ", "
                     << currS->ratingThree << ", " << currS->ratingFour
                     << ", средний балл: " << score << ";\n";
            }
            numStud++;
            currS = currS->next;
        }
        while(currS != NULL);
    }
    else
        cout << "\nСтруктуры не обнаружены...";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choise;
    cout << "\n0 - выход, "
            "1 - добавить структуру в список, "
            "2 - удалить структуру со списка, "
            "3 - вывести информацию, "
            "4 - у кого меньше 4 баллов.";
    firsts = NULL;
    for(;;)
    {
        cout << "\nВыбор: ";
        cin >> choise;
        if(choise==0) break;
        else if(choise==1) addStruct();
        else if(choise==2) delStruct();
        else if(choise==3) printStruct();
        else if(choise==4) fourScore();
        else cout << "Введено неправильное значение!";
    }
    return 0;
}
```

### Висновок

Програма зчитує інформацію з файла і записує її у файл. Ми отримали знання та навики, необхідні для роботи з даними на основі використання файлів.

[Ссылка на методичку и готовые программы](https://drive.google.com/drive/folders/1Du9FqtgymwwfWrMrGlkKqCupdp2qnl7W?usp=sharing)

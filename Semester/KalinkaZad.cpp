#include <iostream>
#include <windows.h>
using namespace std;

// REVIEW
//  =============================   АВТОРСТВО   =============================
//  -
//  Написал код:
//  Начинающий программист - Калиновский Валентин
//  -
//  =============================   ВСТУПЛЕНИЕ   ============================
//  -
//  Здесь я написал код к следующим лабораторным заданиям:
//  1) Цыклы (Лаб 1 : Сем | Лаб 14 : Курс) - задания ONE, TWO, THREE
//  2) Одномерные массивы (Лаб 2 : Сем | Лаб 15 : Курс) - задание FOUR
//  3) Двумерные массивы (Лаб 3 : Сем | Лаб 16 : Курс) - задания FIVE, SIX
//  4) Динамические массивы (Лаб 4 : Сем | Лаб 17 : Курс) - задание SEVEN
//  5) Обработка строк (Лаб 5 : Сем | Лаб 18 : Курс) - задание EIGHT
//  -
//  ==============================   НАСТРОЙКА   ============================
//  ====================   ВЫБЕРИТЕ НОМЕР КОДА ЗАДАНИЯ   ====================
//  -
//  Для выбора введите в поле #define под этим комментарием один из
//  следуюущих номеров: ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT
//  -
//  =========================================================================
// CHOISE:

#define EIGHT

// NOTE: здесь описана функция для вывода двумерных массивов, чтобы не копировать
//  её в каждый класс, где она нужна.
template <typename T>
void printMass(T Mass, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << Mass[i][j] << " ";
        }
        cout << "\n";
    }
}

#ifdef ONE
// TODO - Написать программу, что формирует последовательность из парных An, кратных тринадцати
//  и диапазоном от 0 до 300, считает сумму этих самых элементов и выводит результат.
class One{
public:
    One()
    {
        while (i <= 300)
        {
            if (i % 2 == 0)
            {
                if (i % 13 == 0)
                {
                    if (i + 13 > 300 || i + 13 * 2 > 300)
                        cout << i;
                    else
                        cout << i << " + ";
                    Sum += i;
                }
            }
            i++;
        }
        cout << " = " << Sum;
    }

private:
    int Sum = 0, i = 1;
};
#endif //ONE
#ifdef TWO
// TODO - Написать программу, что ищет все ПРОСТЫЕ числа в диапазоне от 0 до 300 и выводит результат.
class Two{
public:
    Two()
    {
        do {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    SampleInt = false;
                    j = i;
                }
                else
                    SampleInt = true;
            }
            if (SampleInt)
                cout << i << " ";
            i++;
        } while (i <= 300);
    }

private:
    int i = 1;
    bool SampleInt;
};
#endif //TWO
#ifdef THREE
// TODO - Написать программу, что ищет и выводит результат первых ненулевых корней a, b и c
//  в уравнении (a * b) - (c * c * c) - 9 = 0 .
class Three{
public:
    Three()
    {
        for (int i = 1; i < 10; i++)
        {
            for (int j = i; j < 10; j++)
            {
                a = j;
                printResult(a, b, c);
            }
            a = i;
            for (int j = i; j < 10; j++)
            {
                b = j;
                printResult(a, b, c);
            }
            b = i;
            for (int j = i; j < 10; j++)
            {
                c = j;
                printResult(a, b, c);
            }
            c = i;
            for (int j = i; j < 10; j++)
            {
                a = j;
                b = j;
                printResult(a, b, c);
            }
            a = i;
            b = i;
            for (int j = i; j < 10; j++)
            {
                a = j;
                c = j;
                printResult(a, b, c);
            }
            a = i;
            c = i;
            for (int j = i; j < 10; j++)
            {
                b = j;
                c = j;
                printResult(a, b, c);
            }
            b = i;
            c = i;
            for (int j = i; j < 10; j++)
            {
                a = j;
                b = j;
                c = j;
                printResult(a, b, c);
            }
            a = i;
            b = i;
            c = i;
        }
    }

private:
    int a = 1, b = 1, c = 1;
    static void printResult(int a, int b, int c)
    {
        if ((a * b) - (c * c * c) - 9 == 0)
            cout << "Результат: a = " << a << " , b = " << b << " , c = " << c << "\n";
    }
};
#endif //THREE
#ifdef FOUR
// TODO - Написать программу, в которой за выбором пользователя (вручную или программно)
//  заполняется массив Mass[15] и подсчитывается количество парных элементов массива (результат
//  выводится).
// NOTE: дополнительно мне нужны библиотеки для работы с генератором и временем -
#include <random>
#include <ctime>

class Four{
public:
    Four()
    {
        cout << "Как заполнить массив? Вы сами его введёте (1), или массив должен сгенерироваться программно (2)?\n";
        cin >> answer;
        switch (answer)
        {
            case 1:
                for (int i = 0; i < 15; i++)
                {
                    cout << "\n" << i + 1 << " элемент массива: ";
                    cin >> Mass[i];
                }
                break;
            case 2:
                for (int i = 0; i < 15; i++)
                {
                    srand(time(NULL));
                    Sleep(1500);
                    Mass[i] = 1 + rand() % 18;
                    cout << "\n" << i + 1 << " элемент массива: " << Mass[i];
                }
                break;
            default:
                cout << "Введено неправильное значение! Ответ принимается за \"2\":\n";
                for (int i = 0; i < 15; i++)
                {
                    srand(time(NULL));
                    Sleep(1500);
                    Mass[i] = 1 + rand() % 18;
                    cout << "\n" << i + 1 << " элемент массива: " << Mass[i];
                }
                break;
        }
        // BUG: Почему то здесь при проверке значений цикл не хочет работать, если два парных
        //  элемента идут по соседству, например, если 13 и 14 элемент буду равны, он их
        //  всё равно в сумму не засчитает - он посчитает суму для элемента 13 с любыми
        //  элементами, только если это не 12 и 14 элементы. Аналогично и для других...
        for (Num = 1; Num < 15; Num++)
        {
            if (prov == Mass[Num])
            {
                Sum++;
            }
            if (Num == 14)
            {
                prov = Mass[counter];
                Num = counter + 1;
                counter++;
            }
        }
        cout << "\nСумма пар: "<< Sum << "\n";
    }

private:
    int Mass[15]{}, answer{}, Num = 0, prov = Mass[Num], Sum = 0, counter = 1;
};
#endif //FOUR
#ifdef FIVE
// TODO - Написать программу, что выполняет записывание значений элементов двухмерного
//  массива Mass[5][5] за схемой, указанной в варианте (нарисовать схему в коде не могу -
//  смотри "Лабораторная работа 16 - обработка матриц", вариант 3), вывести результаты
//  чтения и записи значения матрицы должны быть в диапазоне от 1 до 25.
// NOTE: дополнительно мне нужны библиотеки для работы с генератором и временем -
#include <random>
#include <ctime>

class Five{
public:
    Five(int Mass[5][5])
    {
        cout << "Сначала нужно сгенерировать (5*5=) 25 элементов:\n";
        for (int & element : elements)
        {
            // NOTE: для красоты вида результата я решил ограничить диапазон с 1 - 25 до
            //  10 - 25. Волноваться не стоит: все эти элементы входя в множество диапазона
            //  1 - 25, а матрица выглядит ровной и красивой.
            srand(time(NULL));
            Sleep(1250);
            element = 10 + rand() % 15;
            cout << element << " ";
        }
        cout << "\nДальше, относительно схемы своего варианта, я заполняю двумерный массив\n"
                "этими элементамив этой последовательности. Результат:\n";
        filling(elements, Mass, &num, 'y', '+', 5, 0, 0);
        filling(elements, Mass, &num, 'x', '+', 4, 4, 1);
        filling(elements, Mass, &num, 'y', '-', 4, 3, 4);
        filling(elements, Mass, &num, 'x', '-', 3, 0, 3);
        filling(elements, Mass, &num, 'y', '+', 3, 1, 1);
        filling(elements, Mass, &num, 'x', '+', 2, 3, 2);
        filling(elements, Mass, &num, 'y', '-', 2, 2, 3);
        filling(elements, Mass, &num, 1, 2);
        filling(elements, Mass, &num, 2, 2);
    }

private:
    int elements[25]{}, num = 0;
    static void filling(const int el[25], int mass[5][5], int *Num, char direction, char sign, int amount, int y, int x)
    {
        int z = 0;
        while (z < amount)
        {
            if (direction == 'x' && sign == '+')
            {
                mass[y][x] = el[*Num];
                x++;
                *Num = *Num + 1;
            }
            else if (direction == 'y' && sign == '+')
            {
                mass[y][x] = el[*Num];
                y++;
                *Num = *Num + 1;
            }
            else if (direction == 'x' && sign == '-')
            {
                mass[y][x] = el[*Num];
                x--;
                *Num = *Num + 1;
            }
            else if (direction == 'y' && sign == '-')
            {
                mass[y][x] = el[*Num];
                y--;
                *Num = *Num + 1;
            }
            z++;
        }
    }
    static void filling(const int el[25], int mass[5][5], int *Num, int y, int x)
    {
        mass[y][x] = el[*Num];
        *Num = *Num + 1;
    }
};
#endif //FIVE
#ifdef SIX
// TODO - написать программу для заполнения двумерного массива Mass[5][5]
//  значениями "0" и "1" за схемой, указанной в варианте (нарисовать схему в коде не могу -
//  смотри "Лабораторная работа 16 - обработка матриц", вариант 3), и вывести результат.
class Six{
public:
    explicit Six(int Mass[5][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (count % 2 == 0)
                    Mass[i][j] = 1;
                else
                    Mass[i][j] = 0;
                count++;
            }
        }
    }

private:
    int count = 0;
};
#endif //SIX
#ifdef SEVEN
// TODO - Написать программу, которая имеет:
//  1) ДИНАМИЧЕСКИЕ массивы;
//  2) У массива максимальный размер - N * M, где N и M - статические константы;
//  3) У массива реальный размер - n * m (n < N, m < M)- вводятся пользователем;
//  4) Интервал генерации элементов, который указывает пользователь;
//  5) У массива рандомно генерящиеся элементи;
//  6) На входе данные и элементы входящего и исходящего массивов;
//  7) Вывод результата в красивом виде;
//  8) Функцию - изменение значений элементов массива на значения соответствующих
//     элементов заданного одномерного массива.
// NOTE: дополнительно мне нужны библиотеки для работы с генератором и временем -
#include <random>
#include <ctime>

class Seven{
public:
    Seven()
    {
        cout << "\nВведите размеры массива:\nКоличество строчек - ";
        cin >> height;
        cout << "Количество элементов каждой строки - ";
        cin >> width;
        length = height * width;
        if (height <= HEIGHT && width <= WIDTH)
        {
            cout << "\nС какого числа должен генерироваться числа для массива? ";
            cin >> intA;
            cout << "До какого? ";
            cin >>intB;
            intB -= intA;
            isStart = true;
        }
        else
        {
            cout << "Ошибка ввода: размер массива больше максимального!";
            isStart = false;
        }
    }
    ~Seven()
    {
        for (int count = 0; count < height; count++)
            delete []Mass[count];
        delete []Mass;
        delete []Series;
    }
    void isWork()
    {
        if (isStart)
            works();
    }

private:
    // NOTE: так как максимальные размеры не заданы - я сам их придумал и установил.
    const int HEIGHT = 15, WIDTH = 15;
    bool isStart;
    int height{}, width{}, intA{}, intB{}, length{}, numSeries = 0, **Mass{}, *Series{};
    void works()
    {
        cout << "\nГенерируем начальную матрицу:\n";
        Mass = new int*[height];
        for (int count = 0; count < height; count++)
        {
            Mass[count] = new int[width];
            for (int j = 0; j < width; j++)
            {
                srand(time(NULL));
                Sleep(1250);
                Mass[count][j] = intA + rand() % intB;
                cout << Mass[count][j] << " ";
            }
            cout << "\n";
        }
        // NB: во-первых, я предположу, что этот одномерный массив есть ряд, элементы
        //  которого соответствуют так - {[0][0] = [0], [1][1] = [1], ...,
        //  [0][4] = [4], [1][0] = [5], [1][1] = [6], ..., [4][4] = [24]}, и, во-вторых, так
        //  как нигде в задании не был задан этот ряд, я предположу, что мне для его выполнения
        //  нужно заново провести туже работу, что и для двумерного массива, за исключением, что
        //  это будет одномерный ряд и потом, как требуется, просто заменить старые соответствующие
        //  элементы на новые соответствующие из нового ряда, а выводить нужно первоначальный
        //  массив, новый ряд и новый массив. Так я понял и так поступлю.
        cout << "\nГененрируем новый одномерный массив с количеством элементов\n"
                "начальной матрицы: (" << height << "*" << width << "=) " << length << " элементов.\n\n"
                "Все элементы генерируются в том же диапазоне.\n\nНовый ряд:\n";
        Series = new int[length];
        for (int i = 0; i < length; i++)
        {
            srand(time(NULL));
            Sleep(1250);
            Series[i] = intA + rand() % intB;
            cout << Series[i] << " ";
        }
        cout << "\n\nЗаменим каждый элемент начального массива соответствующими элементами из ряда.\n";
        for (int i = 0; i < height; i++)
            for (int j = 0; j < width; j++)
            {
                Mass[i][j] = Series[numSeries];
                numSeries++;
            }
        cout << "\nВыводим результат - новая матрица:\n";
        printMass(Mass, width, height);
    }
};
#endif //SEVEN
#ifdef EIGHT
// TODO - Нужно, чтобы пользователь вводил строку текста и программа выполняла следующее:
//  1) Считает количество разных слов, что имеются в заданном тексте
//  2) Выводит на экран количество использованных символов
//  3) Удаляет все слова, в которых имеются сдвленные буквы
#include <string>
class Eight{
public:
    Eight()
    {
        cout << "Введите строку: ";
        cin.getline(userSTR, 140);
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
        for (int i = 0; i < sizeof(userSTR) / sizeof(char); i++)
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
            for (int j = 0; j < word.size(); j++)
            {
                if (userSTRword[j] == userSTRword[j + 1] && userSTRword[j + 1] != '.')
                {
                    check = false;
                    break;
                }
                else
                    check = true;
            }
            if (check) {
                strcat(userSTRnew, userSTRword);
            }
            strcat(userSTRnew, " ");
            userSTRword = strtok(nullptr, " ");
        }
        strcat(userSTRnew, "\0");
        cout << "\n\nНовое предложение без слов с удвоенными буквами:\n\" " << userSTRnew << "\"";
    }
};
#endif //EIGHT

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char end[] = "\n\nКонец задания.\n";
#ifdef ONE
    cout << "Подготовил Калиновский Валентин.\nПервое задание (лабораторная №1):\n\n";
    One one;
    cout << end;
#endif //ONE
#ifdef TWO
    cout << "Подготовил Калиновский Валентин.\nВторое задание (лабораторная №1):\n\n";
    Two two;
    cout << end;
#endif //TWO
#ifdef THREE
    cout << "Подготовил Калиновский Валентин.\nТретье задание (лабораторная №1):\n\n";
    Three three;
    cout << end;
#endif //THREE
#ifdef FOUR
    cout << "Подготовил Калиновский Валентин.\nЗадание по лабораторной №2:\n\n";
    Four four;
    cout << end;
#endif //FOUR
#ifdef FIVE
    cout << "Подготовил Калиновский Валентин.\nПервое задание (лабораторная №3):\n\n";
    int Mass[5][5];
    Five five(Mass);
    printMass(Mass, 5, 5);
    cout << end;
#endif //FIVE
#ifdef SIX
    cout << "Подготовил Калиновский Валентин.\nВторое задание (лабораторная №3):\n\n";
    int Mass[5][5];
    Six six(Mass);
    printMass(Mass, 5, 5);
    cout << end;
#endif //SIX
#ifdef SEVEN
    cout << "Подготовил Калиновский Валентин.\nЗадание по лабораторной №4:\n\n";
    Seven seven;
    seven.isWork();
    cout << end;
#endif//SEVEN
#ifdef EIGHT
    cout << "Подготовил Калиновский Валентин.\nЗадание по лабораторной №5:\n\n";
    Eight eight;
    cout << end;
#endif //EIGHT
    cin.get();
    cin.get();
    return 0;
}

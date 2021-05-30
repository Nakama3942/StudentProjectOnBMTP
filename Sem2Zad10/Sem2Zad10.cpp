/*
 * TODO: Вариант 3 - стек. Для каждого режима разработать отдельные функции.
 * Входящие и исходящие данные сохраняются в файлах. Создать динамическую
 * структуру - список студентов, который имеет не меньше 10 студентов. Для каждого
 * студента указать год рождения и баллы по четырём предметам. Реализовать функции:
 * Добавления новых элементов в структуру; удаление элемента с заданным номером со
 * структуры; вывод на экран информации, корторая сохраняется в указанном файле;
 * вывод на экран всей информации структуры. Организовать: отбор элементов в
 * отдельный массив информации, которая относится к студенту: "средний бал
 * меньше 4". Результаты занести в Out.txt: данные про отобранных студентов; данные
 * про всех изъятых со стека студентов.
 */

#include <windows.h>
#include <cstdio>
#include <iostream>
using namespace std;

/*
struct saveloadstud
{
    char name[20];
    int year, ratingOne, ratingTwo, ratingThree, ratingFour;
};
*/

struct STUD
{
    char name[20];
    int year, ratingOne, ratingTwo, ratingThree, ratingFour;
    STUD *next;
};

STUD *firsts; //Глобальный указатель на первый элемент
//STUD *tail; //Глобальный указатель на последний элемент (для загрузки)

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

/*

void saveStruct()
{
    // NOTE: может придётся исправлять
    if(firsts!=NULL)
    {
        STUD *currS;
        currS = firsts;
        do
        {
            saveloadstud sa_st;
            for(int i = 0; i < 50; i++)
                sa_st.name[i] = currS->name[i];
            sa_st.year = currS->year;
            sa_st.ratingOne = currS->ratingOne;
            sa_st.ratingTwo = currS->ratingTwo;
            sa_st.ratingThree = currS->ratingOne;
            sa_st.ratingFour = currS->ratingOne;
            cout << "\n" << sa_st.name << "  " << sa_st.year << "  " << sa_st.ratingOne << "  " << sa_st.ratingTwo << "  " << sa_st.ratingThree << "  " << sa_st.ratingFour;
            FILE *structs = fopen("Students.bin", "wb");
            fflush(structs);
            fwrite(currS, sizeof(currS), 70, structs);
            fclose(structs);
            currS = currS->next;
            //delete sa_st;
        }
        while(currS != NULL);
        cout << "\nСтруктуры сохранены!";
    }
    else
        cout << "\nСтруктуры не обнаружены...";
}

void forLoadStruct(int lstr)
{
    STUD *currS = new STUD;
    tail = currS;
    if(firsts == NULL)
    {
        saveloadstud *lo_st = new saveloadstud;
        FILE *structs = fopen("Students.bin", "rb");
        //fseek(structs, lstr * 438, SEEK_SET);
        fread(&lo_st, sizeof(lo_st), 55, structs);
        fclose(structs);
        for(int i = 0; i < 50; i++)
            currS->name[i] = lo_st->name[i];
        currS->year = lo_st->year;
        currS->ratingOne = lo_st->ratingOne;
        currS->ratingTwo = lo_st->ratingTwo;
        currS->ratingThree = lo_st->ratingThree;
        currS->ratingFour = lo_st->ratingFour;
        cout << "\n" << lo_st->name << "  " << lo_st->year << "  " << lo_st->ratingOne << "  " << lo_st->ratingTwo << "  " << lo_st->ratingThree << "  " << lo_st->ratingFour;
        currS->next = NULL;
        firsts = currS;
        tail = currS;
    }
    else
    {
        saveloadstud *lo_st = new saveloadstud;
        FILE *structs = fopen("Students.bin", "rb");
        //fseek(structs, lstr * 55, SEEK_SET);
        fread(&lo_st, sizeof(lo_st), 55, structs);
        fclose(structs);
        for(int i = 0; i < 50; i++)
            currS->name[i] = lo_st->name[i];
        currS->year = lo_st->year;
        currS->ratingOne = lo_st->ratingOne;
        currS->ratingOne = lo_st->ratingOne;
        currS->ratingOne = lo_st->ratingOne;
        currS->ratingOne = lo_st->ratingOne;
        currS->next = NULL;
        tail->next = currS;
        tail = currS;
    }
    fflush(stdin);
}

void loadStruct()
{
    FILE *structs = fopen("Students.bin", "rb");
    int size = 0, lstr = 0;
    fseek(structs, 0, SEEK_SET);
    while(getc(structs) != EOF) size++;
    fclose(structs);
    cout << "\n" << size << "\n";
    if(size != 0)
    {
        forLoadStruct(lstr);
        lstr++;
    }
    else
    {
        cout << "В программе есть несохранённые структуры. "
                "Загрузка из файла уничтожит несохранённые структуры. "
                "Хотите продолжить? (1 - да) ";
        char choise;
        cin >> choise;
        if (choise == '1')
        {
            firsts = NULL;
            forLoadStruct(lstr);
            lstr++;
        }
    }
}

void outputStruct()
{
    // TODO: сделать функцию загрузки структур, средний бал в которой меньше 4
    // в файл Out.txt






    // NOTE: может придётся исправлять
    if(firsts!=NULL)
    {
        STUD *currS;
        currS = firsts;
        do
        {
            saveloadstud sa_st[10];
            for(int i = 0; i < 20; i++)
                sa_st[0].name[i] = currS->name[i];
            sa_st[0].year = currS->year;
            sa_st[0].ratingOne = currS->ratingOne;
            sa_st[0].ratingTwo = currS->ratingTwo;
            sa_st[0].ratingThree = currS->ratingOne;
            sa_st[0].ratingFour = currS->ratingOne;
            cout << "\n" << sa_st[0].name << "  " << sa_st[0].year << "  " << sa_st[0].ratingOne << "  " << sa_st[0].ratingTwo << "  " << sa_st[0].ratingThree << "  " << sa_st[0].ratingFour;
            FILE *structs = fopen("Out.txt", "wt");
            fflush(structs);
            fwrite(&sa_st, sizeof(sa_st), 25, structs);
            fclose(structs);
            currS = currS->next;
            //delete sa_st;
        }
        while(currS != NULL);
        cout << "\nСтруктуры сохранены!";
    }
    else
        cout << "\nСтруктуры не обнаружены...";






    if(firsts != NULL)
    {
        STUD *currS;
        currS = firsts;
        do
        {
            int score = (currS->ratingOne + currS->ratingTwo + currS->ratingThree + currS->ratingFour) / 4.;
            if(score <= 4)
            {
                FILE *stud = fopen("Out.txt", "wt");
                fflush(stud);
                fputs("Студент:\n", stud);
                for(int i = 0; i < 50; i++)
                    if((currS->name[i] > 64 && currS->name[i] < 91) || (currS->name[i] > 96 && currS->name[i] < 123))
                        fputc(currS->name[i], stud);
                fputs("\nГод рождения: \n", stud);
                char *years = (char*)currS->year;
                fputs(years, stud);
                fputs("\nСредний бал <= 4.\n\n", stud);
                fclose(stud);
            }
            currS = currS->next;
        }
        while(currS != NULL);
        cout << "\nСтруктуры сохранены!";
    }
    else
        cout << "\nСтруктуры не обнаружены...";
}
*/

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
            "4 - сохранить структуры, "
            "5 - загрузить структуры, "
            "6 - отобрать студентов, "
            "7 - у кого меньше 4 баллов.";
    firsts = NULL;
    for(;;)
    {
        cout << "\nВыбор: ";
        cin >> choise;
        if(choise==0) break;
        else if(choise==1) addStruct();
        else if(choise==2) delStruct();
        else if(choise==3) printStruct();
        //else if(choise==4) saveStruct();
        //else if(choise==5) loadStruct();
        //else if(choise==6) outputStruct();
        else if(choise==7) fourScore();
        else cout << "Введено неправильное значение!";
    }
    return 0;
}

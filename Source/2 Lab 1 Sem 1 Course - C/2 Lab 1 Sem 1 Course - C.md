<p align='center'>
    Центральноукраїнський національний технічний унiверситет<br>
    Кафедра програмування комп’ютерних систем і мереж<br>
    Дисципліна: Базові технології та методології програмування<br><br><br>
</p>
<p align='center'>
    Звiт<br>
    з лабораторної роботи №2.2<br>
    Тема: Принципи роботи в системі програмування TurboC++<br><br>
    Мета роботи: Отримання базових практичних навиків використання середовищ програмування (programming environment), необхідних для подальшого виконання циклу лабораторних робіт.<br><br><br>
</p>
<p align='right'>
    Виконав: ст. гр. КМ-20<br>
    Калиновський В.М.<br>
    Перевірила: асистент кафедри ПКСМ<br>
    Тесленко О.Є.<br><br><br>
</p>
<p align='left'>
    Дата виконання: 17.09.2020<br>
    Дата оформлення: 23.09.2020<br><br>
</p>
<p align='center'>
    Кропивницький 2020 р.<br>
</p>

### Завдання

Створіть новий файл, напишіть код програми, скомпілюйте, запустіть програму. Для діагностики помилок внесіть зміни до деяких рядків і проаналізуйте помилки.

### Робота

Натискаю Ctrl+N – створюється новий файл, у який треба записати код програми. Записую код:

```cpp
#include <stdio.h>
int main(void) {
	int a, b, c, d, x, y;
	a=1;
	b=2;
	c=a+b;
	d=a*b;
	if (c==d) {
		x=100;
		y=200;
	} else {
		x=200;
		y=100;
	}
	printf("%d %d\n",x,y);
	return 0;
}
```

Агоритм програми:

1. Я задаю новий об’єкт «Головний», у який я вміщую 6 змінних a, b, c, d, x, y.
2. Далі я задаю значення для змінних a та b: 1 та 2 відповідно.
3. Задаю формули для змінних c і d: додавання та множення відповідно.
4. Задаю функцію порівняння: якщо c рівне з d, то присвоїти x і y значення 100 та 200 відповідно; якщо не рівне, то присвоїти 200 та 100 відповідно.
5. Задаю оператор виведення інформації зі змінних x і y.
6. Повертаю 0.

Математичним розв’язком є 200 та 100, оскільки змінна c=1+2=3, а змінна d=1*2=2. При порівнянні: 2≠3, тому при запросі виводу змінних x і y їм будуть присвоєні значення з оператора else, який виконується у всіх інших випадкам, крім c=d, що і буде у нашому випадку, так як у нас c≠d.
Далі я пишу три програми з помилками, які основані на першій програмі:

```cpp
6      c=a+b1
9          x=100; a123
17  /*}*/
```

```cpp
3  int a, b, з, d, x, y, z=2;
4      a=b;
8      if(c=d)
```

```cpp
4  a=1; abc();
```

У результаті перша програми запускається і видає результат (Рис 1), а інші три видають помилки (Рис 2-4).

Рисунок 1:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/2%20Lab%201%20Sem%201%20Course%20-%20C%20n1.png"/>
</p>

Рисунок 2:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/2%20Lab%201%20Sem%201%20Course%20-%20C%20n2.png"/>
</p>

Рисунок 3:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/2%20Lab%201%20Sem%201%20Course%20-%20C%20n3.png"/>
</p>

Рисунок 4:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/2%20Lab%201%20Sem%201%20Course%20-%20C%20n4.png"/>
</p>

### Контрольні питання

> Яке головне призначення середовища TurboC++?

    Розробка програм на мові програмування C/C++

> Опишіть структуру головного вікна середовища. Дайте характеристику складових елементів

    Зверху знаходиться головне меню (описано у наступному питанні), зліва вікно з проектами/класами (у класах відображаються всі прописані функції кода (у нашому випадку там буде лише клас main)), справа велике вікно редактор коду, знизу журнал компілятора (тут відображаються помилки, які з’являються під час компіляції файла)

> Опишіть головне меню, його головні пункти та їх призначення

    Головне меню складається з пунктів: Файл (створити, відкрити, зберегти, закрити, імпорт, експорт тощо), Правка (відмінити, копіювати, вставити, вирізати тощо), Пошук (найти, найти у файлі, перейти до функції, перейти до строки тощо), Вид (Обзор проекта, строка стану, панелі інструментів тощо), Проект (Створити файл, додати до проекту, видалити з проекта), Виконати (скомпілювати, виконати, скомпілювати та виконати, перевірити синтаксис тощо), Сервіс (параметри компілятора, параметри середи, параметри редактора, настройка комбінацій клавіш, настройка інструментів), AStyle (format current file), Вікно(закрити всі, повноекранний режим), Справка (справка)

> Як створити новий файл?

    Натиснути Ctrl+N

> Які головні операції роботи з текстом у вікні текстового редактора? Які комбінації клавіш використовуються у редакторі?

    Копіювання Ctrl+C
    Вставка Ctrl+V
    Вирізання Ctrl+X
    Повернути Ctrl+Z
    Виділити все Ctrl+A
    Новий файл Ctrl+N
    Відступ Tab

> Опишіть алгоритм запуску програми

    Натискаю F9 (компілюю виконавчий exe файл. Якщо помилок у коді нема – програма скомпілюється, якщо файл не компілюється – треба виправити помилки) і F10 (запускаю скомпільований файл для перевірки. При неправильній роботі програми достатньо тримати виконавчий файл у тій самій папці, що й .c/.cpp цієї самої програми й після виправлення роботи програми при натисканні F9 виконавчий файл перекомпілюється без створення зайвих виконавчих файлів). Далі достатньо запускати скомпільований виконавчий файл.

> Опишіть головні етапи відлагодження програми.

    Під відладкою мається на увазі процес, який дозволяє отримати програму, яка функціонує с заданими характеристиками та в заданій області вхідних даних. Процес відладки включає:
    1. Створення совокупності тестових етапів завдань та значень, яким повинна відповідати програма;
    2. Статистична перевірка текстів програми;
    3. Тестування й виконання програм з різними рівнями деталізації;
    4. Комплексна динамічна відладка, в тому числі й у режимі реального часу;
    5. Діагностика й усунення причин відхилень результатів від еталонних значень;
    6. Зміна програми з ціллю виправлення помилок;
    В конкретних ситуаціях перечислені етапи можуть пересікатись, деякі з них можуть і не бути.

> Як переглянути значення програмних об’єктів під час роботи програми?

    Під час відлагодження програми. Стан програми відображається у текстовому редакторі. Там можна віднайти поточне значення програмних об’єктів в кожен час виконання програми.

> Розробіть найпростішу програму на мові С++ з виведенням привітання на екран

    Я написав код програми, яка запрошує ввести своє ім’я та виводить персональне привітання:
    
```cpp
#include <stdio.h>
#include <Windows.h>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    SetConsoleCP(1251); //Установка кодовой страницы в строку вводу
    SetConsoleOutputCP(1251); //Установка кодовой страницы в строку вывода

    char string1[] = "Мы рады видеть Вас в нашей программе, ";
    char string2[] = "Представтесь: "; //Додавання та ініціалізація строки
    cout << "Представтесь: ";
    char Name [500]; //Массив для ввода
    gets(Name); //Функція gets() зчитує всі введені символи з пробілами до тих пір, поки не - буде нажата клавіша Enter
    cout << string1 << Name << endl;

    system("pause");
    return 0;
}
```

    Вона запрошує представитися, а потім виводить особисте привітання:

<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/2%20Lab%201%20Sem%201%20Course%20-%20C%20n5.png"/>
</p>

### Висновок

Ми встановили, налаштували, запустили середу розробки, написали програми та виправили помилки.

[Ссылка на методичку и готовые программы](https://drive.google.com/drive/folders/1b4RXsdiLOH5NVC6RiU48NfIpQTama3q4?usp=sharing)
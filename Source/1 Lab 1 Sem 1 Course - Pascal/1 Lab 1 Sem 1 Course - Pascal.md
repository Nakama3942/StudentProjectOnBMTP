<p align='center'>
    Центральноукраїнський національний технічний унiверситет<br>
    Кафедра програмування комп’ютерних систем і мереж<br>
    Дисципліна: Базові технології та методології програмування<br><br><br>
</p>
<p align='center'>
    Звiт<br>
    з лабораторної роботи №2.1<br>
    Тема: Інтегровані середовища розробки програмного забезпечення<br><br>
    Мета роботи: Ознайомитися з середовищем TurboPascal, навчитися використовувати його можливості для роботи з програмою, створювати програми для введення, простої обробки і виведення даних.<br><br><br>
</p>
<p align='right'>
    Виконав: ст. гр. КМ-20<br>
    Калиновський В.М.<br>
    Перевірила: асистент кафедри ПКСМ<br>
    Тесленко О.Є.<br><br><br>
</p>
<p align='left'>
    Дата виконання: 11.09.2020<br>
    Дата оформлення: 20.09.2020<br><br>
</p>
<p align='center'>
    Кропивницький 2020 р.<br>
</p>

### Завдання

Активізувати середовище програми TurboPascal. Переглянути та запам’ятати призначення клавіш. Переглянути головне меню. Написати першу програму, яка запрошує дві перемінні й видає результат їх обчислення. Створити .exe файл. Скласти програму  для усіх чотирьох варіацій  формування пояснювального тексту. Скласти самостійно програму для уведення даних про себе.

### Робота

Для встановлення програми використовується файл tp7.scp.1.3.exe. Після встановлення середовища програмування я його активізую. Переглядаю та вивчаю значення гарячих клавіш:

1. Клавіша F1 означає «Допомога» - виклик інструкції по користуванню середовищем.
2. Клавіша F2 означає «Зберегти» - зберігає програму на носії.
3. Клавіша F3 означає «Відкрити» - виводить меню вибору загрузки коду програми.
4. Клавіша Alt+F9 означає «Компіляція» - переводить код у машинний.
5. Клавіша F9 означає «Переробити» - повторно компілює файл.
6. Клавіша F10 означає «Меню» - перехід у верхнє головне меню.
7. Клавіша Alt+F10 означає «Локальне меню» - викликає локальне меню.
8. Клавіша Alt+F11 означає «Курсор» - повертає курсор із віконного у звичайний стан.
9. Клавіша Alt+F5 означає «Екран користувача» - відкриває екран користувача.
10. Клавіша Ctrl+F9 означає «Виконання» - компілює та запускає програму.

Переглядаю та вивчаю значення пунктів головного меню:

1. Пункт «File» відображає можливі види роботи над файлами (створити, відкрити, зберегти тощо).
2. Пункт «Edit» відображає можливі види роботи над самим кодом (вирізати, скопіювати, вставити, видалити тощо).
3. Пункт «Search» відображає пошукові команди (знайти помилки, модулі, об’єкти тощо).
4. Пункт «Run» відображає команди запуску програми (запустити тощо).
5. Пункт «Compile» відображає команди компіляції програми та налаштувань компіляції.
6. Пункт «Debug» пункти стек виклику, регістри, спостереження, вивід, вирахувати тощо.
7. Пункт «Tools» пункти Grep, TurboAssembler, TurboDebbuger, TurboProfiler.
8. Пункт «Option» пункти Компілятор, розмір пам’яті, компоновщик, відладчик, каталоги, інструменти тощо.
9. Пункт «Window» пункти зміни відображень вікон (черепицею, каскадом тощо).
10. Пункт «Help» відображає пункти методів відображення підказок (вказівник, пошук теми, використання допомоги, файли тощо).

Після підготовки я пишу програму з наступним алгоритмом:

1. Програма резервує змінні x, y, z, s, pri
2. Запрошує користувача ввести змінні pri, x, y
3. До змінної x додає змінну y та виводить результат
4. Від змінної x віднімає змінну y та виводить результат
5. Змінну x домножає на змінну y та виводить результат

І набираю код програми:

```pascal
program progl;
var x,y,z:real; s:char; pri:string;
begin
  write('Назовите свою фамилию: '); readln(pri);
  write('Назовите два любых числа: х='); read(x); write('y='); readln(y);
  writeln;writeln;writeln;
  writeln('Уважаемый (Уважаемая) ', pri, '! Для Ваших чисел ',x:7:2, ' и',y:7:2, 'имеем:');
  writeln(x:7:2, ' +', y:7:2, ' = ', x+y:7:2);
  writeln(x:7:2, ' -', y:7:2, ' = ', x-y:7:2);
  writeln(x:7:2, ' *', y:7:2, ' = ', x*y:7:2);
  writeln('Спасибо за выдержку! Во всём желаю успеха!');
end.
```

Компілюю та запускаю програму:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/1%20Lab%201%20Sem%201%20Course%20-%20Pascal%20n1.png"/>
</p>

На наступному етапі я складаю нову програму із заміною деяких write-writeln та read-readln. Крім того я переписую деякі звертальні речення та принцип виводу інформації:

```pascal
program kalinka_progl2;
var x,y:real; pri:string;
begin
  writeln('Представтесь: '); read(pri);
  writeln('Задайте переменные:');
  write('x= '); read(x); write('y= '); read(y);
  writeln('Уважаемый(ая) ', pri, '! Расчёты проведены!');
  writeln('Ваши результаты: '); write(x+y:7:2, ', ',x-y:7:2, ', ',x*y:7:2);
end.
```

Алгоритм:

1. Ця програма резервує всього три змінні x, y, pri
2. Програма запрошує ввести дані в ці змінні та записує їх
3. Програма розраховує суму, різницю та добуток двох змінних
4. В кінці програми вона виводить результати розрахунків

Отримую результат:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/1%20Lab%201%20Sem%201%20Course%20-%20Pascal%20n2.png"/>
</p>

Далі я складаю програму, яка отримує дані користувача, а саме ПІБ користувача, рік народження, адресу проживання та спеціальність:


```pascal
program kalinka_registra;
var data,pri,im,otec,adress,spec:string;
begin
  write('Назовите свою фамилию: '); readln(pri);
  write('Назовите своё имя: '); readln(im);
  write('Назовите своё отчество: '); readln(otec);
  writeln('Введите год рождения: '); readln(data);
  writeln('Введите адресс проживания: '); readln(adress);
  writeln('Укажите свою специальность: '); readln(spec);
  writeln(pri, ' ', im, ' ', otec, ', Вы зарегистрированы в системе! Ваши данные:');
  writeln('Вы родились в ', data, ' году, живёте в ', adress, ' и работаете ', spec, 'ом.');
end.
```

І отримую результат:
<p align='center'>
    <img src="https://github.com/Nakama3942/StudentProjectOnBMTP/blob/main/Assets/1%20Lab%201%20Sem%201%20Course%20-%20Pascal%20n3.png"/>
</p>

Алгоритмом цієї програми є:

1. Програма резервує змінні pri, im, otec, data, adress, spec для зберігання інформації про прізвище, ім’я, по-батькові, рік народження, місто проживання та спеціальність відповідно.
2. Програма запрошує почергово ввести ці данні та записує їх до змінних, які відповідають відповідним даним.
3. В кінці програма виводить повідомлення про успішну реєстрацію і інформацію, яка була зареєстрована, а саме: спочатку програма звертається по ПІБ користувача, пише що користувач був зареєстрований і за цією особою закріплено рік народження, місце проживання та спеціальність , яку вказав користувач.

### Контрольні питання

> Як завантажити інтегроване середовище TurboPascal?
    
    Натиснути на виконавчий файл TURBO.EXE

> Як перейти до меню ІС та виконати потрібну команду?

    Натиснути Alt+F5

> Які функції виконує File?

    Створити, відкрити, зберегти файл, вийти

> Які функції виконує Edit?
    
    Вирізати, скопіювати, вставити, видалити

> Які функції виконує Run?
    
    Запуск програми

> Які функції виконує Compile?
    
    Компіляція програми

> Які функції виконує Debug?
    
    Регістри, спостереження, вивід

> Які функції виконує Option?
    
    Налаштування програми

> Які функції виконує Window?
    
    Відображення вікон з текстом програми

> Які функції виконує Help?
    
    Допомога, інструкції

> Як зберігається файл?
    
    Натиснути F2 та вибрати директорію зберігання файлів

> Як змінити поточну директорію ІС?
    
    Директорія змінюється на ту, до якої востаннє зберігали файли

> Як отримати .exe файл?
    
    Натиснути Ctrl+F9 або F10-Пуск-Запустити

> Які дії треба виконати в середовищі, щоб *.pas файли автоматично завантажувались та зберігались у власній папці користувача?
    
    Зберегти один файл у цій папці. Потім всі файли будуть зберігатись та завантажуватись звідти

> Які дії треба виконати в середовищі, щоб *.exe файли автоматично створювались на диску у власній папці користувача?
    
    Тримати головний файл у цій папці. При компіляції файл буде зберігатись поряд з основним

> Як виставити повний маршрут до своєї папки?
    
    Прописати власноруч або натиснути на знак стрілки вниз та по деревовидній системі віднайти необхідну папку

> Як дізнатись головні команди та їх призначення?
    
    Допомога-Зміст-Команди редактора

> Як дізнатись про правила роботи у текстовому редакторі ТР70?
    
    Відкрити файл інструкції до програми

> Які способи виділення блоків вам відомі?
    
    Курсор знаходиться біля початку блока, далі, із зажатим Shift, стрілками переміщуємось до кінця блоку 

> Перерахувати та охарактеризувати основні складові частин ТР-програм.
    
    Розділ заголовка (має назву програми та немає ніякого значення), розділ об’яв та описів (перелічуються модулі label, const, var, procedure, function в будь-якому порядку й скільки завгодно разів), розділ операторів (алгоритм розв’язку задачі й беруться у дужки Begin…End.)

> Які дані описуються після PROGRAM?
    
    Заголовок програми

> Які дані описуються після USES?
    
    Має імена під’єднаних модулів (бібліотек)

> Які дані описуються після LABEL?
    
    Має імена міток переходів (необхідні для організації послідовних обчислень)

> Які дані описуються після CONST?
    
    Зазначаються константи, які використовуються програмою

> Які дані описуються після TYPE?
    
    Дозволяє визначити програмісту новий тип даних (типи зазначаються іменами й використовуються для опису перемінних)

> Які дані описуються після VAR?
    
    Має список перемінних, які використовуються програмою та їх тип

> Яку функцію виконують BEGIN та END?
    
    Формують тіло функції

> Назвати головні службові команди при складанні програм.
    
    Ввід даних: write, writeln; вивід даних: read, readln

### Висновок

Ми навчились користуватись середовищем TurboPascal, ознайомились з командами та клавішами, вивчили оператори та написали перші прості програми.

[Ссылка на методичку и готовые программы](https://drive.google.com/drive/folders/1KzvHf0Bt6aWOQ_UcppSt7rY5fOCxCRWy?usp=sharing)
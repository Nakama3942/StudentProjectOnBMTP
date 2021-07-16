# Как пользоваться GitKraken

* [Осовные действия](#Осовной-действия)
  * [Начало работы - клонирование репозитория](#Клонирование-репозитория)
  * [Интерфейс работы с репозиторием](#Интерфейс-работы-с-репозиторием)
  * [Получение изменений с сервера](#pull--Получение-изменений-с-сервера)
  * [Фиксация изменений + отправка этих изменений на сервер](#commit--push--Фиксация-изменений--отправка-этих-изменений-на-сервер)
* [Более интересные вещи](#Более-интересные-вещи)
  * [Внесение вклада в чужие репозитории](#Внесение-вклада-в-чужие-репозитории)
    * [Fork](#fork)
    * [Pull request](#pull-request)
    * [Поддержание форка в актуальном состоянии](#Поддержание-форка-в-актуальном-состоянии)

## Disclaimer
Делалось это сегодня на скорую руку, когда пара человек начали задавать вопросы "а как", и мне пришла идея сделать наглядную инструкцию для всех.

Делалось это "на бегу", поэтому могут быть какие-то неточности.

## Что осталось за кадром
1. Вы смогли сами скачать инсталлятор GitKraken и установить его.
2. Вы открыли GitKraken
3. Авторизировались с помощью аккаунт GitHub

**Поехали!**

## Осовной действия
### Клонирование репозитория
Слева вверху есть значок папки. Кликаем по нему
![TEXT](../illustr/Git%20usage/GitKraken/3.PNG "TEXT")

1. Выбираем пункт "Клонировать"
2. Если вы авторизировались через аккаунт GitHub, то сможете видеть все свои репозитории и тогда смело выбирайте пункт GitHub. Иначе сверху есть вариант "Клонировать через Url" - так вы сможете скопировать любой гит репозиторий из интернета (не обязательно свой).
3. Найдите в открывшемся меню справа свой репозиторий, который хотите клонировать
4. Если не хотите устраивать свалку на диске C, то можете выбрать любое расположение репозитория у себя на диске.
5. Все! Нажимайте кнопку "Клонировать" и ура-ура, репозиторий скачается с сервера и создастся у вас в файловой системе
![TEXT](../illustr/Git%20usage/GitKraken/4.PNG "TEXT")

После клонирования ГитКракен предложит сразу же и открыть репозиторий. Открывайте. Чего уж тянуть кота за это дело.
![TEXT](../illustr/Git%20usage/GitKraken/5.PNG "TEXT")

### Интерфейс работы с репозиторием
Итак. Теперь самое интересное.

1. Это так называемое "дерево изменений" вашего репозитория. Здесь наглядно можно увидеть, кто пакостил в вашем репозитории: кто сливал вместе изменения, кто ответвлялся и т.д. В сложных проектах такое дерево может быть достаточно симпатичным (см. картинку ниже)
2. Справа, если в дереве выбрать какой-то коммит, будет отображена информация об этом коммите: когда и кем сделан, какие файлы были изменены. При двойном клике на файл, откроет просмотр изменений в этом файле.
3. Панелька слева отображает, какие ветки (направления работы вашего репозитория) есть на сервере - Remote и на вашей локальной машине - Local. В крупных проектах тут могут быть десятки веток.
![TEXT](../illustr/Git%20usage/GitKraken/6.1.png "TEXT")

Пример неплохого дерева:
![TEXT](../illustr/Git%20usage/GitKraken/11.PNG "TEXT")

### Pull = Получение изменений с сервера
С помощью этой кнопочки можно подтягивать изменения с сервера на локальную машину. Например, если вы работали в универе или на другой машине, и хотите получить эти изменения на домашний компьютер.
![TEXT](../illustr/Git%20usage/GitKraken/6.2.png "TEXT")

### Commit + Push = Фиксация изменений + отправка этих изменений на сервер
Итак. Вот вы что-то поменяли в своих файлах. Пришла пора сохранить эти изменения и зафиксировать их с помощью гит.

После того, как файлы были изменены, когда вы откроете ГитКракен, то увидите в дереве репозитория, что появился новый необозначенный, выделенный пунктиром коммит (AHTUNG!). Выберите его в дереве.

1. В окошке справа вы можете видеть список измененных файлов. Не обзательно, что вы захотите их "фиксировать" в гите!
2. Если вы изменили файл случайно, вы можете отказаться от этих изменений и "отверстать все обратно" с помощью кнопки "Discard all changes". Можно отменить изменения только для одного файла. Для этого достаточно навести курсор на этот файл и справа, рядом с именем файла, появится маленькая красная кнопка "Discard"
3. Если же вы изменили файлы намеренно, то их нужно "зафиксировать" - нажать на кнопку "Stage all changes". Зафиксировать можно только некоторые файлы точно также наведя на них курсор и кликнув на маленькую кнопку "Stage"
![TEXT](../illustr/Git%20usage/GitKraken/8.1.png "TEXT")

Отлично! Осталось совсем немного.

1. В окошке вы теперь видите Staged files - файлы, готовые к тому, чтобы их "зафиксировать".
2. Если вы случайно нажали на Stage all changes и вовсе не хотите коммитить файлы, то можно все отменить, нажав на кнопку "Unstage all stages". Естественно, эту же операцию можно сделать для файлов и по отдельности.
3. Гит не может делать коммиты без текста описания коммита. Обычно пишут что-то, чтобы быстро понять, что было изменено в этом коммите. Например, "добавил функцию чтения из файла" или "исправил ошибку чтения с экрана". Если все-таки ничего не хотите писать, то можно вписать просто "." - точку. Но пустым оставить описание нельзя. Кнопка "Коммит" просто не активируется.
4. Итак, если все было сделано правильно, то активируется кнопка "Коммит". Жмите ее!
![TEXT](../illustr/Git%20usage/GitKraken/9.PNG "TEXT")

Ура-ура-ура! Мы сделали это, коммит создан. Но помните, что гит делает коммиты в локальный репозиторий на вашей машине. Если, не дай бог, с вашей машиной что-то случится, то вы потеряете все изменения, которые накоммитили. Поэтому не забывайте периодически "пушить" ваши локальные изменения на сервер. Но не слишком часто. А то станете "пушистиками". ;)
![TEXT](../illustr/Git%20usage/GitKraken/10.PNG "TEXT")

P.s. Про "пушистиков" это была шутка. Пушьте так часто, как хотите. Я вот "пушистик" и горжусь этим. :)

## Более интересные вещи
### Внесение вклада в чужие репозитории
Если вы хотите внести свои изменения в репозиторий, в который вас не приглашали и соответственно в котором у вас нет прав на коммит изменений, существует механизм fork'ов. 

> Fork - полная копия репозирия. Создается совершенно новый репозиторий, который является полной копией (включая всю историю изменений) оригинала.

#### Fork
Создать форк можно с самого гитхаба
![TEXT](../illustr/Git%20usage/GitKraken/how-to-fork.png)
TODO остальные шаги
#### Pull request
TODO
#### Поддержание форка в актуальном состоянии
Часто бывает, что пока вы делали изменения в своем форке, оригинальный репозиторий за это время тоже успел измениться. В таком случае велика вероятность, что, если вы попробуете сделать пулл реквест своей не актуальной версии, будут конфликты при проверке на возможность слияния. И ваш пулл реквест отклонят.

Чтобы такого не было требуется следить за состояние оригинального репозитория и при необходимости делать вливание (merge) из него в вашу копию.

Сначала вам нужно добавить еще один remote источник в вашей копии репозитория.

TODO Сделать свои скрины, а пока что я ленивец, поэтому можно посмотреть мануальчик от самого GitKraken:

[GitKraken fork management](https://www.youtube.com/watch?time_continue=716&v=j_qpzND5yAg)
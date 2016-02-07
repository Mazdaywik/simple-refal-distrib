# Компилятор Простого Рефала
# О языке и компиляторе

Язык Простой Рефал — один из диалектов языка РЕФАЛ.

## Цели
Цели написаны в порядке убывания приоритета. Т. е., например, если в чём-то
противоречат первая и третья цели, имеет приоритет первая.

1. **Компилятор должен служить учебным пособием по курсу «Проектирование
   компиляторов».**
   * Архитектура компилятора и алгоритмы трансляции должны быть максимально
     просты и ясны.
   * Приступать к работе над компилятором будут студенты, часто не знакомые
     с РЕФАЛом, поэтому язык должен быть удобен для программирования и иметь
     низкий порог вхождения.
   * В языке не должно быть конструкций, требующих сложных алгоритмов
     компиляции. Например: вложенные именованные функции реализовать труднее,
     чем вложенные безымянные. Поэтому есть только последние.
   * В компиляторе не должно быть компонентов, усложняющих понимание. Например,
     если оптимизация требует алгоритма, гораздо более сложного, чем создание
     неоптимизированного кода, такой оптимизации в основной ветке компилятора
     не будет.
   * Используется классическое списковое представление, поскольку оно наиболее
     простое (например, в нём не требуется сборка мусора).
   * Компилятор самоприменим, поскольку, во-первых, погружение в предметную
     область становится неизбежным (что улучшает понимание и, тем самым,
     повышает качество работы), во-вторых, разработка методом раскрутки
     интереснее и поучительнее.
2. **Компилятор должен служить back-end’ом компилятора Модульного Рефала.**
   * Язык должен быть достаточно выразительным, чтобы эффективно выражать
     средства Модульного Рефала. Поэтому в языке есть, например, абстрактные типы
     данных и статические ящики.
   * В рантайме могут быть описаны средства, нигде в самом компиляторе
     не используемые. Дело в том, что они используются в Модульном Рефале.
   * Некоторые цели компилятора Модульного Рефала распространяются и на Простой
     Рефал, например, способность работать на слабых машинах.
3. **Компилятор должен быть легко переносим — должен собираться на любой машине,
   где есть какой-нибудь компилятор языка C++98.**
   * Лучше не делать предположений относительно того, какие утилиты (IDE, make,
     CMake, autotools…) есть на машине разработчика. Поэтому сборка для Windows
     осуществляется при помощи командных файлов, под UNIX-like платформы —
     при помощи bash-скриптов (последний, как правило, есть на всех современных
     UNIX-like системах).
   * Следует ограничиваться стандартным подмножеством C++, одинаково реализованном
     на подавляющем большинстве платформ. «#ifdef-кошмара» следует избегать.
   * Компилятор в рамках текущей архитектуры потребляет много памяти (30 Мбайт).
     Перенос под DOS с сохранением лёгкой компиляции под другие платформы
     потребует много работы и неоправданно усложнит компилятор и рантайм.
     Поэтому DOS не поддерживается.

### Историческое замечание

[Первоначальной целью](doc/historical/note000.txt) было написание минимального
компилятора, который мог бы генерировать код на императивном языке (конкретно —
C++). Удобство программирования, а также чистота, ясность и сопровождаемость
кода высокого приоритета не имели. Поэтому возникли такие артефакты, как
необходимость предобъявлений, пустые функции вместо идентификаторов, коряво
написанная библиотека Library.cpp. Следствием из этой цели было то, что каждая
сущность языка компилируется в эквивалентную сущность C++: `$EXTERN`
и `$FORWARD` — в объявления функций, функции — в определения функций, пустые
функции — в функции, состоящие из единственного оператора
`return refalrts::cRecognitionImpossible;`.

Позднее нарисовалась новая цель: компилятор должен стать одним из back-end’ов
Модульного Рефала. Соответственно, в язык добавились новые средства: статические
ящики, идентификаторы и абстрактные типы данных. Добавлены они в рамках той же
концепции независимой трансляции: статические ящики (которые являются
особого вида функциями) компилируются в специальные функции, идентификаторы
(также требующие предобъявления) — в хитрую конструкцию на C++.

Цель обеспечить максимальную переносимость ни разу явно не декларировалась,
но подразумевалась.

Не смотря на то, что компилятор как учебное пособие используется довольно
давно (примерно с 2009 года), явную цель я сформулировал только недавно,
когда осознал, что с текущим компилятором и языком студентам работать довольно
сложно. Можно считать, что все коммиты, начиная с апреля 2015 года, были
подчинены этой цели.

На данный момент первоначальная цель (минимальный компилятор РЕФАЛа
в императивный код) признана устаревшей, от её наследия код будет постепенно
очищаться.

## Особенности диалекта

Особенности языка, отличающие его от других диалектов РЕФАЛа:

* Функции — подмножество Базисного РЕФАЛа, т.е. расширенных конструкций
  типа условий, блоков, действий и т.д. не имеют.
* Вложенные безымянные функции.
* Поддержка инкапсуляции на уровне данных — именованные скобки, т. н.
  абстрактные типы данных.
* Идентификаторы (аналог compound-символов) не могут создаваться
  во время выполнения.

Особенности компилятора:

* Компилирует в C++.
* Самоприменимый, написан на себе.
* Есть нативный FFI к C++, IMHO, достаточно удобный.

## Установка

Установить компилятор в систему можно, либо скачав его с репозитория
[simple-refal.git][1], либо с [simple-refal-distrib.git][2]. В первом случае
вам будут доступны только исполнимые файлы компилятора (в полускомпилированном
виде — как исходники C++), во втором — полный исходный текст. Но в обоих случаях
последующая установка будет одной и той же.

1. Укажите в файле `c-plus-plus.conf.bat` (для unix-like `c-plus-plus.conf.sh`)
   ваш любимый компилятор C++ (установите переменную среды `CPPLINE` с префиксом
   командной строки, при желании, с опциями типа `-O3`, `-Wall` и др.; если
   необходимо, установите там же переменную `PATH`).
2. Запустите `bootstrap.bat` (`./bootstrap.sh`) для подготовки компилятора
   к работе.
3. Добавьте появившийся каталог `bin` к списку каталогов переменной среды `PATH`.
4. Можно использовать команды `srmake` или `srefc` для компиляции программ
   на Простом Рефале. Об использовании компилятора — см. раздел 5 [руководства
   пользователя](doc/manul.pdf).

## Лицензия

Компилятор распространяется по двухпунктной лицензии BSD с оговоркой
относительно компонентов стандартной библиотеки и рантайма — их можно
распространять в бинарной форме без указания копирайта. При отсутствии данной
оговорки для скомпилированных программ пришлось бы указывать копирайт самого
компилятора, что неразумно.

[1]: https://github.com/Mazdaywik/simple-refal.git
[2]: https://github.com/Mazdaywik/simple-refal-distrib.git
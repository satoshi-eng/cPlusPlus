# Куликов Кирилл ИТ-10 Лабораторная №1
# Задание 1
## Задача 1
### Текст задачи
Дана сигнатура функции: double fraction (double x);
Необходимо реализовать функцию таким образом, чтобы она возвращала
только дробную часть числа х. Подсказка: вещественное число может быть
преобразовано к целому путем отбрасывания дробной части.
### Алгоритм решения
Чтобы не было ошибок с отрицательными числами, подключил библиотеку <сmath>, в начале функции беру х по модулю, затем х превращаю в целое и записываю результат в переменную с, возвращаю х - с, в мэйне просто прошу ввести пользователя х и вывожу ему ответ.
### Тестирование
<img width="176" height="108" alt="image" src="https://github.com/user-attachments/assets/08f2f568-55f1-4b17-bf35-9609ec3ef2c5" />
<img width="176" height="108" alt="image" src="https://github.com/user-attachments/assets/afb3510f-a45a-4659-a5a5-6ddd22f21303" />
<img width="179" height="109" alt="image" src="https://github.com/user-attachments/assets/b18b0337-a40f-4977-9488-df20d9997a27" />


## Задача 3
### Текст задачи
Дана сигнатура функции: int charToNum (char x); 
Функция принимает символ х, который представляет собой один из “0 1 2 3 4 5 6 7 8 9”. Необходимо реализовать функцию таким образом, чтобы она преобразовывала символ в соответствующее число. Подсказка: код символа ‘0’ — это число 48.
### Алгоритм решения
Все цифры идут подряд, так как ‘0’ = 48, поэтому разница между кодом символа и 48 - это числовое значение. Функция просто возвращает х - ‘0’,  сделал проверку вводимого значения в мэйне, вывел ответ.
### Тестирование 
<img width="150" height="113" alt="image" src="https://github.com/user-attachments/assets/e770584d-5864-4dea-a8c9-4621f97bc308" />
<img width="146" height="112" alt="image" src="https://github.com/user-attachments/assets/e3c75105-25df-46d2-b867-71bc69f867ac" />
<img width="154" height="110" alt="image" src="https://github.com/user-attachments/assets/a477bf7a-ddba-46c5-ad31-2a05824e3363" />


## Задача 5
### Текст задачи 
Дана сигнатура функции: bool is2Digits (int x); 
Необходимо реализовать функцию таким образом, чтобы она принимала число x и возвращала true, если оно двузначное.
### Алгоритм решения
Снова добавил библиотеку <cmath>, чтобы взять модуль числа. В функции беру модуль по х, возвращаю результат условия. В мэйне ввожу х, сделал проверку, чтобы не было огромных чисел, вывел ответ 
### Тестирование
<img width="154" height="108" alt="image" src="https://github.com/user-attachments/assets/fd7b43af-d2ca-4b32-8182-a95743223d1d" />
<img width="160" height="114" alt="image" src="https://github.com/user-attachments/assets/f0d6b50f-3769-4b69-8995-505020dda44f" />
<img width="165" height="115" alt="image" src="https://github.com/user-attachments/assets/7c7e5428-76d5-43fc-a24a-cebeaadda307" />


## Задача 7
### Текст задачи
Дана сигнатура функции: bool isInRange (int a, int b, int num); 
Функция принимает левую и правую границу (a и b) некоторого числового диапазона. Необходимо реализовать функцию таким образом, чтобы она возвращала true, если num входит в указанный диапазон (включая границы). Обратите внимание, что отношение a и b заранее неизвестно (неясно кто из них больше, а кто меньше)
### Алгоритм решения
В функции ввожу две переменных min и max, узнаю через if какое число является каким, возвращаю результат условия. В функции мэйн все тоже самое. 
### Тестирование
<img width="222" height="107" alt="image" src="https://github.com/user-attachments/assets/871bf1db-7cb3-4ff9-bd80-49879ce06dc5" />
<img width="211" height="125" alt="image" src="https://github.com/user-attachments/assets/06ad2677-699f-44c8-92fb-86ad636fcd24" />
<img width="206" height="116" alt="image" src="https://github.com/user-attachments/assets/7fe2f92d-4e16-471c-ad0d-06f4ccd55ae2" />


## Задача 9
### Текст задачи
Дана сигнатура функции: bool isEqual(int a, int b, int c);
Необходимо реализовать функцию таким образом, чтобы она возвращала true, если все три полученных функцией числа равны
### Алгоритм решения 
В функции вывожу просто результат условия и все. В мэйне все обыденно. 
### Тестирование 
<img width="196" height="111" alt="image" src="https://github.com/user-attachments/assets/525b3a63-7d7c-4cc8-bf15-0bb0cbf922b4" />
<img width="209" height="115" alt="image" src="https://github.com/user-attachments/assets/4ce6eb12-07b5-4f80-ab00-da378f5de324" />
<img width="226" height="111" alt="image" src="https://github.com/user-attachments/assets/624a2a14-0c86-48cd-9810-f410e5a8d172" />


# Задание 2
## Задача 1
### Текст задачи
Дана сигнатура функции: int abs (int x); Необходимо реализовать функцию таким образом, чтобы она возвращала модуль числа х (если оно было положительным, то таким и остается, если он было отрицательным – то необходимо вернуть его без знака минус).
### Алгоритм решения 
Просто подключаем библиотеку <cmath>, берем х по модулю, возвращаем его. 
### Тестирование
<img width="158" height="110" alt="image" src="https://github.com/user-attachments/assets/da1f0a2f-24a6-4f39-add9-f3ad9e748cf3" />
<img width="160" height="107" alt="image" src="https://github.com/user-attachments/assets/0a16922a-f8f6-4f5c-85b4-3a035a66dd84" />


## Задача 3
### Текст задачи 
Дана сигнатура функции: bool is35 (int x); 
Необходимо реализовать функцию таким образом, чтобы она возвращала true, если число x делится нацело на 3 или 5. При этом, если оно делится и на 3, и на 5, то вернуть надо false. Подсказка: оператор % позволяет получить остаток от деления.
### Алгоритм решения
Если число делится и на 3, и на 5, то сразу возвращаем false. Если либо на 3, либо на 5, то возвращаем результат условия. 
### Тестирование
<img width="147" height="112" alt="image" src="https://github.com/user-attachments/assets/692ff1a7-892d-4a90-8dca-fa967abdfcb4" />
<img width="145" height="109" alt="image" src="https://github.com/user-attachments/assets/83037b49-c802-4612-aa02-69773f7b3e4e" />
<img width="158" height="105" alt="image" src="https://github.com/user-attachments/assets/b5f8aad0-7c9b-4639-8c98-b56b40744b08" />
<img width="155" height="108" alt="image" src="https://github.com/user-attachments/assets/0503274f-3ab8-4ae9-a263-c116a48f0116" />


## Задача 5
### Текст задачи
Дана сигнатура функции: int max3 (int x, int y, int z); 
Необходимо реализовать функцию таким образом, чтобы она возвращала максимальное из трех полученных функцией чисел. Подсказка: идеальное решение включает всего две инструкции if и не содержит вложенных if.
### Алгоритм решения
Создал переменную max, дал ей значение х, использовал две конструкции if, возвращал max. 
### Тестирование
<img width="177" height="109" alt="image" src="https://github.com/user-attachments/assets/b854ba80-3b15-4596-ae9f-b391ade98597" />
<img width="241" height="113" alt="image" src="https://github.com/user-attachments/assets/648dbb6f-bdd5-434e-8472-f4e19d1d8f24" />
<img width="258" height="107" alt="image" src="https://github.com/user-attachments/assets/07e5a304-dc25-4150-938c-73ad65780eca" />


## Задача 7
### Текст задачи
Дана сигнатура функции: int sum2 (int x, int y); 
Необходимо реализовать функцию таким образом, чтобы она возвращала сумму чисел x и y. Однако, если сумма попадает в диапазон от 10 до 19, то надо вернуть число 20.
### Алгоритм решения
Создал переменную суммы х+у, написал условие, если сумма от 10 до 19, то сумма становится 20, возвращаю сумму. 
### Тестирование
<img width="167" height="116" alt="image" src="https://github.com/user-attachments/assets/4e60a366-a5d4-4cb1-9272-8e346d11652d" />
<img width="166" height="114" alt="image" src="https://github.com/user-attachments/assets/cbf23cb3-1c87-488d-835f-1c5b35a5ceb3" />
<img width="172" height="116" alt="image" src="https://github.com/user-attachments/assets/ca754f61-beb7-48b7-a616-0ae4cd7f305a" />


## Задача 9
### Текст задачи 
Дана сигнатура функции: String day (int x); 
Функция принимает число x, обозначающее день недели. Необходимо реализовать функцию таким образом, чтобы она возвращала строку, которая будет обозначать текущий день недели, где 1 — это понедельник, а 7 – воскресенье. Если число не от 1 до 7 то верните текст “это не день недели”. Вместо if в данной задаче используйте switch.
### Алгоритм решения 
Просто сделал через switch, не знаю, что еще написать, шаблонная задача. 
### Тестирование
<img width="245" height="114" alt="image" src="https://github.com/user-attachments/assets/1e4af5ac-895b-40de-bf14-3ed076744e52" />
<img width="230" height="107" alt="image" src="https://github.com/user-attachments/assets/5fb066ee-35bd-4845-9285-e8c0582fcac0" />
<img width="225" height="110" alt="image" src="https://github.com/user-attachments/assets/ddf497ff-5d5f-4805-971c-82d1d07f420e" />


# Задание 3
## Задача 1
### Текст задачи 
Дана сигнатура функции: String listNums (int x); 
Необходимо реализовать функцию таким образом, чтобы она возвращала строку, в которой будут записаны все числа от 0 до x (включительно).
### Алгоритм решения
Создал пустую строку result,  пошел по числам от 0 до х, каждое записывал в result. 
### Тестирование 
<img width="149" height="113" alt="image" src="https://github.com/user-attachments/assets/e18f89a0-b0fa-42b6-84a6-003abbbdd19a" />
<img width="247" height="65" alt="image" src="https://github.com/user-attachments/assets/da007b6f-6902-4bf9-9c65-49ef1f8e099d" />


## Задача 3
### Текст задачи 
Дана сигнатура функции: String chet (int x); Необходимо реализовать функцию таким образом, чтобы она возвращала строку, в которой будут записаны все четные числа от 0 до x (включительно). Подсказа для обеспечения качества кода: инструкцию if использовать не следует.
### Алгоритм решения
Идем с шагом 2, берем все четные числа, выводим результат.
### Тестирование
<img width="168" height="108" alt="image" src="https://github.com/user-attachments/assets/cba349ba-011b-4fa5-9877-75ded3fb3df1" />


## Задача 5
### Текст задачи
Дана сигнатура функции: int numLen (long x); 
Необходимо реализовать функцию таким образом, чтобы она возвращала количество знаков в числе x. Подсказка: Int у=123/10; // у будет иметь значение 12
### Алгоритм решения
Берем х по модулю, создаем переменную count для подсчета количества. Целочисленное деление на 10 убирает последнюю цифру числа, сколько поделили, столько и цифр в числе.
### Тестирование
<img width="189" height="114" alt="image" src="https://github.com/user-attachments/assets/3fc1c2e8-2094-49df-8eb8-d50aab6c11f2" />
<img width="173" height="118" alt="image" src="https://github.com/user-attachments/assets/01cf491d-8f01-4629-8ef9-d6fdcc508689" />
<img width="198" height="113" alt="image" src="https://github.com/user-attachments/assets/46811617-d488-4c93-9e50-db16aaf14d91" />


## Задача 7
### Текст задачи
Дана сигнатура функции: void square (int x); 
Необходимо реализовать функцию таким образом, чтобы она выводила на экран квадрат из символов ‘*’ размером х, у которого х символов в ряд и х символов в высоту.
### Алгоритм решения
Row - отвечает за строки, col - отвечает за звездочки. Цикл выполняется для каждой строки.
### Тестирование
<img width="144" height="133" alt="image" src="https://github.com/user-attachments/assets/ccf5415b-593f-4324-a173-03e8c9337676" />
<img width="115" height="153" alt="image" src="https://github.com/user-attachments/assets/055c4e2d-12be-4e31-b81c-8ebb230ead31" />
<img width="410" height="111" alt="image" src="https://github.com/user-attachments/assets/ed36c867-9ee1-4b5d-965d-db3debb99283" />


## Задача 9
### Текст задачи
Дана сигнатура функции: void rightTriangle (int x); 
Необходимо реализовать функцию таким образом, чтобы она выводила на экран треугольник из символов ‘*’ у которого х символов в высоту, а количество символов в ряду совпадает с номером строки, при этом треугольник выровнен по правому краю. Подсказка: перед символами ‘*’ следует выводить необходимое количество пробелов.
### Алгоритм решения
Звездочек - i штук, пробелов --  x - i.  Цикл начинается с записывания пробелов, чтобы был правильны треугольник. 
### Тестирование
<img width="154" height="155" alt="image" src="https://github.com/user-attachments/assets/7e68e1f4-ea9b-4d9b-9730-fce4c8acfbca" />
<img width="163" height="200" alt="image" src="https://github.com/user-attachments/assets/0ce8ae64-a032-4800-99a6-348d49335cb5" />
<img width="409" height="106" alt="image" src="https://github.com/user-attachments/assets/3f7a5b5c-ac2b-4bcf-aa62-52b69dbdf31a" />


# Задание 4
## Задача 1
### Текст задачи
Дана сигнатура функции: int findFirst (int arr[], int x); Необходимо реализовать функцию таким образом, чтобы она возвращала индекс первого вхождения числа x в массив arr. Если число не входит в массив – возвращается -1
### Алгоритм решения
Задаю n параметром функции, он нужен для arr.  Идем по массиву с начала и сравниваем с х, если нашли возвращаем индекс. 
### Тестирование
<img width="139" height="112" alt="image" src="https://github.com/user-attachments/assets/b336a78a-a204-4d53-86de-8fd25e7cc8f4" />
<img width="170" height="121" alt="image" src="https://github.com/user-attachments/assets/c027a218-8c96-4a4e-80b9-d531e90ee252" />


## Задача 3
### Текст задачи
Дана сигнатура функции: int maxAbs (int arr[]); 
Необходимо реализовать функцию таким образом, чтобы она возвращала наибольшее по модулю (то есть без учета знака) значение массива arr
### Алгоритм решения
Добавил библиотеку, чтобы взять i по модулю, создал переменную max. Иду по массиву, если arr[i] больше max, то присваиваю max значение arr[i]. 
### Тестирование
<img width="284" height="86" alt="image" src="https://github.com/user-attachments/assets/e92a8c1c-ef40-461d-b866-68b29db823d3" />


## Задача 7
### Текст задачи
Дана сигнатура функции: int * reverseBack (int arr[]); 
Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, в котором значения массива arr записаны задом наперед.
### Алгоритм решения
В начале выделяю новую память под n элементов, затем копирую с конца в начало, возвращаю указатель на новый массив. В мэйне вызываю функцию, освобождаю память.
### Тестирование
<img width="228" height="69" alt="image" src="https://github.com/user-attachments/assets/13676acd-3e57-4685-a6b8-ef5ba76eb09c" />

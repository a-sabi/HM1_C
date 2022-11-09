#include <iostream>
#include <valarray>
using namespace std;

////Задача №1 Вычислить площадь трапеции с основаниями b1 и b2 и высотой h

double trapezoid(int b1, int b2, int h) ////Функция принимает три целых числа и возвращает значение площади трапеции
{
    double S = double (b1 + b2) * h / 2;
    return S;
}
void task1() ////Функция ввода и вывода
{
    int b1, b2, h;
    cout << "Task 1" << endl; ////Выводится в консоль строка с номером задания
    cout << "Enter the sides of trapezoid and the height:" << endl; ////Выводится строка, которая просит ввести стороны и высоту трапеции
    cin >> b1 >> b2 >> h; ////Вводятся с консоли числа
    cout << "The trapezoid area = " << trapezoid(b1, b2, h) << endl; ////Выводится текст и функция обращается к фунции площади трапеции. Там вычисляется площадь и рещультат поступает в эту функцию
}


////Задача №2 Вычислить длину окружности и площадь круга радиуса r

double circumference(int r)
{
    double l = 2 * 3.14 * r;
    return l;
}
double circleArea(int r)
{
    double S = 3.14 * r * r;
    return S;
}
void task2()
{
    int r;
    cout << "Task 2" << endl;
    cout << "Enter the redius:" << endl;
    cin >> r;
    cout << "The Circumference = " << circumference(r) << endl;
    cout << "The circle area = " << circleArea(r) << endl;
}

////Задача №3  Вычислить площадь прямоугольного треугольника и гипотенузу

double triangleArea(int a, int b)
{
    double S = a * b * 0.5;
    return S;
}
double hypotenuse(int a, int b)
{
    double C = sqrt(a*a + b*b);
    return C;
}
void task3()
{
    int a, b;
    cout << "Task 3" << endl;
    cout << "Enter legs:" << endl;
    cin >> a >> b;
    cout << "The triangle area = " << triangleArea(a, b) << endl;
    cout << "The hypotenuse = " << hypotenuse(a, b) << endl;
}

////Задача №4 Дано десятичное четырехзначное число. Найти сумму его цифр

double number(int n)
{
    double a = double (n) / 1000;
    double b = n / 100 % 10;
    double c = n / 10 % 10;
    double d = n % 10;
    double number = a + b + c +d;
    return number;
}
void task4()
{
    int n;
    cout << "Task 4" << endl;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "The number sum = " << number(n) << endl;
}

////Задача №5  Выполнить переход от декартовых координат к полярным

double transition_r(int x, int  y)
{
    double r = sqrt(x*x + y*y);
    return r;
}
double transition_fi(int x, int y)
{
    double fi = (atan((double )y / x));
    return fi;
}
void task5()
{
    int x, y;
    cout << "Task 5" << endl;
    cout << "Enter x and y:" << endl;
    cin >> x >> y;
    cout << "r = " << transition_r(x, y) << endl;
    cout << "fi = " << transition_fi(x, y) << endl;
}

////Задача №6 Выполнить переход от полярных координат к декартовым

double transition_x(int r, int fi)
{
    double x = r * cos(fi);
    return x;
}
double transition_y(int r, int fi)
{
    double y = r * sin(fi);
    return y;
}
void task6(){
    int r, fi;
    cout << "Task 6" << endl;
    cout << "Enter r and fi:" << endl;
    cin >> r >> fi;
    cout << "x = " << transition_x(r, fi) << endl;
    cout << "y = " << transition_y(r, fi) << endl;
}

////Задача №7 Найти корни квадратного уравнения

double task7()
{
    int a, b, c;
    cout << "Task 7" << endl;
    cout << "Enter a, b, c:" << endl;
    cin >> a >> b >> c; ////Вводятся числа
    double D = b*b - 4*a*c; ////Вычисляется дискриминант
    if (D > 0) ////переход к условию. Если дискриминант больше нуля, то есть условие истинно, то блок команд выполнится
    {
        double x1 = (-b + sqrt(D)) / (2*a); ////Вычисление корней
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "The first root of a quadratic equation = " << x1 << endl; ////Вывод в консоль корней
        cout << "The second root of a quadratic equation = " << x2 << endl;
    }
    else if (D == 0) ////Если дискриминант не больше нуля переходит к следующему условию
    {
        double x = double (-b) / (2*a);
        cout << "The root of a quadratic equation = " << x << endl;
    }
    else ////Если ни одно из условий не выполнилось, то есть они ложные, то происходит переход к else
    {
        cout << "There is no roots " << endl;
    }
    return 0;
}

////Задача №8 Имеется треугольник со сторонами а, b, с.
////Найти медианы треугольника, сторонами которого являются медианы исходного треугольника

double task8()
{
    int a, b, c;
    cout << "Task 8" << endl;
    cout << "Enter a, b, c:" << endl;
    cin >> a >> b >> c;
    double ma = 0.5 * sqrt(2*c*c + 2*b*b - a*a);
    double mb = 0.5 * sqrt(2*c*c + 2*a*a - b*b);
    double mc = 0.5 * sqrt(2*a*a + 2*b*b - c*c);
    double e = ma;
    double f = mb;
    double g = mc;
    double me = 0.5 * sqrt(2*g*g + 2*f*f - e*e);
    cout << "The first median = " << me << endl;
    double mf = 0.5 * sqrt(2*g*g + 2*e*e - f*f);
    cout << "The second median = " << mf << endl;
    double mg = 0.5 * sqrt(2*e*e + 2*f*f - g*g);
    cout << "The third median = " << mg << endl;
    return 0;
}

////Задача №9 Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток

int task9()
{
    int k;
    cout << "Task 9" << endl;
    cout << "Enter k:" << endl;
    cin >> k;
    int hour = k / 3600;
    int min = (k % 3600) / 60;
    cout << hour << " hours and " << min << " minutes have passed" << endl;
    return 0;
}

////Задача №10 Определить, является ли треугольник со сторонами a, b, c равнобедренным

double task10()
{
    int a, b, c;
    cout << "Task 10" << endl;
    cout << "Enter a, b, c:" << endl;
    cin >> a >> b >> c;
    if (a == b or b == c or a == c) ////Сразу несколько условий, но блок команд выполнится, если хотя бы одно из этих условий истинно
    {
        cout << "The triangle is isosceles" << endl;
    }
    else if (a == b == c)
    {
        cout << "The triangle is equilateral" << endl;
    }
    else
    {
        cout << "This is an another kind of triangle or such triangle do not exist" << endl;
    }
    return 0;
}

////Задание №11 Вычислить стоимость покупки с учётом скидки.
////Скидка в 10% предоставляется, если сумма покупки превышает 1000 рублей

double task11()
{
    int sum;
    cout << "Task 11" << endl;
    cout << "Enter purchase sum: " << endl;
    cin >> sum;
    if (sum > 1000)
    {
        double sum_disc = sum * 0.9;
        cout << "Congratulations! You get the discount " << endl;
        cout << "The price with discount is " << sum_disc << endl;
    }
    else
    {
        cout << "Sorry, you do not get the discount :(( " << endl;
        cout << "The price is " << sum << endl;
    }
    return 0;
}

////Задание №12 Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
////идеальный вес определяется формулой (рост - 100 = идеальный вес)

double task12()
{
    int height, weight;
    cout << "Task 12" << endl;
    cout << "A little reminder: you are beautiful just the way you are!" << endl;
    cout << "Enter the height and the weight: " << endl;
    cin >> height >> weight;
    double perfect_weight = height - 100;
    if (perfect_weight > weight)
    {
        cout << "You need to gain some weight :)" << endl;
    }
    else if (perfect_weight < weight)
    {
        cout << "You need to lose some weight :)" << endl;
    }
    else
    {
        cout << "You have the perfect weight :)" << endl;
    }
    return 0;
}

////Задание №13 Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат
////произведения этих чисел. Программа сообщает тестируемому ошибся он или нет

int task13()
{
    int pro_num;
    cout << "Task 13" << endl;
    srand((unsigned) time(NULL)); //// эта строчка нужна, чтобы рандомные числа при каждом запуске фунции были различны
    int a = 1 + rand()%9; ////Генерируется первое рандомное число
    int b = 1 + rand()%9;
    cout << "First random number = " << a << endl;
    cout << "Second random number = " << b << endl;
    cout << "Enter the product of these numbers: " << endl;
    cin >> pro_num;
    if ((a * b) == pro_num)
    {
        cout << "You are right" << endl;
    }
    else
    {
        cout << "You are wrong" << endl;
    }

}

////Задание №14 Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
////предоставляется скидка 20%. Ввести продолжительность разговора и день недели(число от 1 до 7)

double task14()
{
    int price, duration, day;
    cout << "Task 14" << endl;
    cout << "Enter the price: " << endl;
    cin >> price;
    cout << "Enter the duration of the call: " << endl;
    cin >> duration;
    cout << "Enter the day: " << endl;
    cin >> day;
    price *= duration;
    if (day == 6 or day == 7)
    {
        price = price * 0.8;
        cout << "The price with discount is: " << price << endl;
    }
    else if (day > 7)
    {
        cout << "There are only 7 days a week" << endl;
    }
    else
    {
        cout << "The price is: " << price << endl;
    }
    return 0;
}

////Задание №15 Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года

int task15()
{
    int month;
    cout << "Task 15" << endl;
    cout << "Enter the month number: " << endl;
    cin >> month;
    if (month == 12 or month == 1 or month == 2) //// Вложенный условный оператор нужен, чтобы показать, что некоторые условия могут выполниться, если только какое-то другое главное условие выполнится
    {
        if (month == 12)
        {
            cout << "It is winter and December" << endl;
        }
        else if (month == 1)
        {
            cout << "It is winter and January" << endl;
        }
        else if (month == 2)
        {
            cout << "It is winter and February" << endl;
        }
    }
    else if (month == 3 or month == 4 or month == 5)
    {
        if (month == 3)
        {
            cout << "It is spring and March" << endl;
        }
        else if (month == 4)
        {
            cout << "It is spring and April" << endl;
        }
        else if (month == 5)
        {
            cout << "It is spring and May" << endl;
        }
    }
    else if (month == 6 or month == 7 or month == 8)
    {
        if (month == 6)
        {
            cout << "It is summer and June" << endl;
        }
        else if (month == 7)
        {
            cout << "It is summer and July" << endl;
        }
        else if (month == 8)
        {
            cout << "It is summer and August" << endl;
        }
    }
    else if (month == 9 or month == 10 or month == 11)
    {
        if (month == 9)
        {
            cout << "It is autumn and September" << endl;
        }
        else if (month == 10)
        {
            cout << "It is autumn and October" << endl;
        }
        else if (month == 11)
        {
            cout << "It is autumn and November" << endl;
        }
    }
    else
    {
        cout << "You enter wrong number. There are only 12 months" << endl;
    }
    return 0;
}

////Задание №16 Определить, является ли шестизначное число "счастливым"

double task16()
{
    int num;
    cout << "Task 16" << endl;
    cout << "Enter the number: " << endl;
    cin >> num;
    if (num/100000 + num/10000%10 + num/1000%10 == num/100%10 + num/10%10 + num%10)
    {
        cout << "It is a lucky number!" << endl;
    }
    else
    {
        cout << "It is unlucky usual number :(" << endl;
    }
    return 0;
}

////Задание №17 Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово
////"копейка" в правильной форме

int task17()
{
    int n;
    cout << "Task 17" << endl;
    cout << "Enter the number: " << endl;
    cin >> n;
    if (n >= 1 and n <= 99)
    {
        if (n > 10 and n < 20) ////В данном условии обязательно должны выполниться и левая, и права стороны, чтобы блок комант выполнился
        {
            cout << n << " kopeek" << endl;
        }
        else if (n % 10 == 1)
        {
            cout << n << " kopeika" << endl;
        }
        else if (n % 10 == 2 or n % 10 == 3 or n % 10 == 4)
        {
            cout << n << " kopeiky" << endl;
        }
        else
        {
            cout << n << " kopeek" << endl;
        }
    }
    else
    {
        cout << "Entered wrong number" << endl;
    }
    return 0;
}

////Задача №18 Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом

int task18()
{
    int num;
    cout << "Task 18" << endl;
    cout << "Enter the number: " << endl;
    cin >> num;
    int a = num / 1000;
    int b = num % 1000 / 100;
    int c = num % 100 / 10;
    int d = num % 10;
    if (num >= 1000 and num <10000)
    {
        if (a == d and b == c)
        {
            cout << "It is a palindrome" << endl;
        }
        else
        {
            cout << "It is not a palindrome" << endl;
        }
    }
    else if (num < 1000)
    {
        cout << "The number is too short" << endl;
    }
    else if (num >= 10000)
    {
        cout << "The number is too long" << endl;
    }
    return 0;
}

////Задание №19 Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b
////19.2 кратна ли 7 сумма его цифр

int task19()
{
    int num, b;
    cout << "Task 19" << endl;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Enter number b: " << endl;
    cin >> b;
    int x = num / 100;
    int y = num % 100 / 10;
    int z = num % 100;
    if (num >= 100 and num < 1000)
    {
        cout << "Task 19.1" << endl;
        if ((x * y * z) > b)
        {
            cout << "Yes, product of numbers greater than b" << endl;
        }
        else
        {
            cout << "No, product of numbers less than b" << endl;
        }
        cout << "Task 19.2" << endl;
        if ((x + y + z) % 7 == 0)
        {
            cout << "Yes, the sum is a multiple of 7" << endl;
        }
        else
        {
            cout << "No, the sum is not a multiple of 7" << endl;
        }
    }
    else
    {
        cout << "Entered non-three-digit number" << endl;
    }
    return 0;
}

////Задача №20 Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
////сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
////прямоугольника были параллельны сторонам другого

double task20()
{
    int a, b, c, d;
    cout << "Task 20" << endl;
    cout << "Enter the sides of the first rectangle: " << endl;
    cin >> a >> b;
    cout << "Enter the sides of the second rectangle: " << endl;
    cin >> c >> d;
    if ((a <= c and b <= d) or (b <= c and a <= d))
    {
        cout << "A rectangle with sides a and b can fit into a rectangle with sides c and d" << endl;
    }
    else
    {
        cout << "A rectangle with sides a and b cannot fit into a rectangle with sides c and d" << endl;
    }
    return 0;
}

int main() //// Функция main выводит ответ в консоль
{
    int num;
    std::cout << "Enter the number of task (from 1 to 20):" << std::endl; ////Выбор номера задания
    std::cin >> num; ////Считывает число
    if (num == 1) ////Если число = 1, то переходит к фукции task1
    {
        task1(); ////Выводит результат функции task1
    }
    else if (num == 2)
    {
        task2();
    }
    else if (num == 3)
    {
        task3();
    }
    else if (num == 4)
    {
        task4();
    }
    else if (num == 5)
    {
        task5();
    }
    else if (num == 6)
    {
        task6();
    }
    else if (num == 7)
    {
        task7();
    }
    else if (num == 8)
    {
        task8();
    }
    else if (num == 9)
    {
        task9();
    }
    else if (num == 10)
    {
        task10();
    }
    else if (num == 11)
    {
        task11();
    }
    else if (num == 12)
    {
        task12();
    }
    else if (num == 13)
    {
        task13();
    }
    else if (num == 14)
    {
        task14();
    }
    else if (num == 15)
    {
        task15();
    }
    else if (num == 16)
    {
        task16();
    }
    else if (num == 17)
    {
        task17();
    }
    else if (num == 18)
    {
        task18();
    }
    else if (num == 19)
    {
        task19();
    }
    else if (num == 20)
    {
        task20();
    }
    return 0;
}

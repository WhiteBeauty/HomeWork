/*
 * 2 номер переделанный
 * Написать программу считающую уравнения:
 * y1 = 2 * sin^2(3pi - 2a) * cos^2(5pi + 2 a)
 * y2 = 1 - 1/4sin^2a + cos 2a
 * y3 = 1/4 - 1/4sin(5/8pi - 8a)
 * y4 = cos^2a + cos^4a
 */

/*
#include <math.h>
#include <stdio.h>
int main(){
    printf("Input the value of a in degrees \n");
    double y1, y2, y3, y4, a;
    scanf("%lf", &a);
    double rad = ((a * M_PI) / 180);
    y1 = 2 * pow(sin(3 * M_PI - 2 * rad) , 2) * pow(cos(5 * M_PI + 2 * rad), 2);
    y2 = 1 - 0.25 * pow(sin(2 * rad),2) + cos(2 * rad);
    y3 = 0.25 - 0.25 * sin(0.625 * M_PI - 8 * rad);
    y4 = pow(cos(rad),2) + pow(cos(rad), 4);
    printf("y1 = 2 * sin^2(3pi - 2a) * cos^2(5pi + 2 a) = %lf, \ny2 = 1 - 1/4sin^2a + cos 2a = %lf, \ny3 = 1/4 - 1/4sin(5/8pi - 8a) = %lf, \ny4 = cos^2a + cos^4a = %lf", y1, y2, y3, y4);
    return 0;
}
*/

// 1 номер на for
//	Найти все делители целого положительного числа за минимальное количество итераций. Вывести количество затраченных итераций.

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int counter = 0; // счетчик
    int n;
    printf("Enter the number whose divisors you want to count\n");
    scanf("%d", &n);
    printf("number divisors: \n");
    for (int i = 1; i * i <= n; ++i) {
        div_t d = div(n, i); // n - делитель i - знаменатель
        if (d.rem == 0) { // rem - Остаток от деления выполняемого функцией div
            printf("%d\n", i);
            counter++;
            if (d.quot != i) {
                printf("%d\n", d.quot); // quot - Представляет собой частное от деления выполняемого функцией div
                counter++;
            }
        }
    }
    printf("Minimum number of iterations: %d", counter);
    return 0;
}
*/



// 2 номер
// 	Напечатать таблицу значений функции Y=X^2+1 с использованием определённого количество точек и во введенном диапазоне

/*
#include <stdio.h>


int main() {
    float y; float x;
    float step, range;
    printf("Input step and range (starting from 0) ap to the enter\n");
    scanf("%f", &step); // шаг
    scanf("%f", &range); // до куда идти
    for (x = 0; x <= range; x += step){ // начиная с 0 до введеного диапазона с шагом step
        y = x * x + 1;
        printf("pri x = %f y = x^2 + 1 = %f \n", x, y); // выводим значения х и у
    }
    return 0;
    }
*/

// 3 номер
//	Ввести 5 дробных чисел и после ввода каждого числа вывести среднее арифметическое введённой части последовательности.


#include <stdio.h>

/*
int main(){
    float a[6], sum = 0, res;
    for (int i = 1; i <= 5; i++){
        printf( " \nEnter a number -> ");
        scanf( "%f", &a[i]);
        sum += a[i];
        res = sum / i;
        printf("Entered number: %d", i);
        printf(" Summa: %f", sum);
        printf( " Arithmetic mean: %.2f", res);
    }
    return 0;
}
*/

/*
 * Cicle_Prev-Post.
Среди всех натуральных n-значных чисел выбрать и вывести на экран числа-палиндромы. Палиндром – число, которое имеет одинаковое чтение слева направо и справа налево.
 */


/*
#include <math.h>

int palindrome(int N){ // функция переворота числа через while
    int n = 0;
    while (N){
        n = 10 * n + N % 10;
        N /= 10;
    }
    return n;
}

int main(){
    int a;
    printf("enter how many numbers will be in the number\n");
    scanf("%d",&a);

    int beg = pow(10, a - 1);
    int end = pow(10, a);
    for (int i = beg; i < end; i++){
        if ( i == palindrome(i) )
            printf("%d is a palindrome number\n", i);
    }
    return 0;
}

*/

// второй вариант

/*
#include <math.h>

int palindrome(int N){ // функция переворота числа через do while
    int n = 0;
    do {
        n = 10 * n + N % 10;  // умножаем результат на 10 и добавляем последнюю цифру числа
    } while (N /= 10);   // делим число на 10, если целая часть больше 0, то повторяем цикл
    return n;
}

int main(){
    int a;
    printf("enter how many numbers will be in the number\n");
    scanf("%d",&a);

    int beg = pow(10, a - 1);
    int end = pow(10, a);
    for (int i = beg; i < end; i++){
        if ( i == palindrome(i) )
            printf("%d is a palindrome number\n", i);
    }
    return 0;
}
*/


/*
 * Cicle_Prev-Post.
Дано целое число N (> 2) и две вещественные точки на числовой оси: A, B (A < B). Функция F(X) задана формулой F(X) = 1 – sin(X).
Вывести значения функции F в N равноотстоящих точках, образующих разбиение отрезка [A, B]: F(A), F(A + H), F(A + 2H), ..., F(B).
 */


/*
#include <math.h>

int main(){
    int n; // количество отрезков
    printf("Input the int N (> 2) number of segments\n");
    scanf("%d", &n);
    float a, b;
    printf("enter two real points (segment boundaries) on the numeric axis so that: A, B (A < B)\n");
    scanf("%f", &a);
    scanf("%f", &b);
    if (a < b) {
    float x =  a;
    float h = (b - a) / (n); // n - 1
    while (x <= b) {
        printf("x = %0.3f", x);
        printf(" -> ");
        printf("F(x) = %0.3f \n" , 1-sinf(x));
        x += h;
    }} else{
        printf("Error");
    }
    return 0;
}
*/

/*
#include <math.h>

int main(){
    int n; // количество отрезков
    printf("Input the int N (> 2) number of segments\n");
    scanf("%d", &n);
    float a, b;
    printf("enter two real points (segment boundaries) on the numeric axis so that: A, B (A < B)\n");
    scanf("%f", &a);
    scanf("%f", &b);
    if (a < b) {
        float x = a;
        float h = (b - a) / (n - 1);
        do {
            printf("x = %0.3f", x);
            printf(" -> ");
            printf("F(x) = %0.3f \n", 1 - sinf(x));
            x += h;
        } while (x <= b);
    } else {
        printf("Error");
    }
    return 0;
}
*/















// 1 дз








// 1 номер
// Ввод 3 разных чисел и вывод их на печать в порядке убывания
// Блок подключения библиотек
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    // Отступ от левого края 4 пробела или 1 табуляция.
    // Блок объявления/инициализации переменных.
    int a, b, c;
    int max1, max2, max3;
    printf("Input different values for a, b, c through enter \n");
    scanf("%d \n %d \n %d", &a, &b, &c);
    while ((a == b) || (b == c) || (a == c)){
        printf("The numbers are the same!");
        _Exit (EXIT_SUCCESS);
    }
    if (a > b){
        max1 = a;
        max2 = b;
    } else {
        max1 = b;
        max2 = a;
    }
    if (max1 > c) {
        if (max2 > c){
            max3 = c;
        } else {
            max3 = max2;
            max2 = c;
        }
    } else {
        max3 = max2;
        max2 = max1;
        max1 = c;
    }
    printf("max1 = %d, max2 = %d, max3 = %d", max1, max2, max3);
    return 0;
    }

*/




/*
 * 3 номер
 * BinChoice.
 * Даны две переменные вещественного типа: А, В. Перераспределить значения данных переменных так,
 * чтобы в А оказалось меньшее из значений, а в В – большее. Вывести новые значения переменных А и В.
 */

/*
#include <stdio.h>
int main(){
    float a, b, temp;
    printf("Input 2 numbers\n");
    printf("a = \n");
    scanf("%f", &a);
    printf("b = \n");
    scanf("%f", &b);
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    printf("a = %f, b = %f", a, b);
    return 0;
}
*/

/*
 * 4 номер
 * MultiChoice.
 *Даны два целых числа: D (день) и М (месяц), определяющие правильную дату невисокосного года.
 * Вывести значения D и М для даты, следующей за указанной.
 */

/*
#include <stdio.h>
int main(){
    int M, D;
    printf("Input the day\n");
    scanf("%d", &D);
    printf("Input the month\n");
    scanf("%d", &M);
    if ((M > 0 && M <= 12) && (D > 0 && D < 32)) {
        switch (M) {
            case 1: case 3: case 5: case 12:
                if (D == 31) {
                    D = 1;
                    M += 1;
                    break;
                } else {
                    D += 1;
                    break;
                }
            case 2:
                if (D == 28) {
                    D = 1;
                    M += 1;
                    break;
                } else {
                    if (D >= 29){
                        D = 0;
                        M = 0;
                        printf("In February, 28 days\n");
                        break;
                    }else {
                        D += 1;
                        break;
                    }
                }
            case 4: case 6:
                if (D == 30) {
                    D = 1;
                    M += 1;
                    break;
                } else {
                    D += 1;
                    break;
                }
        }
        printf("day = %d, month = %d", D, M);
    } else {
        printf("Error");
    }
    return 0;
}
*/

/*
 * 5 номер
 * MultiChoice.
 *Локатор ориентирован на одну из сторон света ("С" – север (N), "З" – запад (W), "Ю" – юг (S), "В" – восток (E)) и может принимать три цифровые команды поворота:
 * 1 – поворот налево, -1 – поворот направо, 2 — поворот на 180°.
 * Дан символ G – исходная ориентация локатора и целые числа N1 и N2 – две посланные команды.
 * вывести ориентацию локатора после выполнения этих команд.
 */

/*
#include <stdio.h>
int main(){
    printf("Enter the orientation of the locator: north(N), south(S), west(W), east(E)\n");
    char cardinalDirections;
    scanf("%c", &cardinalDirections);
    printf("Enter the rotation commands\n");
    int moving_1, moving_2;
    printf("Command N1: \n");
    scanf("%d", &moving_1);
    printf("Command N2: \n");
    scanf("%d", &moving_2);

    switch (cardinalDirections) {
        case 'N':
            switch (moving_1){
                case 1:
                    cardinalDirections = 'W';
                    break;
                case -1:
                    cardinalDirections = 'E';
                    break;
                case 2:
                    cardinalDirections = 'S';
                    break;
                default:
                    printf("Error");
            }
            break;
        case 'W':
            switch (moving_1) {
                case 1:
                    cardinalDirections = 'S';
                    break;
                case -1:
                    cardinalDirections = 'N';
                    break;
                case 2:
                    cardinalDirections = 'E';
                    break;
                default:
                    printf("Error");
            }
            break;
        case 'S':
            switch (moving_1) {
                case 1:
                    cardinalDirections = 'E';
                    break;
                case -1:
                    cardinalDirections = 'W';
                    break;
                case 2:
                    cardinalDirections = 'N';
                    break;
                default:
                    printf("Error");
            }
            break;
        case 'E':
            switch (moving_1) {
                case 1:
                    cardinalDirections = 'N';
                    break;
                case -1:
                    cardinalDirections = 'S';
                    break;
                case 2:
                    cardinalDirections = 'W';
                    break;
                default:
                    printf("Error");
            }
            break;
        default:
            printf("Error");
    }

    // вторая команда
    switch (cardinalDirections) {
        case 'N':
            switch (moving_2){
                case 1:
                    cardinalDirections = 'W';
                    break;
                case -1:
                    cardinalDirections = 'E';
                    break;
                case 2:
                    cardinalDirections = 'S';
                    break;
                default:
                    printf("Error");
            }
            break;
        case 'W':
            switch (moving_2) {
                case 1:
                    cardinalDirections = 'S';
                    break;
                case -1:
                    cardinalDirections = 'N';
                    break;
                case 2:
                    cardinalDirections = 'E';
                    break;
                default:
                    printf("Error");
            }
            break;
        case 'S':
            switch (moving_2) {
                case 1:
                    cardinalDirections = 'E';
                    break;
                case -1:
                    cardinalDirections = 'W';
                    break;
                case 2:
                    cardinalDirections = 'N';
                    break;
                default:
                    printf("Error");
            }
            break;
        case 'E':
            switch (moving_2) {
                case 1:
                    cardinalDirections = 'N';
                    break;
                case -1:
                    cardinalDirections = 'S';
                    break;
                case 2:
                    cardinalDirections = 'W';
                    break;
                default:
                    printf("Error");
            }
            break;
        default:
            printf("Error");

    }
    printf("New location: %c", cardinalDirections);
            return 0;
}

*/
// еще один вариант решения

/*
#include <stdio.h>
int main(){
    const char *arr[] = { "north", "east", "south", "west" };
    const int kol = sizeof(arr) / sizeof(char *); // выводит количество элементов в массиве (4)

    int step = 0;
    int command;
    do {
        printf("The direction of the locator\n %s\n", arr[step]);
        printf("(to stop typing, press 0) command: \n");
        scanf( "%d", &command);
        if (command != 0) {
            step += command % kol;
            step %= kol;
        }//if (step < 0)
//step = kol + step;
    } while (command != 0);
    printf("%s", arr[step]);
    return 0;
}

*/





// Ввод 3 разных чисел и вывод их на печать в порядке убывания
// Блок подключения библиотек

/*
#include <stdio.h>
int main(){
    // Отступ от левого края 4 пробела или 1 табуляция.
    // Блок объявления/инициализации переменных.
    int a, b, c;
    int max1, max2, max3;
    printf("Input different values for a, b, c through enter \n");
    scanf("%d \n %d \n %d", &a, &b, &c);
    while ((a == b) || (b == c) || (a == c)){
        printf("The numbers are the same!");
        getchar(); getchar();
    }
    if (a > b){
        max1 = a;
        max2 = b;
    } else {
        max1 = b;
        max2 = a;
    }
    if (max1 > c) {
        if (max2 > c){
            max3 = c;
        } else {
            max3 = max2;
            max2 = c;
        }
    } else {
        max3 = max2;
        max2 = max1;
        max1 = c;
    }
    printf("max1 = %d, max2 = %d, max3 = %d", max1, max2, max3);
    return 0;
    }
*/


/*
 * Написать программу считающую уравнения:
 * y1 = 2 * sin^2(3pi - 2a) * cos^2(5pi + 2 a)
 * y2 = 1 - 1/4sin^2a + cos 2a
 * y3 = 1/4 - 1/4sin(5/8pi - 8a)
 * y4 = cos^2a + cos^4a
 */


/*
#include <math.h>
#include <stdio.h>
int main(){
    printf("Input the value of a in degrees \n");
    double y1, y2, y3, y4, a, pi = 3.1415926;
    scanf("%lf", &a);
    y1 = 2.0 * pow(sin(3.0 * pi - 2.0 * a) , 2.0) * pow(cos(5.0 * pi + 2.0 * a), 2.0);
    y2 = 1.0 - 0.25 * pow(sin(2.0 * a),2.0) + cos(2.0 * a);
    y3 = 0.25 - 0.25 * sin(0.625 * pi - 8.0 * a);
    y4 = pow(cos(a),2.0) + pow(cos(a), 4.0);
    printf("y1 = %lf, \ny2 = %lf, \ny3 = %lf, \ny4 = %lf", y1, y2, y3, y4);
    return 0;
}

*/

/*#include <math.h>
#include <stdio.h>
int main() {

    int s = 0, N;
    printf("Input N\n");
    scanf("%d", &N);
    for (int ind = 1; ind <= N; ind ++){
        s += ind;
    }
    printf("Symma = %d", s);

    return 0;
}

*/


#include <math.h>
#include <stdio.h>

int main() {
    int n, d = 2, r;
    printf("Input n\n");
    scanf("%d", &n);
    do {
        r = n % d;
        if (r != 0){
            d = d + 1;
        }
    }
    while (r != 0);
    printf("Nomber n - ");
    if (d != n){
        printf("not ");
    }
    printf("prime");
    return 0;
}





























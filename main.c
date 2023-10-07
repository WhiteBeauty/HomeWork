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





























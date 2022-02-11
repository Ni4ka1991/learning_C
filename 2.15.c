#include <stdio.h>

int main() {
double d = 5.2, x, y1;
int i = 3, y2;

y2 = d / i;
printf("\033cПеременная y2 - int; y2 = d/i = 5.2/3 = 1,73[3] =  %f\n", y2);
printf("Переменная y2 - int; y2 = d/i = 5.2/3 = 1,73[3] = %d\n", y2);

y1 = d / i;
printf("\nПеременная y1 - double; y1 = d/i = 5.2/3 = 1,73[3] =  %f\n", y1);
printf("Переменная y1 - double; y1 = d/i = 5.2/3 = 1,73[3] = %d\n", y1);

/*y2(double) = d / i;
printf("\nПеременная y2(double) = d/i = 5.2/3 = 1,73[3] =  %f\n", y2);
printf("Переменная y2(double) = d/i = 5.2/3 = 1,73[3] = %d\n", y2);

x = (y2 = d / i) * 2;
printf("Переменная х = (y = d/i)*2; = %f\n", x);
printf("Переменная y = %d\n", y2);

printf("\nНЕбольшие изменения в отражении результата: d <-> f\n");
printf("Переменная х = (y = d/i)*2; = %d\n", x);
printf("Переменная y = %f\n", y2);*/



}

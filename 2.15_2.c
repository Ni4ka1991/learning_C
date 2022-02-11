#include <stdio.h>

int main() {
double d = 5.2, x, z;//%f
long l, lng = 5.2;//%f
float f;//%f
int i = 3, y;//%d, %hd, %ld

y = d / i;
z = d / i;
//l = d / i;
l = lng / i;
f = d / i;
printf("\033cПеременная y = d/i = 5,2/3 = %d\n", y);
printf("Переменная z = d/i = 5,2/3 = %f\n", z);
printf("Переменная l = d/i = 5,2/3 = %f\n", l);
printf("Переменная f = d/i = 5,2/3 = %f\n", f);

x = (y = d / i) * 2;
printf("\nПеременная x = (y=d/i)*2 = (5,2/3)*2 = (1)*2 = %f\n", x);

x = (z = d / i) * 2;
printf("\nПеременная x = (z=d/i)*2 = (5,2/3)*2 = (1,7333[3])*2 = %f\n", x);

l = (z = d / i) * 2;
printf("\nПеременная l = (z=d/i)*2 = (5,2/3)*2 = (1,7333[3])*2 = %f\n", l);

f = (z = d / i) * 2;
printf("\nПеременная f = (z=d/i)*2 = (5,2/3)*2 = (1,7333[3])*2 = %f\n", f);

y = (x = d / i) * 2;
printf("\nПеременная y = (x=d/i)*2 = (5,2/3)*2 = (1,7333[3])*2 = %d\n", y);//3

y = d * (x = 2.5 / d);
printf("\nПеременная y = d * (x = 2.5 / d) = %d\n", y);

x = d * (y = ((int)2.9 + 1.1) / d);
printf("\nПеременная x = d * (y = ((int)2.9 + 1.1) / d) = %f\n", x);//0

}

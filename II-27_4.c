#include <stdio.h>

int main() {
float x = 1.0, y = 1.0;
int a;
	a = y >= 0 && (x*x + y*y) >= 1 &&  (x*x + y*y) <= 4;
printf("\033cТочка A с координатами x = %f см и y = %f см\n", x, y);
printf("0 - Не принадлежит, 1 - Принадлежит Области из задачки\nA = %d\n", a);
	}

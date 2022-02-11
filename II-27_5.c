#include <stdio.h>

int main() {
float x = - 0.6, y = - 0.3;
int a;
	a = x*x + y*y <= 1 && x <= 2*y;
printf("\033cТочка A с координатами x = %f см и y = %f см\n", x, y);
printf("0 - Не принадлежит, 1 - Принадлежит Области из задачки\nA = %d\n", a);
	}

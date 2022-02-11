#include <stdio.h>

int main() {
float x = 0.6, y = 0.3, z, w, k;
int a, b, c, c1, c3, c5;
	z = x*x + y*y;
	w = x/2 + 1;
	k = -x/2 - 1;
	b = ((x*x + y*y <= 1) && x > 0);
	c = ((y <= (x/2 + 1)) && (y >= (- x/2 - 1))) && (x < 0);
	c1 = y <= (x/2 + 1);
	c3 = y >= (- x/2 - 1);
	c5 = x < 0;
 	a = ((x*x + y*y <= 1) && x > 0) || ((y <= (x/2 + 1)) && (y >= (- x/2 - 1))) && (x < 0);
printf("\033cТочка A с координатами x = %f см и y = %f см\n", x, y);
printf("Этапы вычисления:\n");
printf("\nx*x + y*y = %f\n", z);
printf("x/2 + 1 = %f\n", w);
printf("- x/2 - 1 = %f\n", k);  	
printf("\n((x*x + y*y <= 1) && x > 0) = %d\n", b);
printf("\ny <= (x/2 + 1) = %d\n", c1);
printf("y >= (- x/2 - 1) = %d\n", c3);
printf("x < 0 = %d\n", c5);
printf("((y <= (x/2 + 1)) && (y >= (- x/2 - 1))) && (x < 0) = %d\n", c);
printf("((x*x + y*y <= 1 && x > 0) || ((y <= (x/2 + 1) ) && (y >= (- x/2 - 1))) && (x < 0)) = %d\n", a);
printf("0 - Не принадлежит, 1 - Принадлежит Области из задачки\nA = %d\n", a);
	}

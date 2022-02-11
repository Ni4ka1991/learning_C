#include <stdio.h>

int main() {
int x = 0.5, y = 0.7, a;
 	a = x*x + y*y < 1 || x*x + y*y == 1;
 	printf("Точка а с координатами %d см и %d см\n", x, y); 
	printf("0 - Не принадлежит, 1 - Принадлежит\n Окружности с радиусом 1 см\n%d\n", a);
	}

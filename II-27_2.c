#include <stdio.h>

int main() {
int x = 4, y = 1, a;
 	a = (x*x + y*y < 4 || x*x + y*y == 4) && (x*x + y*y > 1 || x*x + y*y == 1);
 	printf("Точка а с координатами %d см и %d см\n", x, y); 
	printf("0 - Не принадлежит, 1 - Принадлежит\nОбласти из задачки\n%d\n", a);
	}

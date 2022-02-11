#include <stdio.h>

#define CLS printf("\033c\n")
#define EPS 0.00001

int main () {
	int i;
	double qr, n = 1, k, x, y, lmt = 100;
	CLS;
	printf ("Введите, пожалуйста, число, \nквадратный корень ИЗ которого Вы хотите узнать (меньше числа %lg)\n", lmt*lmt);	
	scanf("%lg", &qr);
 	if (qr > lmt*lmt) {
 		printf("Введите число меньше %lg\n", lmt*lmt);
 		}
 		else {
		 	for (i = 0; i < lmt; i++) {
				k = n;	
				n++;		
				k *= k;
				if (qr == k) {
					printf("Квадратный корень из числа %lg = %lg\n", qr, (n - 1));
					break;		
					}
					else {
						if (qr < k)	{
							x = (n - 1);			
							do {
								y = x*x - qr;
								x = (2*x*x - y)/(2*x);
								} while (y > EPS); 
								printf("Квадратный корень из числа %lg \033[33;1m = %15.15lf\033[0m\n", qr, x);								
								printf("%15.15lf ^ 2 = %30.30lf\n", x, x*x);			
							break;
							}			
						}
					}
			}
}

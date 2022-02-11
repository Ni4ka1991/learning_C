#include <stdio.h>

#define CLS printf("\033c\n")
#define EPS 0.00001


double my_sqrt(double sqr,double x/*proxy*/,double precision)
{
	double y; 
	do {
		 y = x*x - sqr;
		 x = (2*x*x - y)/(2*x);
	} while (y > precision);	
	return x; 
}

int main () {	
	double qr, k = 0, x;
	CLS;
	printf ("Введите, пожалуйста, число, \nквадратный корень ИЗ которого Вы хотите узнать ");	
	scanf("%lg", &qr);
//Ищем ближайший сверху целый "квадрат"   	
  for (x = 1; k < qr; x++) 
      	k = x*x;
//Типа нашли...
	if (k > qr)
		x = my_sqrt(qr,x,EPS);
	
	printf("Квадратный корень из числа %lf \033[33;1m = %15.15lf\033[0m\n",	 qr, x);								
	printf("%15.15lf ^ 2 = %30.30lf\n", x, x*x);	
			
}

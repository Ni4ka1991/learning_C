#include <stdio.h>

#define CLS printf("\033c\n")

#define CHECKUP(a) (a*a*a*a*a - 573.0)
#define CHECKUP_D(a) (5.0*a*a*a*a) //значение Производной функции в Левой крайней точке а



void LionInDesert (double a, double b) {

register double CheckUpA, x; //слово register  означает,  что переменная  является ЧАСТО ИСПОЛЬЗУЕМОЙ, и компилятор должен попытаться разместить ее на регистре процессора, а не в стеке	
char *Ur = "x^3 - 573";

if ((CHECKUP(a) * CHECKUP(b)) < 0) {
	
	CheckUpA	= CHECKUP_D(a);
	
	if ((CheckUpA * CHECKUP_D(b)) > 0) {	
		do {
			x = (a + b)/2.0;			 
			if ((CheckUpA * CHECKUP(x)) < 0) a = x;
				else b = x;
				
		} while ((b - a) > 0.000001);
		printf("x = %15.15lf\n\n",  x);
		return;
	}
}
 
printf("Уравнение: f(x) = %s; не имеет корней в интервале [%.0f, %.0f]\n\n", Ur, a, b);	

}


void main () {
CLS;
double lf, rt;
printf("Введите, пожалуйста, Левую крайнюю точку а\n");
scanf("%lg", &lf);
printf("Введите, пожалуйста, Правую крайнюю точку b\n");
scanf("%lg", &rt);
LionInDesert (lf, rt);
}

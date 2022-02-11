#include <stdio.h>

#define CLS printf("\033c\n")

#define CHECKUP_A (a*a*a - 573.0) //значение функции в Левой крайней точке а
#define CHECKUP_B (b*b*b - 573.0) //значение функции в Правой крайней точке b
#define CHECKUP_X (x*x*x - 573.0) //значение функции в Средней точке x

#define CHECKUP_A_D (3.0*a*a) //значение Производной функции в Левой крайней точке а
#define CHECKUP_B_D (3.0*b*b) //значение Производной функции в Правой крайней точке b


double LionInDesert (double a, double b) {

double CheckUpA, CheckUpB, CheckUpX, x;	
int A, B;
char *Ur = "x^3 - 573";
A = a;
B = b;
CheckUpA = CHECKUP_A;
CheckUpB = CHECKUP_B;

if ((CheckUpA * CheckUpB) < 0) {
	CheckUpA = CHECKUP_A_D;
	CheckUpB = CHECKUP_B_D;
	
	if ((CheckUpA * CheckUpB) > 0) {
	
		do {
			x = (a + b)/2.0;
			CheckUpX = CHECKUP_X;
			if (CheckUpA * CheckUpX < 0) a = x;
				else b = x;
				
		} while ((b - a) > 0.000001);
		printf("x = %15.15lf\n\n",  x);
	}
}

else printf("Уравнение: f(x) = %s; не имеет корней в интервале [%d, %d]\n\n", Ur, A, B);	

}


int main () {
CLS;
LionInDesert (-5, 5);	
}

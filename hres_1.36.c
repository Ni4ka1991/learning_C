#include <stdio.h>

#define CLS printf("\033c\n")

/* y = x*x*x - 573; - функция
y' = 2*x*x; - производная */

double LionInDesert (double a, double b) {

double CheckUpA, CheckUpB, CheckUpX, x;	

CheckUpA = a*a*a - 573;
CheckUpB = b*b*b - 573;

if ((CheckUpA * CheckUpB) < 0) {
	CheckUpA = 2*a*a;
	CheckUpB = 2*b*b;
	if ((CheckUpA * CheckUpB) > 0) {
	
		do {
			x = (a + b)/2;
			CheckUpX = x*x*x - 573;
			if (CheckUpA * CheckUpX < 0) {
				a = x;
			}
				else {
					b = x;			
					}
		} while ((b - a) > 0.0001);
		printf("Ану-ка посмотрим, что получится... x = %10.10lf\n",  x);
	}

}
else printf("У этого уравнения нет корней на данном интервале");	

}


int main () {
CLS;
LionInDesert (-15, 15);	
}

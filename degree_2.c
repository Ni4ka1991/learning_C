#include <stdio.h>

#define CLS printf("\033c\n")

int main () {
	CLS;
	unsigned long long int t, dg, x = 1, i;        
	printf("Введите число, которое надо возводить в сепень:");
	scanf("%llu", &t);
	printf("Введите Максимальное число, до которого Вы хотите возвести в степень:");
	scanf("%llu", &dg);
	printf("Печать степеней %llu-ки до %llu^%llu\n%llu ^ 0 = %llu\n",t, t, dg, t, x);
	for (i = 1; i < dg + 1; i++) {   
		x = x * t;
		printf("%llu ^ %llu = %llu\n",t, i, x);
		}
}

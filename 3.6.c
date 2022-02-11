#include <stdio.h>
#include <limits.h>
#define CLS printf("\033c\n")


int main() {
			int i = 1, sum = 0; 
    CLS;
    //for ( ; i <= 100; i++) sum += i; 
			//for ( i = 1; i <= 100;) sum += i++;
			//for ( i = 1, sum = 0; i <= 100; sum += i,  i++);
			//for ( i = 1, sum = 0; i <= 100; sum += i++);
			//for ( i = 0, sum = 0; i++, i <= 100; sum += i);
			while(i<= 100) {
				sum += i;
				i++;
				}
    printf("Сумма первых 100 натуральных чисел %d\n\n", sum);
}

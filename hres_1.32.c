#include <stdio.h>

#define CLS printf("\033c\n")

int DGR (unsigned long long int t, unsigned long long int dg) {
unsigned long long int x = 1, i;
        printf("\nПечать степеней %llu\n%llu ^ 0 = %llu\n",t, t, x);
        for (i = 1; i < dg + 1; i++) {   
	        x = x * t;
	        printf("%llu ^ %llu = %llu\n",t, i, x);/*printf unsigned long long int %lld and %llu works with windows
	                Сказка: printf("2^ (%d <=> %llu) = %llu\n", i, x) - если печатать за этим компом %d в для i, получается чертовщина, надо обе  %llu за Павликовым ноутом все работало с %d*/
				}
}

int main () {
        CLS;
        DGR (2, 13);
        DGR (3, 10);
        DGR (5, 15);
}

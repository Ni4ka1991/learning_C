#include <stdio.h>

#define CLS printf("\033c\n")

int DGR (unsigned long long int t, unsigned long long int dg) {
unsigned long long int x = 1, i;
        printf("\nПечать степеней %llu\n%llu ^ 0 = %llu\n",t, t, x);
        for (i = 1; i < dg + 1; i++) {   
	        x = x * t;
	        printf("%llu ^ %llu = %llu\n",t, i, x);
				}
}

int main () {
        CLS;
        DGR (2, 13);
        DGR (3, 10);
        DGR (7, 7);
        DGR (8, 10);
}

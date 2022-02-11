#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")


int main () {
	int a, b;	
	CLS;
	for (a = 1, b = 0; a < 50; b += a, a++) {
		if (b%2) continue;		
			printf("b = %d\n", b);		
	}
	return 0;
}

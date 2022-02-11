#include <stdio.h>

#define CLS printf("\033c\n")

int main () {
	int x = 2, i;	
	CLS;
	
	for (i = 0; i < 1000; i++) {
		x++;
		if (x%2 != 0) {
			if ((x%3 && x%5 && x%7) != 0){
				printf("%d\n", x);		
				}
		}		        
	}

}

#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN putchar('\n')

int main () {
	CLS;
	char lttr;
	while ((lttr = getchar()) != EOF) {
		if (lttr == 'b') {
			printf("break\n");			
			}		
			else {
				putchar('*');				
				}		
		}
	
	
	
	NLN;
	

}	

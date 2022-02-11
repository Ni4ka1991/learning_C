#include <stdio.h>
#define CLS printf("\033c\n")

int main()   {
		CLS;
		char st = '*', cub = 'o';
		int i, l, catet = 5;
		
		for(l = 1; l < catet; l++) {
			
			for (i = 0; i < l; i++) {
				putchar(st);
				}
				
		putchar('\n');
			}
}	
		

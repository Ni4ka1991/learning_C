#include <stdio.h>
#include <stdlib.h>
#define CLS printf("\033c\n")

int main()   {
		CLS;
		char a;
		int i, year;
		for(i = 0; i < 4; i++ ) {
			a = getchar();
			if (a >= '0' && a <= '9') {
				year = 	(int)	a;
				if(year%4 == 0) {
					printf("Год Високосный\n");}
					
					else {
						printf("Год Не високосный\n");
						}	
				}		//putchar(a);
				
				else {
					//putchar('\n');			
					printf("\nПеременная %c - НЕ входит в диапазон ASCII 47 - 58\n", a);	
					break;
				}
			}
		putchar('\n');
}	
		

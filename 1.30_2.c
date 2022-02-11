#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN putchar('\n')

int main () {
	CLS;
	char lttr;
	while ((lttr = getchar()) != EOF) {
		switch (lttr) {
			case 'a' : 	printf("auto\n");
									break;
			case 'b' : 	printf("break\n");
									break;
			case 'c' : 	printf("case\n");
									break;
			case '\n' :putchar('\b');
									break;						
			default  : printf("Нет такого слова в моем словаре.\n");
									break;
		
		
		}
		
		
		
		}
	
	
	
	NLN;
	

}	

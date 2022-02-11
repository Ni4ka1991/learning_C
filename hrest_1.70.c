#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n")

int main (int ac, char **av) {
	int c;
	while((c = getchar() != EOF))	
		switch(c) {
		case 'ы': printf("Буква ы\n"); break;			
		case 'й': printf("Буква й\n"); break;
		default: printf("Буква с кодом %d\n", c); break;	
		}	
	return 0;
	
	}

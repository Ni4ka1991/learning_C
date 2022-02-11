#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN putchar('\n')

int main () {
	CLS;
  int c;  
  while ((c = getchar()) != EOF ) putchar(c);
	NLN;
	

}	

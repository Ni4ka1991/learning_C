#include <stdio.h>
#define CLS printf("\033c\n")

int main()   {
   CLS;
		int a, b, c;
		a = getchar();		
		//printf("%c\n", a);
		putchar(a);
		b = getchar();
		putchar(b);
		c = getchar();
		putchar(c);
		printf("\n");
		//putchar('\n');
}

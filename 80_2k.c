#include <stdio.h>
#define CLS printf("\033c\n")

int main()   {
   CLS;
		char year, i;
		printf("Введите год и нажмите <Enter>\n");
   year = getchar();
   for (i = 48; i <= 57; i++ )
   putchar(i);
}

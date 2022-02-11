#include <stdio.h>
#define CLS printf("\033c\n")

int main()   {
   CLS;
		unsigned int year;
		printf("Введите год и нажмите <Enter>\n");
   if (scanf("%u",&year)!=1) {
			printf("Ошибка ввода\n");
			
			getchar();
			return 0;			
			}
		printf("Вы ввели %i год\n", year);
		/*else
		 				printf("Вы ввели %i год\n", year);
						if (year%4 == 0) {
   				printf("%d - Високосный год\n", year);
   				}
   					else 
   					printf("%d - Не Високосный год\n", year);*/
}

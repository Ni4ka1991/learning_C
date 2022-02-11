#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN putchar('\n')

int main () {
	CLS;
	char hint;
	int a = 1, b = 200, x, i; //1 и 10
	printf("Загадайте число от %d до %d.\n", a, b); 
	
	for (i = 0; i < 12; i++) {// достаточно 8, но для перестраховки поставила 12, если напечатают не тот знак > <, лень писать проверку поумней
	x = (a + b) >> 1;	
	printf ("Это число >, < или =  %d ?  ", x);
	printf ("Введите соответствующий символ\n");
  hint = getchar();
	getchar();
	if (hint == '=') {
		printf("Вы загадила число %d\n", x);
		printf("Быстро мы управились?\n");
		break;}
		else {	
	switch (hint) {
		case '>' :   
			a = x;
			break;
		case '<' :
			b  = x;
			break;
		/*case '=' : 	
			printf("Вы загадила число %d\n", x);
			printf("Быстро мы управились?\n");
			break;*/
		case '\n' :
			putchar('\b');
			break;						
		default  : 
			printf("Напишите знак > < или = \n");
			break;
		}
		}
	 /*printf("a = %d\n", a);
	 printf("b = %d\n", b);*/	  
		}

NLN;
	

}	

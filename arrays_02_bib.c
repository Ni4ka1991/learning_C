#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")
#define MAX_ELEM 4

char *names[] = {"Mirano", "Ipalma", "Rawlik", "VinoPhil"};

void main() {
	int i, flajok = 0;
	char User_String[255];
	CLS;
	do {	
		scanf("%255s", User_String);		
		for (i = 0; i < MAX_ELEM; i++) {
			if (strcmp (names[i], User_String) == 0) {
				flajok = 1;
				printf("Строка %s есть в таблице и находится в позиции %d\n", User_String, (i + 1));
				break;
			} else flajok = 0;
		}
		
		if (flajok == 0) {
			printf("Строки %s нет в таблице\n", User_String);
		}
	} while(1);
}

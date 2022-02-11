#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")
#define MAX_ELEM 4

char *names[] = {"Батат", "Брынза", "Вафли", "Вино"};
char *names_en[] = {"Yam", "Bulgarian Feta Cheese", "Waffle baskets", "Muscat wine"};

int str_qr (char *str1, char *str2) {	
	while(*str1 != '\0' || *str2 != '\0') {
		if (*str1 == *str2) {						
			str1++; str2++;			
		}	
		else	return 0;
	}
	return 1;	
}

void main() {
	int i, j, flajok = 0;
	char User_String[255];
	char c;
	CLS;
	
	
		
		
	do {		
		scanf("%255s", User_String);	//255 - наибольшая ширина поля, которая подлежит считыванию. 	
		for (i = 0; i < MAX_ELEM; i++) {
			if (1 == str_qr (User_String, names[i])) {
				flajok = 1;
				printf("%s\n", names_en[i]);
				break;
			} else flajok = 0;
		}
		
		if (flajok == 0) {
			printf("Строки %s нет в таблице\n", User_String);
		}
		} while(1);
}

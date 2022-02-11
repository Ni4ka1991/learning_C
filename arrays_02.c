#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")
#define MAX_ELEM 4

char *names[] = {"Mirano", "Ipalma", "Rawlik", "VinoPhil"};

int str_qr (char *str1, char *str2) {
	int flag = 0;	
	while(*str1 != '\0' || *str2 != '\0') {
		if (*str1 == *str2) {
			flag = 1;			
			str1++; str2++;			
		}	else {
				flag = 0; break;
			}	
	}
	return flag;	
}

void main() {
	int i, flajok = 0;
	char User_Strind[255];
	CLS;
	do {	
	scanf("%s", User_Strind);		
	for (i = 0; i < MAX_ELEM; i++) {
		if (1 == str_qr (User_Strind, names[i])) {
			flajok = 1;
			printf("Строка %s есть в таблице и находится в позиции %d\n", User_Strind, i+1);
			break;
		} else flajok = 0;
	}
	
	if (flajok == 0) {
		printf("Строки %s нет в таблице\n", User_Strind);
	}
	} while(! ctrld);
}

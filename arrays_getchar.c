#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")
#define MAX_ELEM 4

unsigned char *names[] = {"Batat", "Батат", "Вафли", "Вино"};
unsigned char *names_en[] = {"Yam", "Yam", "Waffle baskets", "Muscat wine"};

int str_qr (unsigned char *str1, unsigned char *str2) {	
	while(*str1 != '\0' || *str2 != '\0') {
		if (*str1 == *str2) {						
			str1++; str2++;			
		}	
		else	return 0;
	}
	return 1;	
}

void main() {
	int i, k, j, flajok = 0;
	unsigned char User_String[255];
	int c;
	CLS;
	
	for (k = 0; c != EOF && c != ' ' && c != '\n'; k++) {		
		c = getchar();
		User_String[k] = (unsigned char)c;
		/*printf("User_String[%d] = %d\n", k, User_String[k]);//волшебство с русскими буквами*/
	}
	//printf("%d\n", k);
	User_String[k-1] = 0;
		
		
				
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
		
}

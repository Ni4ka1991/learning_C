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
	int i;
	char allStrinds[MAX_ELEM][255];
	
	CLS;	
	for(i = 0; i < MAX_ELEM; i++) {
	scanf("%s", allStrinds[i]);
	if (1 == str_qr (allStrinds[i], names[i])) {
		printf("Строка %d совпала\n", i);
		} else
			printf("Строкa %d разные\n", i);
	
	}
	
	
}

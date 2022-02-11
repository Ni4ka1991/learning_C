#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")
#define ARR_LEN 4

char *names[] = {"Mirano", "Ipalma", "Rawlik", "VinoPhil"};

/*int str_len (char *str1, char *str2) {
	int i = 0, k = 0;
	int flag_len = 0;
	
	while (*str1 != '\0') {
		i++;
		str1++;
	}
	while (*str2 != '\0') {
		k++;
		str2++;
	}
	if (k == i) flag_len = 1;
}

int srt_edent (char *str1, char *str2) {
	int flag_lit = 0;
	while(*str1 != '\0') {
		if (*str1 == *str2) {
			str1++;
			str2++;
			flag_lit = 1;
		} 	else {
			flag_lit = 0;
			break;
			}
	}
printf("Увы, но строки разные", flag_lit);
}*/


void main () {
char c, b;
	char s[255];
	int i, k, len, j = 0;
	char flag = 1;
		
	for (i = 0; c != '\n'; i++) {
		c = getchar();
		s[i] = c;
		printf("i = %d => =>  ",i);
		printf("s[%d] = %c\n", i, s[i]);		
		
	}
	len = i-1;
	
	for (i = 0; i < len; i++){
		if(s[i] != names[j][i]) {
			printf("Строка %d не совпадает\n", (j + 1));
			flag = 0;
			break;
		}					
	}
	if (flag != 0) printf("Строка %d совпала\n", (j + 1));
	
	
	NLN;
}
 

#include <stdio.h>
#include <string.h>

#define CLS printf("\033c\n")
#define NLN printf("\n\n")
#define ARR_LEN 4

char *names[] = {"Mirano", "Ipalma", "Rawlik", "VinoPhil"};

int str_len (char *str1, char *str2) {
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
	return flag_len;
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
   printf(flag_lit = 0 ? "Увы, но строки разные" : "Ваши строки совпали");
}


void main () {
	CLS;
	char *sl1 = "Abbreviatura",*sl2 = "Abbreviaturo";
		
	if (1 == str_len (sl1,sl2 ) ) {	
		srt_edent (sl1, sl2);
	}
	NLN;
}

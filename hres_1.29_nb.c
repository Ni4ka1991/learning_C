#include <stdio.h>

#define CLS printf("\033c\n")


int main () {
	CLS;
	int c;
	while((c = getchar()) != EOF) {
		putchar(~c);
	}
}

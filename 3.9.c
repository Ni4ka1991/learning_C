#include <stdio.h>

#define CLS printf("\033c\n")


int main() {
			int i = 0, c = getchar();
    CLS;
    while (c != ' ' && c != '\n' && c !='\t' && c != EOF)
    { i++; c = getchar(); }
				printf("%d\n", i);
    }

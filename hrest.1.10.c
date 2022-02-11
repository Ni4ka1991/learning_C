#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN putchar('\n')

int prt_n_chars (char sym, int quantity) {
                        int i;
                        for (i = 0; i < quantity; i++) {
                                putchar(sym);
                                }
}

int main () {
                CLS;
                int x = 10, y = 1, k;

                for (k = 0; k <= 10; k++) {
                  prt_n_chars (' ', x);
                  prt_n_chars ('*', y);
                  x--;
                y += 2;
                NLN;
                }

     NLN;
}

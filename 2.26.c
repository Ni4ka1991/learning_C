#include <stdio.h>

int main() {
unsigned int baLl = 0x62614C6C;
printf ("\033cБеззнаковое 4-х байтное целое: переменная unsigned int baLl = %x\n",baLl);
unsigned char b = baLl >> 24;
printf ("\nРезультат распаковки %x - > символ b = %x (h) = %c(c)\n\n ",baLl, b,b);
unsigned char a = baLl >> 16;
printf ("\nРезультат распаковки %x - > символ a = %x (h) = %c(c)\n\n ",baLl, a, a);
unsigned char L = baLl >> 8;
printf ("\nРезультат распаковки %x - > символ L = %x (h) = %c(c)\n\n ",baLl, L, L);
unsigned char l = baLl;
printf ("\nРезультат распаковки %x - > символ l = %x (h) = %c(c)\n\n ",baLl, l, l);
}

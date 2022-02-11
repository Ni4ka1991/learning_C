#include <stdio.h>

int main() {
unsigned char a = 0x85, b = 0x14, c = 0x97, d = 0x63;
unsigned int RESULT=0;
RESULT = a << 24 | b << 16 | c << 8 | d;
printf("результат упаковки %x,%x,%x,%x - > %X\n ",a,b,c,d, RESULT);

}

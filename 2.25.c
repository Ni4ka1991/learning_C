#include <stdio.h>

int main() {
unsigned char S = 0x53, t = 0x74, a = 0x61, r = 0x72;
unsigned int Star = 0;
Star = S << 24 | t << 16 | a << 8 | r;
printf ("\nРезультат упаковки %c,%c,%c,%c - > %x\n\n ", S, t, a, r, Star);
}

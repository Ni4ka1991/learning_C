#include <stdio.h>
#include <limits.h>
#define CLS printf("\033c\n")


void pbf (const void* pointer,int len) {
 unsigned char b, i;
 const unsigned char *ch=pointer;
 
 int j;
 ch += (len-1);
 for (j=0; j<len; j++,ch--) {
        for(i=0; i<sizeof(char)<<3; i++) {
                    b = *ch & (1 << (7 - i));
                    putchar(b ? '1' : '0');
        }
putchar(' ');
 }
}


int main() {
    unsigned char a[] = {210,211,212,213,214};
    double my_number = 0.2258987;
    CLS;
    pbf (&my_number,sizeof(my_number));
    printf("\n\n");
}

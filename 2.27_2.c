#include <stdio.h>
#include <limits.h>

#define USE_TYPE int
#define BITS  (sizeof(USE_TYPE)<<3)
#define CLS printf("\033c")

int pbf_inv (int convert) {
	int i, b;
	for(i=0; i<BITS; i++) {
				b = convert & (1 << (BITS - 1));
				convert<<=1;
				b >>= (BITS - 1);
				/*if (b==0)
					symbol='0';
				else
					symbol='1';
				putchar(symbol);*/
				printf("%d", b);
		}	
	}


int main() {
		unsigned int  x = 34511614, y = 12335468, n = 13, p = 6, i, b, m = ~0, a;
		//char symbol;
		CLS;
		m <<= (BITS - p);
		m >>= n;
		m = ~m;
		x  &= m;	
		a = x;
						
				
   }	
   printf("\n\n");
}

#include <stdio.h>
#include <limits.h>

#define USE_TYPE int
#define BITS  (sizeof(USE_TYPE)<<3)
#define CLS printf("\033c")
typedef unsigned int uint;


int pbf_inv (uint convert) {
  uint i, b;
	for(i=0; i<BITS; i++, convert<<=1) {
				b = convert & (1 << (BITS - 1));				
				putchar(b ? '1' : '0');
		}	
  putchar ('\n');
	}


int main() {
		uint  x = 634511614, y = 812335468, n = 14, p = 6, i, b, m = ~0, a;
		CLS;
		printf("m = ");
		pbf_inv (m);		
		m <<= (BITS - p);
   printf("m = ");
		pbf_inv (m);		
		y = ~y;		
		y &= m;
		y >>= n;
		m >>= n;
		m =~m;
		printf("x = ");
		pbf_inv (x);		
		x &= m;
		printf("x = ");
		pbf_inv (x);
		x |= y;
		printf("y = ");
		pbf_inv (y);
   printf("x = ");		
		pbf_inv (x);		
}

#include <stdio.h>
#include <limits.h>

#define CLS printf("\033c")
			#define USE_TYPE int
			#define BITS  (sizeof(USE_TYPE)<<3)
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
		uint  x = 634511614, y = 615163144, n = 14, i;
		CLS;
		pbf_inv (x);
		for(i=1; i < n; i++, x >>=1) {		
pbf_inv (x);
}
pbf_inv (y);
		for(i=1; i < n; i++, y <<=1) {		
pbf_inv (y);
}
}

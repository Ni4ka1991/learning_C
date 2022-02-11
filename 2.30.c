#include <stdio.h>
#include <limits.h>

#define CLS printf("\033c")
#define BITS  (sizeof(long double)<<3)
//typedef unsigned int uint;

	int PDT (int size, char *name) {
	printf("%s = %d байт;  %d бит\n",name, size, size<<3);	
		}
			
			int pbf_inv (long double  convert) {
			 long double i, b;
				for(i=0; i<BITS; i++, convert<<=1) {
							b = convert & (1 << (BITS - 1));				
							putchar(b ? '1' : '0');
					}	
			  putchar ('\n');
				}

int main() {
		
		CLS;
		PDT (sizeof(char),  "       char");
		PDT (sizeof(short), "      short");
		PDT (sizeof(int),   "        int");
		PDT (sizeof(long),  "       long");
		PDT (sizeof(float),  "      float");
		PDT (sizeof(double),"     double");
		PDT (sizeof(long long),"  long long");
		PDT (sizeof(long double), "long double");
printf("\nCHAR_BIT = %d\n", CHAR_BIT);
printf("\nНаименование     | Десятичное          | Шестнадцатеричное   | Двоичное \n");
printf("\n константы       | представление       |  представление      | представление\n");
printf("\nSCHAR_MIN        |   %d              | %X            | ", SCHAR_MIN, SCHAR_MIN); pbf_inv (SCHAR_MIN);
printf("\nSCHAR_MAX        |   %d               | %X                  | ", SCHAR_MAX, SCHAR_MAX); pbf_inv (SCHAR_MAX);
printf("\nCHAR_MIN         |   %d              | %X            | ", CHAR_MIN, CHAR_MIN); pbf_inv (CHAR_MIN);
printf("\nCHAR_MAX         |   %d               | %X                  | ", CHAR_MAX, CHAR_MAX); pbf_inv (CHAR_MAX);
printf("\nUCHAR_MAX        |   %u               | %X                  | ", UCHAR_MAX, UCHAR_MAX); pbf_inv (UCHAR_MAX);
printf("\nSHRT_MIN         |   %d            | %X            | ", SHRT_MIN, SHRT_MIN); pbf_inv (SHRT_MIN);
printf("\nSHRT_MAX         |   %d             | %X                | ", SHRT_MAX, SHRT_MAX); pbf_inv (SHRT_MAX);
printf("\nUSHRT_MAX        |   %u             | %X                | ", USHRT_MAX, USHRT_MAX); pbf_inv (USHRT_MAX);
printf("\nINT_MIN          |   %d       | %X            | ", INT_MIN, INT_MIN); pbf_inv (INT_MIN);
printf("\nINT_MAX          |   %d        | %X            | ", INT_MAX, INT_MAX); pbf_inv (INT_MAX);
printf("\nUINT_MAX         |   %u        | %X            | ", UINT_MAX, UINT_MAX); pbf_inv (UINT_MAX);
printf("\nLONG_MIN         |   %d       | %X            | ", LONG_MIN, LONG_MIN); pbf_inv (LONG_MIN);
printf("\nLONG_MAX         |   %d        | %X            | ", LONG_MAX, LONG_MAX); pbf_inv (LONG_MAX);
printf("\nULONG_MAX        |   %u        | %X            | ", ULONG_MAX, ULONG_MAX); pbf_inv (ULONG_MAX);
printf("\nMB_LEN_MAX = %d байт\n", MB_LEN_MAX);
}

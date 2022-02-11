#include <stdio.h>
#include <limits.h>

void main() {
printf("\033c");
printf("\nCHAR_BIT=%d", CHAR_BIT);
printf("\nSCHAR_MIN=%d\t\tSCHAR_MAX=%d", SCHAR_MIN, SCHAR_MAX);
printf("\nUCHAR_MAX=%d", UCHAR_MAX);
printf("\nINT_MIN=%d\t\tINT_MAX=%d", INT_MIN, INT_MAX);
printf("\nLONG_MIN=%d\t\tLONG_MAX=%d", LONG_MIN, LONG_MAX);
printf("\n\n");
}

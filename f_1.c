#include <stdio.h>
#define PRINTD(x) printf(" x = %d\n", x)
#define PRINTS(x) printf(" x = %s\n", x)
#define PRINTC(x) printf(" x = %c\n", x)
#define PRINTO(x) printf(" x = %o\n", x)
#define CLS printf("\033c\n")

int integer = 5;
char character = '5';
char *string = "5";

main()
{
   CLS;
   PRINTD(string);
   PRINTD(character);
   PRINTD(integer);
   PRINTS(string);
   PRINTC(character);
   PRINTC(integer = 53);
   PRINTD(( '5' > 5 ));

      int sx = -8;
      unsigned ux = -8;

      PRINTO(sx);
      PRINTO(ux);
      PRINTO( sx>>3 );
      PRINTO( ux>>3 );
      PRINTD( sx>>3 );
      PRINTD( ux>>3 );
   }

#include <stdio.h>

#define CLS printf("\033c\n")
#define NLN putchar('\n')

    extern double sqrt();   /* квадратный корень */
    double x   = 1.17;
    double s12 = sqrt(12.0);            /* #1  ошибка так как не константа и не в теле функции*/
    double y   = x * 2.0;               /* #2 ошибка так как не константа и не в теле функции*/
    FILE  *fp  = fopen("out.out", "w"); /* #3 ошибка так как не константа и не в теле функции*/
    
    main(){
      double ss = sqrt(25.0) + x;       /* #4 */
      }

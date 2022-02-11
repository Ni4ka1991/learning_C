#include <stdio.h>
#include <math.h>
#define eps 0.0001
    
double  sqrt (x) double x; {
double  sq, sqold, EPS;

        if (x < 0.0)
            return -1.0;
        if (x == 0.0)
            return 0.0;  /* может привести к делению на 0 */
        EPS = x * eps;
        sq = x;
        sqold = x + 30.0;         /* != sq */
        while (fabs (sq * sq - x) >= EPS) {
        /*     fabs( sq - sqold )>= EPS    */
            sqold = sq;
            sq = 0.5 * (sq + x / sq);
        }
        return sq;
    }

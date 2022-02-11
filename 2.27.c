#include <stdio.h>

int main() {
unsigned char numb = 200, y = 186, l,k,h,f,e,d,c,b,a;
unsigned char m = 2, n = m;
printf("\033cЦелочисленная переменная numb = %d (d) = %X (h)\n\n", numb, numb);
a = numb%2;
b = (numb/m)%2;// 200/2%2;
printf("\n b = %d = (%d/%d)%2\n", b, numb, m);
printf("\n m = %d \n", m);
m *= m;
printf("\n m *=m => %d *= %d\n", m, m);
printf("\n m = %d \n", m);
printf("\n n = %d \n", n);
c = (numb/m)%2;
printf("\n c = %d = (%d/%d)%2\n", c, numb, m);
/*d = (numb/(m * n))%2;
m *= m;
e = (numb/m)%2;
f = (numb/(m * n))%2;
m *= m;
h = (numb/m)%2;
k = (numb/(m * n))%2;
printf("\n numb = %d (d) = %d%d%d%d%d%d%d%d (b)\n", numb, k,h,f,e,d,c,b,a);*/


}

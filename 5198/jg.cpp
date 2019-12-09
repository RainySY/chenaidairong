#include <stdio.h>
main()
{int x=123;char c1,c2,c3;
c1=x%10;
c2=x/10%10;
c3=x/100;
printf("%d%d,%d\n",c3,c2,c1);
}
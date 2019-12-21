#include <stdio.h>
int main()
{ int n,t;
 float a=2,b=1,s=0;
 for(n=1;n<=10;n++)
 { s=s+a/b;
 t=a;
 a=a+b;
 b=t;
 }
 printf("%f\n",s);
}

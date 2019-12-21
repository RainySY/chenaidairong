#include <stdio.h>
#define N 12
int main()
{  int i,a[N],av;//av=0
 for(i=0;i<N;i++) scanf("%d",a[i]);//&a[i]
 for(i=0;i<N;i++)
 {  printf("%d",a[i]);
if(i%3==0) printf("\n");// if((i+1)%3= =0) printf("\n")
 }
for(i=0;i!=N;i++) av+=a[i];//av/=N;
 printf("av=%f\n",av); //printf("av=%d",av)
}
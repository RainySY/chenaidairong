 #include <stdio.h>
int main()
{  double e=1.0,x=1.0,y,delta;
int i=1;
printf("��������������:");
scanf("%lf",&delta);
y=1/x;
while(y>=delta)
{ e=e+y;	
i++;
x=x*i;
y=1/x;
}
printf("�������ǣ�%12.10lf\n",e);
}
 #include <stdio.h>
int main()
{  double e=1.0,x=1.0,y,delta;
int i=1;
printf("请输入给定的误差:");
scanf("%lf",&delta);
y=1/x;
while(y>=delta)
{ e=e+y;	
i++;
x=x*i;
y=1/x;
}
printf("计算结果是：%12.10lf\n",e);
}
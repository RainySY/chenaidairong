#include <stdio.h> //#include <conio.h>
int main()
{
int password,op,number=0,count=1000,n=0;
printf("please input password:");
scanf("%d",&password);
while(password!=1234)/*��������������Ļ���*/
{n++;
 if(n==3)
{printf("you have input 3,can not input again!\n");
 int cdecl getch(void);
return;
}
printf("password error!please input again:");
scanf("%d",&password);
}
loop:
printf("\nwelcome! Please choice one operate:(1,2,3)\n");
printf("1:count\n2:get money\n3:return\n");
scanf("%d",&op);      /*����һ�ֲ���*/
switch(op)
{
case 1:printf("\nyour count is %d.\n",count);goto loop;
/*�ʻ���ѯ*/
case 2:printf("\n please input count that you want to get:");
       scanf("%d",&number);          
      if(number>count||number<0)printf("\nerror");
      else {printf("\nnow ,you can take money!");count-=number;}
      goto loop;       
/*ȡ��*/
case 3:break;
/*����*/
default:printf("\n operate error!");goto loop;
}
}
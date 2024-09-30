#include<stdio.h>
int main()
{
float a,b,result;
char c;
printf("enter first number and second number:");
scanf("%f%f",&a,&b);
printf("enter the operator:");
scanf(" %c",&c);
switch(c)
{
case '+':result=a+b;
printf("%.2f+%.2f=%.2f",a,b,result);
break;
case '-':result=a-b;
printf("%.2f-%.2f=%.2f",a,b,result);
break;
case '*':result=a*b;
printf("%.2f*%.2f=%.2f",a,b,result);
break;
case '/':
if (b!=0)
{
result=a/b;
printf("%.2f/%.2f=%.2f",a,b,result);
}
else
{printf("error");}
break;
default :printf("invalid operator");
}
return 0;
}

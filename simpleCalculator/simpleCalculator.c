#include <stdio.h>

int main()
{
int choice;float n1,n2,result;char sign;
printf("enter two numbers \n");
scanf("%f",&n1);
scanf("%f",&n2);
printf("\nEnter Operation 0123 +-*/ : \n");
scanf("%d",&choice);
switch(choice)
{
case 0:
sign='+';
result=n1+n2;
break;
case 1:
sign='-';
result=n1-n2;
break;
case 2:
sign='*';
result=n1*n2;
break;
case 3:
sign='/';
result=n1/n2;
break;
default:
result=0.0;
}
printf("\n%f %c %f = %f\n",n1,sign,n2,result);
return result;
}

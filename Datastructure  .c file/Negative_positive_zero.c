#include<stdio.h>
void main()
{
int a,n,i=0,count=0,negative=0,positive=0;
printf("enter no how many no u want to print");
scanf("%d",&a);
while(i<=a)
{
scanf("%d",&n);
if(n==0)
count++;
if(n<0)
negative++;
if(n>0)
positive++;
i++;
}
printf("\nno of zero entered=%d",count);
printf("\nno of positive value entered=%d",positive);
printf("\nno of negative value entered=%d",negative);
}

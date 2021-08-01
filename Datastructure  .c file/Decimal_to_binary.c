#include<stdio.h>
void main()
{
int n,x,i=0,a[20];
printf("enter a no to convert into binary");
scanf("%d",&n);
while(n!=0)
{
x=n%2;
n=n/2;
a[i]=x;
i++;
}
printf("binary=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
}

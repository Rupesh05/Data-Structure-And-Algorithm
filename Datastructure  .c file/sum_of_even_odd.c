#include<stdio.h>
void main()
{
 int j,k;
 int i,a[5],b[i],c[i],sume=0,sumo=0;
 printf("enter no in array");
 for(i=0;i<=4;i++)
{
 scanf("%d",&a[i]);}
 for(i=0;i<=4;i++){
 if(i%2==0){
k=i;
 b[i]=a[k];}
else if((i%2)!=0){
j=i;
 c[i]=a[j];}
sume=sume+b[i];
sumo=sumo+c[i];
}
printf("sum of even is %d\n",sume);
printf("sum of odd is %d",sumo);
}

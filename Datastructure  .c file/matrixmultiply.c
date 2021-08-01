#include<stdio.h>
void main(){
int i,j,a[2][2],b[2][2],c[2][2];
printf("enter 1st matrix");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&a[i][j]);
}}
printf("enter 2nd matrix");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
scanf("%d",&b[i][j]);
}}
printf("multiplication of matrix\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++){
if(i==1)
c[i][j]=((a[i][j]*b[i-1][j])+(a[i][j]*b[i][j]));
else
c[i][j]=((a[i][j]*b[i][j])+(a[i][j]*b[i+1][j]));

printf("%d\t",c[i][j]);}
printf("\n");}
}

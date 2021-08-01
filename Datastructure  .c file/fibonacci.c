#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    printf("%d,",a);
    for(int i=0;i<=n;i++){
        a=b;b=c;c=a+b;
        printf("%d,",c);
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
//push1 function
int push1(int a[],int n,int top1,int top2,int x){
    if(top1+1==top2){
        printf("Stack 1 Overflow\n");
    }
    else{
        top1++;
        a[top1]=x;
    }
    return top1;
}
//push2 function
int push2(int a[],int n,int top1,int top2,int x){
    if(top2-1==top1){
        printf("Stack 2 Overflow\n");
    }
    else{
        top2--;
        a[top2]=x;
        
    }
    return top2;
}
//pop1 function
int pop1(int a[],int top1){
    int x=-1;
    if(top1==-1){
        printf("Stack 1 is Empty");
    }
    else{
        x=a[top1--];
        //return x;
        return top1;  
    }
}
//pop2 function
int pop2(int a[],int top2,int n){
    int x=-1;
    if(top2==n){
        printf("Stack 2 is Empty");
    }
    else{
        x=a[top2++];
        return top2;
    }
}
//display Function
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
}
int main(){
    int top1=-1,n;
    printf("Enter Size of Array");
    scanf("%d",&n);
    int top2=n;
    int a[n];
    top1=push1(a,n,top1,top2,10);
    top2=push2(a,n,top1,top2,10);
    top1=push1(a,n,top1,top2,20);
    top2=push2(a,n,top1,top2,20);
    top1=push1(a,n,top1,top2,30);
    top2=push2(a,n,top1,top2,30);
    top1=push1(a,n,top1,top2,40);
    top1=push1(a,n,top1,top2,50);
    top1=push1(a,n,top1,top2,60);
    top1=push1(a,n,top1,top2,70);
    top1=push1(a,n,top1,top2,80);

    //printf("%d,%d:",top1,top2);
    top1=pop1(a,top1);
    top2=pop2(a,top2,n);
    top1=pop1(a,top1);
    top2=pop2(a,top2,n);
    top1=pop1(a,top1);
    top2=pop2(a,top2,n);
    //pop1(a,top1);
    //pop1(a,top1);
    
    display(a,n);
    //printf(":%d,%d:",top1,top2);
    return 0;
}
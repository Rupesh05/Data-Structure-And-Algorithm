#include<stdio.h>
#include<stdlib.h>
struct stack{
    //int top;
    int data;
    struct stack *next;
}*top=NULL;
void push(int x){
    struct stack *t;
    t=(struct stack *)malloc(sizeof(struct stack));
    if(t==NULL)
    printf("stack overflow");
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
void pop(struct stack *p){
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        int x=p->data;
        top=top->next;
        free(p);
    }
}
int isEmpty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}
int isFull(){
    struct stack *p;
    p=(struct stack *)malloc(sizeof(struct stack));
    if(p==NULL)
        return 1;
    else
        return 0;
}
int stackTop(){
    if(top==NULL)
        return 0;
    else 
        return top->data;
}
void peek(struct stack *p,int position){
    for(int i=1;i<position && p!=NULL;i++){
        p=p->next;
    }
    if(p)
        printf("%d",p->data);
    else
        printf("index is invalid");
}
void display(struct stack *p){
    while(p!=NULL){
        printf("%d,",p->data);
        p=p->next;
    }
}
int main(){
    push(20);
    push(10);
    display(top);
    //pop(top);
    //peek(top,2);
    printf("%d",isEmpty());
    
    return 0;
}
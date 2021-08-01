#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *t;
};
//creation of stack
void create(struct stack *st){
    //printf("enter size of an stack");
    //scanf("%d",&st->size);
    st->top=-1;
    st->t=(int *)malloc(st->size*sizeof(int));
}
//pushing of elements
void push(struct stack *st,int x){
    if(st->top==st->size-1)
    printf("stack overflow");
    else{
        st->top++;
        st->t[st->top]=x;
    }
}
int  pop(struct stack *st){
    int x=-1;
    if(st->top==-1)
    printf("stack under flow");
    else{
        x=st->t[st->top--];
        return x;
    }
    return x;
}
void isEmpty(struct stack st){
    if(st.top==-1){
        printf("stack is empty");
    }
    else{
        printf("stack is not empty");
    }
}
void isFull(struct stack st){
    if(st.top=st.size-1)
        printf("stack is full");
        else{
            printf("stack is not full");
        }
}
void stackTop(struct stack st){
    if(st.top!=-1)
      printf("%d",st.t[st.top]);
      else{
          printf("stack is empty");
      }
}
int peek(struct stack st,int index){
    int x=-1;
    if(st.top-index+1<0)
        printf("invalid index");
    x=st.t[st.top-index+1];
    return x;
}
void display(struct stack st){
    for(int i=st.top;i>=0;i--){
        printf(",%d",st.t[i]);
    }
}
int main(){
    struct stack st;
    create(&st);
    //isEmpty(st);
    push(&st,20);
    push(&st,50);
    //pop(&st);
    //stackTop(st);
    printf("%d",peek(st,2));
    display(st);
    return 0;
}
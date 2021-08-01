#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *t;
};
//creation of stack
/*void create(struct stack *st){
    printf("enter size of an stack");
    //scanf("%d",&st->size);
    st->size=strlen(infix);
    st->top=-1;
    st->t=(char *)malloc(st->size*sizeof(int));
}*/
//pushing of elements
void push(struct stack *st,char x){
    if(st->top==st->size-1)
    printf("stack overflow");
    else{
        st->top++;
        st->t[st->top]=x;
    }
}
char  pop(struct stack *st){
    int x=-1;
    if(st->top==-1)
    printf("stack underflow");
    else{
        x=st->t[st->top--];
        return x;
    }
    return x;
}
int isEmpty(struct stack st){
    if(st.top==-1){
        return 0;
        //printf("stack is empty");
    }
    else{
        return 1;
        //printf("stack is not empty");
    }
}
/*void isFull(struct stack st){
    if(st.top=st.size-1)
        printf("stack is full");
        else{
            printf("stack is not full");
        }
}*/
char stackTop(struct stack st){
    if(st.top!=-1)
        return st.t[st.top];
      else{
          return -1;
      }
}
/*int peek(struct stack st,int index){
    int x=-1;
    if(st.top-index+1<0)
        printf("invalid index");
    x=st.t[st.top-index+1];
    return x;
}*/
int isPrecedence(char x){
    if(x=='+' || x=='-')
        return 1;
    else if(x=='/' || x=='*')
        return 2;
    else
        return 0;
    
}
int isOperator(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 1;
    else
        return 0;
}
void conversion(char infix,struct stack st){
     char *postfix;
    postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    int i=0,j=0;
    
    while(infix[i]!='\0'){
        printf("%c,",infix[i]);
        if(isOperator(infix[i])){
            if(isPrecedence(infix[i])>isPrecedence(stackTop(st))){
                push(&st,infix[i++]);
                
            }
            else{
                postfix[j++]=pop(&sti);
            }

        }
        else{
            postfix[j++]=infix[i++];
        }
    }
while(isEmpty(st)){
    postfix[j++]=pop(&st);
}
postfix[j]='\0';
//return postfix;

j=0;
//printf("rupesh");
while(postfix[j]!='\0')
    printf("%c",postfix[j++]);
}
/*void display(struct stack st){
    for(int i=st.top;i>=0;i--){
        printf("%d,",st.t[i]);
    }
}*/
int main(){
    struct stack st, *sti;
    st.top=-1;
    int j=0;
    char *infix="a+b*c-d/e";
    //char *infix="a+b*c-d/e";
  
    //st.size=strlen(infix);
    conversion(infix,st);
    
    return 0;
}
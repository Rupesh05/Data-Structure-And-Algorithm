#include<stdio.h>
struct stack{
    int size;
    int top;
    //int data;
    struct stack *t;
};
void create_stack(struct stack &st){
    st.t=(int *)mallloc(st.size*sizeof(struct stack));
    int i=0;
    while(top!=st.size-1){
        printf("enter data to a stack");
        scanf("%d",&st.t[i++]);
        top++;
    }
    
}
int main(){
    struct stack;
    printf("enter stack size");
    scanf("%d",&st.size);
    st.top=-1;
    return 0;
}
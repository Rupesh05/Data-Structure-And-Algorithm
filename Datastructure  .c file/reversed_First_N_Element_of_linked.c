/*write a program to reverse first n element of a linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(struct node *p,int n){
    struct node *last;
    first=(struct node *)malloc(sizeof(struct node));
    first->next=NULL;
    printf("enter data to first node");
    scanf("%d",&first->data);
    last=first;
    for(int i=1;i<n;i++){
        p=(struct node *)malloc(sizeof(struct node));
        printf("enter data to a next node");
        scanf("%d",&p->data);
        last->next=p;
        p->next=NULL;
        last=p;
    }
}
void reverse(struct node *p,int l){
     int i=1;
     struct node *q=NULL,*r=NULL,*s=NULL,*last=p,*a=first; 
     while(i<l){
         p=p->next;
         i++;
     }
    
     s=p->next;
     p->next=NULL;
     p=first;
     while(p!=NULL){
           r=q;
           q=p;
           p=p->next;
           q->next=r;
     }
     first=q;
     p=first;
     while(p->next!=NULL){
         p=p->next;
     }
     p->next=s;
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d,",p->data);
        p=p->next;
    }
}
int main(){
    int n,l;
    printf("enter size of linked list");
    scanf("%d",&n);
    create(first,n);
    display(first);
    printf("enter length upto which list will reversed");
    scanf("%d",&l);
    reverse(first,l);
    display(first);
    return 0;
}
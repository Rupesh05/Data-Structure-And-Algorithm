#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
}*first=NULL;
//creating node
void createnode(struct node *last){
   struct node *t=NULL;
     //last=NULL;
    printf("enter data to a list");
    first=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&first->data);
    first->next=NULL;
    last=first;
   for(int i=0;i<5;i++){
    t=(struct node *)malloc(sizeof(struct node));
    printf("enter data to a list");
     scanf("%d",&t->data);
     t->next=NULL;
     last->next=t;
     last=t;
   }
}
//deleting node
void delete(struct node *n ,int position){
     struct node *a=n;
      if(n==NULL)
         printf("list not exist");
      else{
        for(int i=1;i<position;i++){
            n=n->next;
            a=a->next;
        }
        a=a->next;
        n=a;
      }
    }
//Display node
void display(struct node *k){
  while(k!=NULL){
    printf("%d,",k->data);
    k=k->next;
  }
 }
int main(){
    struct node *last,*new;
    int position;
   
 createnode(first);
   printf("Element of linked list are:-");
 display(first);
   printf("\nenter position");
   scanf("%d",&position);
   //insert(first,position);
   printf("\n");
 //display(first);
 delete(first,position);
  //printf("\n");
 display(first);
return 0;
}

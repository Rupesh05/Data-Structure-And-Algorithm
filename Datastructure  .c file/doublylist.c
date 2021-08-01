#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *prev;
  int data;
  struct node *next;
}*first=NULL;
//CREATION OF NODE FOR DOUBLY LINKED LIST
void create_node(struct node *p,int n){
    struct node *t,*last;
    int i=1;
    first=(struct node *)malloc(sizeof(struct node));
    first->prev=NULL;
    first->next=NULL;
    printf("enter data to a first node:-");
    scanf("%d",&first->data);
    last=first;
    
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
         printf("enter data to a list:-");
         scanf("%d",&t->data);
         //t->next=last->next; or t->next=NULL BOTH VALID
	 t->next=last->next;
	 t->prev=last;
         last->next=t;
         last=t;
      }
}
void insert(struct node *p,int position){
      struct node *new;
      int i;
      new=(struct node *)malloc(sizeof(struct node));
	new->prev=new->next=NULL;
        printf("enter data to a node to be inserted");
	scanf("%d",&new->data);
	if(position<1)
		printf("position is not valid");
	else{
		if(position==1){
		     new->next=first;
		     first->prev=new;
			//new->prev=first;	     
			first=new;	
		     	
		}	
		else{
                     for(i=1;i<position-1;i++){
                         p=p->next;
                             }
			new->next=p->next;
			new->prev=p;
			p->next=new;                    
		}		
	}   
}
void delete(struct node *p,int position1){
     
int i; 
   if(position1==1){
         p=p->next;
	 first=p;	
	 first->prev=NULL;
     }
    else{
        for(i=1;i<position1;i++){
               p=p->next;
        }
         p->prev->next=p->next;
	 if(p->next)
	 p->next->prev=p->prev;
      }
}
void search(struct node *k,int key){
    int flag=0;
	while(k!=NULL){
	     if(k->data==key){
		  flag=1;
                  printf("key exist");
		}
	}
     if(flag!=1)
	printf("not exist");
}
void reverse(struct node *p){
	struct node *temp;
	while(p!=NULL){
	      temp=p->next;
	      p->next=p->prev;
	      p->prev=temp;
	      p=p->prev;
	if(p!=NULL && p->next==NULL)
		first=p;
	}
}
void display(struct node *p){
  while(p!=NULL){
     printf("%d,",p->data);
     p=p->next; 
   }
}
int main(){
	int n,position,position1,key,a,c;

	printf("enter max^m no of node in linked list");
	scanf("%d",&n);
	create_node(first,n);
	display(first);
	
do{
	printf("\nCHOOSE AMONG THESE");
	printf("\n1.Insertion\n2.Deletion\n3.Reverse\n4.Exit");
	scanf("%d",&a);
switch(a){
	case 1: printf("enter positon where u want to insert");
		scanf("%d",&position);
		insert(first,position);
		display(first);  
		break;
	case 2: printf("enter index which u want to delete");
		scanf("%d",&position1);
		delete(first,position1);
		display(first);
		break;
	case 3: reverse(first);
		printf("after reversing");
		display(first);
		break;
	case 4: exit(0);
	}
printf("if u want to continue press 1");
scanf("%d",&c);
}while(c==1);

/*
printf("enter positon where u want to insert");
scanf("%d",&position);
insert(first,position);
display(first);
printf("enter index which u want to delete");
scanf("%d",&position1);
delete(first,position1);
display(first);
reverse(first);
printf("after reversing");
display(first);
printf("enter element u want to search");
scanf("%d",&key);
search(first,key);
display(first);
*/return 0;
}

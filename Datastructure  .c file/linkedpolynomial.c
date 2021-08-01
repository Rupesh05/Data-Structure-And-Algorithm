#include<stdio.h>
#include<stdlib.h>
struct node{
 int coeff;
 int exp;
 struct node *next;
}*first=NULL;
void create_polynomial(struct node *p){
	struct node *last=first;
	int n,i=0;
	printf("enter no of terms in polynomial");
	scanf("%d",&n);
	first=(struct node *)malloc(sizeof(struct node));
	printf("\nenter coefficient:\n");
	scanf("%d",&first->coeff);
	printf("x^");
	//printf("enter exponent");
	scanf("%d",&first->exp);
	first->next=NULL;
	last=first;
	for(i=0;i<n-1;i++){
		p=(struct node *)malloc(sizeof(struct node));
		printf("enter coefficient:\n");
		scanf("%d",&p->coeff);
		printf("x^");
		//printf("enter exponent");
		scanf("%d",&p->exp);
		last->next=p;
		last=p;		
	}
	return first;
	
}
void display(struct node *p){
        printf("p(x)=");
	while(p!=NULL)
	{
		printf("%dx^%d + ",p->coeff,p->exp);
		p=p->next;
	}
}
int main(){
	struct node *p1,*p2;
	p1=create_polynomial(first);
	p2=create_polynomial(first);
	
	display(first);
return 0;
}

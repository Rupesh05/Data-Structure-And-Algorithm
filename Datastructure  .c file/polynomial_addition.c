#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct term{
	int coeff;
	int exp;
	};
struct polynomial{
	int n;
	struct term *t;
	};
int main(){
	char c='x';
	int i=0;
//CREATION OF FIRST POLYNOMIAL
 	struct polynomial p1,p2;
	printf("enter no of non-zero term");	
	scanf("%d",&p1.n);	
	p1.t=(struct term *)malloc(p1.n*sizeof(struct term));
	printf("enter terms ofpolynomial\n");
	for(i=0;i<p1.n;i++)
	{       
		printf("term no is %d",i+1);
		//printf("te);
		scanf("%d%d",&p1.t[i].coeff,&p1.t[i].exp);	
	}
	printf("required polynomial is p2(x)=");
	//printf("p1(x)=");
        for(i=0;i<p1.n;i++){
		printf("%dx^%d",p1.t[i].coeff,p1.t[i].exp);
		if(i<p1.n-1)		
		printf(" + ");
	}
    printf("\n");
//CREATION OF 2ND POLYNOMIAL
	int k=0;	
	printf("enter no of non-zero term for 2nd polynomial");	
	scanf("%d",&p2.n);	
	p2.t=(struct term *)malloc(p1.n*sizeof(struct term));
	printf("enter terms of 2nd polynomial\n");
	for(k=0;k<p2.n;k++)
	{       
		printf("term no is %d",k+1);
		//printf("te);
		scanf("%d%d",&p2.t[k].coeff,&p2.t[k].exp);	
	}
	printf("required polynomial is p2(x)=");
	//printf("");
        for(k=0;k<p2.n;k++){
		printf("%dx^%d + ",p2.t[k].coeff,p2.t[k].exp);
		if(i<p2.n-1)		
		printf(" + ");	
	}
	printf("\n");
//ADDITION OF TWO POLYNOMIAL
        struct polynomial p3;
	p3.n=p1.n+p2.n;
	i=0;
	k=0;
	int j=0;
	p3.t=(struct term *)malloc((p1.n+p2.n)*sizeof(struct term));
	while(i<p1.n && k<p2.n){
	if(p1.t[i].exp > p2.t[k].exp)	
		p3.t[j++]=p1.t[i++];
	else if(p1.t[i].exp < p2.t[k].exp)
		p3.t[j++]=p2.t[k++];
	else{
		p3.t[j].exp=p1.t[i].exp;
		p3.t[j++].coeff=p1.t[i++].coeff+p2.t[k++].coeff;
	}
			}
	printf("sum of polynomial is p3(x)=");
	//printf("");
        for(j=0;j<p3.n;j++){
		printf("%dx^%d + ",p3.t[j].coeff,p3.t[j].exp);
		/*if(i<p3.n-1)		
		printf(" + ");*/	
	}	        
return 0;
}

#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;  
}
//partition function
int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l,j=h;
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j) 
            swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[l],&a[j]);
    return j;
}
//sorting function
void quickSort(int a[],int l,int h){
    int j;
    if(l<h){
       j=partition(a,l,h);
       quickSort(a,l,j);
       quickSort(a,j+1,h);
    }
}
//Driver code
int main(){
    int a[]={14,12,15,17,5,2,19,84,78,6};
    int n=sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n);
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    return 0;
}
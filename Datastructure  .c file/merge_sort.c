#include<stdio.h>
//merge
int merge(int a[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100];

    while(i<=mid && j<=h){
        if(a[i]<a[j])
            B[k++]=a[i++];
        else
            B[k++]=a[j++];
    }
    for(;i<=mid;i++)
        B[k++]=a[i];
    for(;j<=h;j++)
        B[k++]=a[j];

     for(i=l;i<=h;i++)
        a[i]=B[i];
}
//merge sort
void mergeSort(int a[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
//Driver code
int main(){
    int a[]={15,14,12,18,17,19,2,5,8,4,66,55},n;
     n=sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n);
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    return 0;
}
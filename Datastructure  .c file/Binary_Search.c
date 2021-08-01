#include<stdio.h>
int main(){
    int a[]={1,3,7,9};
    int low=0,high=3;
    int k=7,m=0;
    int flag=0;
    int mid=(high+low)/2;
    while(low<=high){
        if(a[mid]=k){
           flag=1;
            break;
        }
        if(a[mid]>k)
            high=mid-1;
        else if(a[mid]<k)
            low=mid+1;
        mid=(high+low)/2;
    }
    if(flag)
        printf("Element found");
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main(){

    int pos,ele,n;
    n = printf("Enter array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arrayInsert(arr,pos,ele,n);
return 0;
}
int arrayInsert(int arr[],int pos,int ele,int n){

    printf("\nArray Elements are : ");
    for(int i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    pos = printf("\nEnter Position to Insert Element : ");
    scanf("%d",&pos);
    ele = printf("\nEnter Element to Insert in Array : ");
    scanf("%d",&ele);
    n++;//increasing array size to store new value
    for(int i=n;pos<=i;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    printf("Array New Elements are : ");
    for(int i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
return 0;
}

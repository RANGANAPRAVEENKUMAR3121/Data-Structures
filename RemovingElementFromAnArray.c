#include<stdio.h>
#include<conio.h>

int removeElement(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    n = printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n],key;
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos =n/2;
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    n--;
    key = printf("Enter Key to Remove : ");
    scanf("%d",&key);
    int pos = removeElement(arr,n,key);
    if(pos>=0){
        for( int i=pos;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;//else garbage values rises at end
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
    else{
        printf("Element Not Found.");
    }

return 0;
}

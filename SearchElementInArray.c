#include<stdio.h>
#include<conio.h>

int search(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return "true";//break and wont execute other statements...
        }
    }
    return "false";
}

int main(){
    int n;
    n = printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n],key;
    printf("Enter Array Elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    key = printf("Enter Key : ");
    scanf("%d",&key);
    int ele = search(arr,n,key);
    if(ele=="true"){
        printf("Key Found");
    }
    else{
        printf("Key Not Found");
    }
return 0;
}

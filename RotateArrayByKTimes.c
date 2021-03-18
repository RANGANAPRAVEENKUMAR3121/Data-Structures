#include<stdio.h>
#include<conio.h>

int rotateKTimes(int arr[],int n,int k){
    int temp=0;
    while(k>0){
        for(int j=n-1;j>0;j--){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
        k--;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


}

int main(){

    int n;
    n=printf("Enter Array Size :");
    scanf("%d",&n);
    int arr[n],k;
    printf("Enter Array Elements :");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    k=printf("Enter No.of Times to Rotate : ");
    scanf("%d",&k);
    rotateKTimes(arr,n,k);
return 0;
}

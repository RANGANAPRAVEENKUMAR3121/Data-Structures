#include<stdio.h>
#include<conio.h>

/*
int removeDuplicate(int arr[],int n){

    int brr[n],k=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
           // arr[i]=arr[i+1];
           // n--;
          brr[k]=arr[i];
          k++;
        }
    }

    for(int i=0;i<k;i++){
        printf("%d",brr[i]);
    }
return 0;
}*/
int removeDuplicate(int arr[], int n)
{
    for(int i = 0 ;i<n;i++){
    for(int j = i+1;j<n; ){
            if(arr[i] == arr[j]){
                for(int k = j; k < n; k++){
                    arr[k] = arr[k+1];
                }
                n--;
            }else{
                j++;
            }
        }
    }
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

int main(){

        int n;
        n=printf("Enter Array Size : ");
        scanf("%d",&n);
        int arr[n],temp=0;
        printf("Enter Array Values :");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        removeDuplicate(arr,n);

return 0;
}


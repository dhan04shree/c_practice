#include<stdio.h>
int countodd(int arr[],int n);
int main(){
    int arr[] = {1,2,34,4,5,6,7};
    printf("%d \n",*(arr+2));
    printf("%d \n",*(arr+5));
    printf("%d",countodd(arr,7));
    return 0;
}
int countodd(int arr[],int n) {
    int count = 0;
    for(int i =0 ;i<n;i++){
        if(arr[i] % 2 != 0){
            count++ ;
        }

    }
    return count ;
}
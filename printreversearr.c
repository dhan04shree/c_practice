#include<stdio.h>
int reversearr(int arr[],int n); //when array include in function then call is call by reference 
void printarr(int arr[],int n); //reversearr will reverse the array but this will store in printarr function also

int main(){
    //write a function to print an reverse array
    int arr[] ={1,2,3,4,5};
    reversearr(arr,5);
    printarr(arr,5);
}
int reversearr(int arr[],int n){
    for(int i=0; i<n/2;i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue ;
        arr[n-i-1] = firstvalue ;
        
    }
    return 0;
}
void printarr( int arr[],int n){
    for(int i =0; i<n;i++){
        printf("%d \t",arr[i]);
    }

}
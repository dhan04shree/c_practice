#include<stdio.h>
int n;
int fib(n);



int main(){
    printf("Enter n : \n");
    scanf("%d \n",&n);
    int fibNm[n];
    fibNm[0] = 0;
    printf("%d \n",fibNm[0]);
    fibNm[1] = 1;
    printf("%d \n",fibNm[1]);
    fib(n);
    //int *ptr = &arr[0];
    return 0;
}
int fib(n){
    int fibNm[n];
    
    for(int i =2 ;i <n ; i++){
    int N = fibNm[i] = fibNm[i-1] + fibNm[i-2] ;
    printf("%d \t",N);
    }
    return 0;

}



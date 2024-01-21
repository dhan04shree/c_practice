#include<stdio.h>
int main(){
    for(int i= 10 ; i>=1; i = i-1 ){ //i-=1  i-- 
        printf("%d \n",i);
    }
    //increment operator
    // ++i (pre increment)
    // i++ (post increment)
    int j=1;
    printf("%d \n",j++); // use ,then increase
    printf("%d \n",j );
    printf("%d \n",++j); // increase, then use
    printf("%d \n",j);

    int k=1;
    while (k<=5) {
        printf("Hello World \n");
        k++ ;
    }
    int n;
    printf("Enter number n upto which you wanted to print :  ");
    scanf("%d \n",&n);
    for(int m=0; m <=n; m++) {
        printf("%d \n",m);
    }


    return 0;
}
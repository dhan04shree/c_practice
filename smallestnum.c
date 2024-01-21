#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st number a and 2nd number b for checking smallest number : \n ");
    printf("a  = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d \n",&b); 
    c = (a<b) ;


    
    
    printf("if number a is smallest then output comes 1 and num b is smallest then output comes 0 \n");
    printf("output is: %d ",c);

    return 0;
    
}
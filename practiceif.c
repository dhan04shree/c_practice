#include<stdio.h>
int main(){
    int marks;
    
    printf("enter a marks(0-100) : ");
    scanf("%d",&marks);
    if(marks<30){
        printf("C \n");
    }else if(marks>=30 && marks<70){
        printf("B \n");}
        else if(marks>=70 && marks<90){
        printf("A \n");
    }else if(marks>=90 && marks<=100){
        printf("A+ \n");
    }else {
        printf("Not a valid number \n");
    }
    int x =2;
    if (x = 1){// in case of x= 0 output comes always else condition but when x is another num than 0 then ex.x=1 then output assign value of it
        printf("x is equal to 1 \n");
        printf("%d \n",x);
    } else { 
        printf("x is not equal to 1 \n");
    }
    return 0;
}
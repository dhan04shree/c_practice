#include<stdio.h>
int main(){
    int age, AGE;
    printf("enter age");
    scanf("%d",&age);
    //conditional statement
    if(age >18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive");
    }
    else{
        printf("not adult \n");
    }
    printf("enter AGE :  ");
    scanf("%d \n",&AGE);
    // conditional operator ternary
    AGE >= 18 ? printf("adult \n") : printf("not adult \n");







    int marks;
    
    printf("enter a marks(0-100) : ");



    scanf("%d",&marks);
    if(marks<30){
        printf("C");
    }else if(marks>=30 && marks<70){
        printf("B");}
        else if(marks>=70 && marks<90){
        printf("A");
    }else if(marks>=90 && marks<=100){
        printf("A+");
    }else {
        printf("Not a valid number");
    }
    

    return 0;
}
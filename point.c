#include<stdio.h>
int main(){
    //1st code
    // int x;
    // int *ptr;
    // ptr = &x ;
    // *ptr = 0; //x=0
    // printf("x = %d\n",x);
    // printf("*ptr = %d\n",*ptr); //x =0
    // *ptr += 5;
    // printf("x = %d \n",x);
    // printf("*ptr = %d \n",*ptr);
    // (*ptr)++;
    // printf("x = %d \n",x);
    // printf("*ptr = %d \n",*ptr);
    //2nd code
    /*int age = 22;
    int smile =56;
    int *ptr = &smile ;//*value of  
    int _age = *ptr ;
    printf("%p\n",_age);
     printf("%p \n",age);
      printf("%p\n",*ptr);*/ // &address of

    //3rd code pointer to pointer code

    float price = 100.00;
    float *ptr = &price ;
    float **pptr = &ptr ;
    printf("%f",**pptr);
    

    

    return 0;
    }
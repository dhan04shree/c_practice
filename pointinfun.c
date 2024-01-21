//pointers in function call
#include<stdio.h>
// void square(int n);
// void _square(int *n);
int main(){
//     int number = 4;
//     square(number);
//     printf("number is %d\n",number);

//     _square(&number);
//     printf("number is %d \n",number);
//     return 0;
// }
// //call by value
// void square(int n){
//     n = n * n ;
//     printf("%d \n",n);
// }
// //call by reference
// void _square(int *n){
//     *n = (*n) * (*n) ;
//     printf("%d \n",*n);
// }


// pointer arithmetic
// int age = 22;
// int *ptr = &age;
// printf("ptr = %u \n",ptr);
// ptr++;
// printf("ptr = %u \n",ptr);
// ptr--;
// printf("ptr = %u \n",ptr);


//subtract one pointer from another pointer
float price1 =22 ;
float price2 = 27.0 ;
float *pttr1 = &price1;
float *pttr2 = &price2;
printf("%u difference %u = %u\n",*pttr1,*pttr2,*pttr1 -*pttr2);
printf("% difference %u = %u\n",pttr1,pttr2,pttr1 - pttr2);
pttr2 =&price1 ;
printf("comparison = %u \n",pttr1 == pttr2);

    char s[25] ;
    char *ptr = &s[0];
    for(int i=0;i<=25;i++){
        scanf("%c",(ptr+i)); //ptr+i is equal to s[i]
    }
    for(int i = 0;i<= 25; i++){
        printf("%c",*(ptr+i));

    }


return 0;
}



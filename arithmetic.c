#include<stdio.h>
#include<math.h>
int main(){
    int b, c ;
    b = c = 1;
    int a = b+c;
    int power = pow(2,3);
    printf("%d\n",power);
    printf("%d \n",2/3);
    int f = (int) 1.99999 ;
    printf("%d \n",f);
    int r = 1;
    int s = 4;
    r += s ;
    printf("%d \n",r);
    /* int a = 8^8 valid
       int x; int y = x; valid
       int x ,y=x; invalid
       char star ='**' ;  invalid 
       */
    return 0;
}
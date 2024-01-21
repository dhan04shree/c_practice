#include<stdio.h>
int main(){
    int day; //1-mon;2-tue;3-wed;
    printf("enter day(1-7) :  ");
    scanf("%d",&day);
    switch (day){
        case 1 : printf("monday \n");
                 break;
        case 2 : printf("tuesday");
                 break;
        case 3 : printf("wedenesday \n");
                 break;
        case 4 : printf("thursday");
                 break;
        case 5 : printf("friday \n");
                 break;
        case 6 : printf("saturday");
                 break;
        case 7 : printf("sunday");
                 break;
        default :printf("not a valid day !\n");         
    }
    return 0;
}         
        
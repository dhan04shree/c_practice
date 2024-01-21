#include<stdio.h>
int main() 
{
    char ch ;
    scanf("%c",&ch);
    printf("%c \n",ch);
    char s[100];
    scanf("%s",s);
    printf("%s",s);
    char sen[100];
    fgets(sen,16,stdin);
    puts(sen);
    // for(int i =0 ; i<=15; i++){
    //     scanf("%c",&sen[i]);
    //     printf("%c",sen[i]);
    // }
    return 0;    
}

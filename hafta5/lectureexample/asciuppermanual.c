#include <stdio.h>
#include <conio.h>
int main()
{
   char upr,lwr;
   int ascii;
   printf("Enter the uppercase letter");
   scanf("%c",&upr);
   ascii=upr+32;
   printf("%c character lower case is %c \n",upr,ascii);

 printf("\nEnter the lowercase letter ");
scanf("%c",&lwr);
   ascii=lwr-32;
   printf("%c character upper case is %c",lwr,ascii);
    return 0;
}

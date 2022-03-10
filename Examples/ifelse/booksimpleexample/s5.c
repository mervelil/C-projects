#include <stdio.h>
int main()
{
    char c;
    printf("a ya da b char giriniz\n");
    scanf("%c",&c);
   switch (c)
   {
   case 'a':
       printf("ANKARA");
       break;
   case 'b':
       printf("Bolu");
       break;
   
   default:
       printf("hATA");
       break;
   }
    return 0;
}

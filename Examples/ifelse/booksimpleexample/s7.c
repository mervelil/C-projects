#include <stdio.h>

int main()
{
int a=2,b=4;
char c;
    printf("Karakter giriniz.(k/d)");
    scanf("%c",&c);
     if (c=='k')
     {
       printf("TKarenin alani %d",(a*a));
     }
     else if(c=='d') {
       printf("Dikdortgenin alani %d",(a*b));  
     }
     else{
         printf("Yanlıs veri ");
     }
    return 0;
}



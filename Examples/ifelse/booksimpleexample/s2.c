#include <stdio.h>
int main()
{
   int a,b;
   char k;
   printf ("islem seciniz(+,-,/,*)\n");
   scanf("%c",&k);
   printf("Sayı giriniz \n");
   scanf("%d",&a);
   printf("Sayı giriniz \n");
   scanf("%d",&b);
   
  if (k=='+')
  {
    printf("2 Sayinin toplami %d + %d",(a+b));  
  }
  else if (k=='-')
  {
    printf("2 Sayinin cikarilmisi %d - %d",(a-b));  
  }
  else if (k=='/')
  {
    printf("2 Sayinin bolumu %d / %d",(a/b));  
  }
  else if (k=='*')
  {
    printf("2 Sayinin carpimi %d * %d",(a*b));  
  }
  

    return 0;
}

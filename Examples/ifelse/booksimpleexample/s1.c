#include <stdio.h>
int main()
{
   int a,b;
   printf("Sayı giriniz \n");
   scanf("%d",&a);
   printf("Sayı giriniz \n");
   scanf("%d",&b);
//    pritf("Sayı giriniz\n");
//    gets(b);
   if (a>b)
   {
      printf("%d sayisi %d sayisindan büyüktür.",a,b);
   }
   else if(a<b){
    printf( "%d sayisi %d sayisindan büyüktür.",b,a);
   }else{
    printf("%d sayisi %d sayisina eşittir.",a,b);
   }
   
    return 0;
}

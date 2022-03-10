#include <stdio.h>
int main()
{
   int km,sonuc;
   printf("Km giriniz\n");
   scanf("%d",&km);
   if (km<100)
   {
      sonuc=10+ (km*0.9);
      printf("Total %d",sonuc);

   }
   else if(km>100){
       sonuc=10+(km*0.6);
       printf("total %d",sonuc);
   }
   
    return 0;
}

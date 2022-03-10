#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//static int kareAl(int a);
int sayiUret();
int main()
{
   int z= sayiUret();
   printf("Yazdir  %d",z);

    return 0;
}

int sayiUret() {
int sayi ;
 srand(time(NULL));
 sayi=(rand()%60+20);

 return sayi;
}
 

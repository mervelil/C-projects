#include <stdio.h>
 
int asalMi(int sayi);
int altKumeleriAsalMi(int sayi);
int main()
{
   int k;
 
   for (k = 0; k < 1000; ++k)
      if (isprime(k))
         printf("%d ", k);
 
   return 0;
}
int asalMi( int girilen){
    int  i, degiskeni = 0;
    printf("Bir sayı giriniz:");
    scanf("%d", &girilen);
    for (i = 2; i < girilen; i++)
    {
        if (girilen % i == 0)
        {
            printf("Girilen sayı asal değildir.");
            degiskeni = 1;
            break;
        }
    }
    if (degiskeni == 0)
        printf("Girilen sayı asaldır.");
    return 0;
}
int altKumeleriAsalMi(int sayi){
    int  temp,sayilar, i, degiskeni = 0;

    printf("Bir sayı giriniz:");
    scanf("%d", &sayi);
    for (i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            printf("Girilen sayı asal değildir.");
            degiskeni = 1;
            break;
        }
    }
    if (degiskeni == 0)
        printf("Girilen sayı asaldır.");
        temp=i;  
        int sayistok[]=sayilar;
        printf("Olabilecek sayilar\n");
        for (size_t i = 0; i < sayistok; i++)
        {
            printf(sayistok[i]);
        }
        
    return 0;
}
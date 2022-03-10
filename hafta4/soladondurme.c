#include <stdio.h>
#include <time.h>
int soladondurme(int dizi[],int n);
int main()
{
    int a;
    int dizi[]={0};
    printf("Sola kaydırma sayısı giriniz.\n");
    scanf("%d",&a);
    printf("%d",soladondurme(dizi,a));
    return 0;
}
 int soladondurme(int dizi[],int n) {
    int sayi,i,temp;
    srand(time(NULL));
 for (int i = 0; i < 100; i++)
 {
    sayi=(rand()%9)+1;
    dizi[sayi]++;
 }
  printf("Original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }
 temp=dizi[0];
    for(i=0;i<n-1;i++)
    {
        dizi[i]=dizi[i+n];
    }
    dizi[n-1]=temp;
 
    printf("\nNew array after rotating by one postion in the left direction\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }
 }

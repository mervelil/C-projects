#include <stdio.h>
int main()
{
    int dizi[]={3,4,6};
    int boyut=3;
    int *q;
  // int *a= 
   q= enKucuk(dizi,boyut);
   printf(" En kucuk eleman %d",*q);
   getch();
    return 0;
}
int* enKucuk(int dizi[],int boyut){
    int kucuk,*pKucuk;
    int kucuk=dizi[0];
   *pKucuk=&dizi[0];
  for (int i = 0; i < boyut; i++)
  {
      if(dizi[i]<kucuk){
          kucuk=dizi[i];
          *pKucuk=&dizi[i];
         
      }
  }
  return *pKucuk;
}

 
  

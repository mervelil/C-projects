#include <stdio.h>
voiddiziYazdir(int dizi[], int boyut);
int main(int argc, char const *argv[])
{  
   int dizi[]={32,4,2,5};
   int boyut=4;
   voiddiziYazdir(dizi,boyut);

    return 0;
}
voiddiziYazdir(int dizi[], int boyut){
   
   int *pArray=&dizi[0];
  
   for (int i = 0; i < boyut; i++)
   {
      // int *num=4+*pArray;
    //   printf("Array elemanlari %d",pArray[i]);
      printf("Array elemanlari %d",*(pArray+i));
   }
   

}

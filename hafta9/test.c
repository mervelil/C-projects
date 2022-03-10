#include <stdio.h>
#include <stdlib.h>
#include "myarraylib.h"

int main(void) {
   float *dizi;
   int **dizi2;
   
   dizi=diziOlustur(5);
   diziDoldur(dizi,5);
   diziyazdir(dizi,5);
   
    puts("");

  dizi2=ikiBuyutDiziOlusutur(4,3);
  ikiBoyutdiziDoldur(dizi2,4,3);
  ikiBoyutdiziYazdir(dizi2,4,3);
   
}

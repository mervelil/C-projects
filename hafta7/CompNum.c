#include <stdio.h>
#include "CompNum.h";
complex topla (complex* c1,complex* c2){
     complex csonuc;
     complex *cptr;
   csonuc.re=c1->re+c2->re;
   csonuc.im=c1->im+c2->im;
   return csonuc;
 
}
complex carpim (complex* c1,complex* c2){
     complex csonuc;
  //   complex *cptr;
   csonuc.re=(c1->re*c2->re)-(c1->im*c2->im);
   csonuc.im=(c1->re*c2->im)-(c1->im*c2->re);
   return csonuc;

void yazdirKarmasik (complex c){
   printf("%.2f",c.re);
   if(c.im<0){
          printf("%.2fi",c.im);
   }else{
         printf("+%.2fi",c.im); 
   }
}
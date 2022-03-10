#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *dg;  char  Ad[10];
   int   Not, No, eb, ek, n, top;
   float ort;
   if( (dg=fopen("ogrenci.txt","r")) == NULL ) //dosysyı kendin olustur w de oyle olmasına gerk yok  uzantsı ı.dat vs olabilir
     puts("Dosya açılmadı !\n"), exit(1);

   ek  =  1000;  /* çok büyük */
   eb  = -1000; 
   top = 0;      /* notların toplamı */
   n   = 0; 
while( !feof(dg) ) {
      fscanf(dg,"%d %s %d",&No,Ad,&Not); /* verileri oku! */
      if(Not>eb) eb = Not; 
      if(Not<ek) ek = Not;

      if(Not) n++;                      

      top += Not;                        
   }
fclose(dg);                           

   ort = (float) top/n;                 

   printf("En yuksek not = %2d\n",eb);   
   printf("En  dusuk not = %2d\n",ek);
   printf("Ortalama      = %4.1f\n",ort);

 return 0;
}

   

#include <stdio.h>
int kupal(int sayi);
int main()
{
   int sayi=372;
   printf(basamakbulma(sayi));
    return 0;
}
int basamakbulma(int sayi) {
    int yuz,on,bir,arm,yuzler,onlar,birler;
    yuzler=sayi/100;
    
    on=sayi/10;
    onlar=on%10;
   
    birler=sayi%10;
     
   arm= kupal(yuzler)+kupal(onlar)+kupal(birler);
   if(sayi==arm) {
       printf("Sayi armstrog");
   }else{
        printf("Sayi armstrog değil");
   }

}
int kupal(int sayi) {
    return sayi*sayi*sayi;
}


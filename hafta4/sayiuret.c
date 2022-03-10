#include <stdio.h>
#include <time.h>
void uret (int dizi[]){
    int sayi,i;
    srand(time(NULL));
 for (int i = 0; i < 100; i++)
 {
    sayi=(rand()%9)+1;
    dizi[sayi]++;
 }
 
}
void yazdir(int dizi[9]){
    int i,j;
    for ( i = 0; i < 9; i++)
    {
       for (j  = 0; j < dizi[i]; j++)
       {
        printf("*");
       }
       printf("\n");
    }
    
}
int main(){
    int dizi[10]={0};
    uret(dizi);
    yazdir(dizi);
    return 0 ;
}
#include <stdio.h>
int kareAl(int a);
int main (){
    int a;
   printf("Sayi giriniz");
   scanf("%d",&a);
   int z= kareAl(a);
   printf("Yazdir  %d",z);
}
int kareAl(int a){
    
    return a * a;
}

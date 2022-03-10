#include <stdio.h>
int change (int a,int b);
int collide(int a,int b);
int minus(int a ,int b) ;
int add(int a ,int b) ;
int main()
{
    int r,h;
    printf("Sayi giriniz");
    scanf("%d",&r);
    printf("Sayi 2 giriniz");
    scanf("%d",&h);
    printf("Change %d",change(r,h));
    printf("Carpim %d",collide(r,h));
    printf("Add %d \n",add(r,h));
    printf("Minus %d \n",minus(r,h));
    return 0;
}
int change (int a,int b){
   int gecici;
   gecici=a;
   a=b;
   b=gecici;
   return printf("A sayisi %d,B sayisi %d",a,b);
}
int collide(int a,int b){
    return a*b;
}
int minus(int a ,int b) {
    return a -b;
}
int  add(int a ,int b) {
    return a+b;
}
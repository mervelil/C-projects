#include <stdio.h>
#define PI 3.124
alan(int r,int h);
cevre(int r);
int main()
{
    int r,h;
    printf("Yaricap giriniz");
    scanf("%d",&r);
    printf("Yukseklik giriniz");
    scanf("%d",&h);
    printf("Alan bul %d\n",alan(r,h));
    printf("Alan bul %d\n",cevre(r));
    return 0;
}
int alan(int a,int b){
    int aln=PI * a * a * b;
    return aln ;
}
int cevre(int r){
     int aln=2 * PI * r;
}

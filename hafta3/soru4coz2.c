#include <stdio.h>

enum tur {pop,rock,jazz,folk};

typedef struct  {
    char sarkiAd;
    char sarkici;
    short yil;
    enum tur sarkiTur; 
}sarki;

sarki sarkiOlustur(char a,char s,short yil,enum tur stur){
    sarki sarkilar;
    sarkilar.sarkiAd=a;
    sarkilar.sarkici=s;
    sarkilar.yil=yil;
    sarkilar.sarkiTur=stur;
    return sarkilar;
}

void printsarki(sarki s){

    printf("Sarki Adi: %c \n",s.sarkiAd);
    printf("Sarkici: %c \n",s.sarkici);
    printf("Sarki Yili: %d \n",s.yil);
    printf("Sarki Turu: %d \n",s.sarkiTur);
}

int main(){

sarki sarki1,sarki2,sarki3;
sarki1=sarkiOlustur('a','y',2000,pop);
sarki2=sarkiOlustur('i','h',2000,folk);
sarki3=sarkiOlustur('q','w',1980,rock);

printsarki(sarki2);

if (sarki3.sarkiTur==rock)
    printsarki(sarki3);

return 0;

}
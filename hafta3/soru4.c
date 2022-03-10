#include <stdio.h>

 enum tur {pop,rock,jazz,folk};

 struct sarki 
 {
  char sarkiAd  ;
  char sarkici ;
  short yil ;
  enum tur sarkiTur;
  // enum tur tursec
  // sec=pop; //enum secme declarated local scope
};

struct  sarki sarkiOlustur(char a ,char s, short yil,enum tur stur) {
  struct sarki sarkilar;
  sarkilar.sarkiAd= a ;
  sarkilar.sarkici=s;
  sarkilar.yil=yil;
  sarkilar.sarkiTur=stur;
  return sarkilar;
  }
 void printSarki(struct sarki s){
   printf("Song name  %c \n",s.sarkiAd);
   printf("Song singer %c \n " ,s.sarkici);
   printf("Song year %d \n",s.yil);
   printf("Song genre %d \n",s.sarkiTur);
 }

int main(){
    struct  sarki sarki1,sarki2,sarki3  ;
   sarki1=sarkiOlustur('a','y',2000,pop);
   sarki2=sarkiOlustur('a','y',4000,rock);
   sarki3=sarkiOlustur('a','y',9000,folk);
   printSarki(sarki1);

   if (sarki2.sarkiTur==rock)
      printSarki(sarki2);
   
    return 0 ;
}
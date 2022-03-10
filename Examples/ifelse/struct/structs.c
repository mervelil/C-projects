#include <stdio.h>
enum bf{sila,muso,bilo};
struct arkadas{
    char *arkadasAdi;
    char *arkadassoyad;
    short year;
    enum bf best;
};
struct  arkadas arkadasOlustur(char a[50],char b[50],short y,enum bf be){
     struct arkadas arkadaslar;
     arkadaslar.arkadasAdi=a;
     arkadaslar.arkadassoyad=b;
     arkadaslar.year=y;
     arkadaslar.best=be;
     return arkadaslar;
}
void printsarki(struct arkadas a){
    printf("Friends name %s \n",a.arkadasAdi);
    printf("Friends surname %s \n",a.arkadassoyad);
    printf("Friend year %d \n",a.year);
    printf("Friend best %d \n",a.best);
}

int main()
{
   struct arkadas a1,a2,a3;
   a1=arkadasOlustur("Sila","Yildiz",3,sila);
   a2=arkadasOlustur("Musa","Top",3,muso);
   a3=arkadasOlustur("Furkan","Dert",3,bilo);
 printsarki(a3);
 if (a2.best==muso)
 {
    printf("Musa is best friend");
 }
 
   

    return 0;
}

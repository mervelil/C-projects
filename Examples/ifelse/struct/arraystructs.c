#include <stdio.h>
enum birim{mudur,analiz,yazilim};
enum yer{ist,bursa,ankara};
struct personel
{
    char *ad;
    char *soyad;
    char *birim;
    int maas; 
    enum yer yerler;
    enum birim birimler;
};
struct personel personelOlustur(char a[],char b[],enum yer y,enum birim biri ,int m){
    struct personel personeller;
    personeller.ad=a;
    personeller.soyad=b;
    personeller.yerler=y;
    personeller.maas=m;
    personeller.birimler=biri;
    return personeller;
}
void printpersonel (struct personel personel){
    printf("personel adi=%s",personel.ad);
    printf("personel soyad=%s",personel.soyad);
    printf("personel yerler=%d",personel.yerler);
    printf("personel maas=%d",personel.maas);
}
struct personel maas(int maas []){
    struct personel personeller;
  //  personeller.maas=maas;
    int sum=0;
    for (size_t i = 0; i < 5; i++)
    {
      sum =sum+maas[i];
     
    }
    printf("Toplam maas %d",sum);
}


int main()
{
 struct personel p1,p2,p3,p4,p5;
 p1=personelOlustur("hasan","Ak",mudur,ist,1500);
 p2=personelOlustur("kemal","kaya",yazilim,ankara,1200);
p3=personelOlustur("ayse","beyaz",analiz,ist,1500);
 p4=personelOlustur("ali","Ak",mudur,ist,1400);
p5=personelOlustur("cem","mavi",mudur,ist,1500);
int maas[]={p1.maas,p2.maas,p3.maas,p4.maas,p5.maas};
printpersonel(p5);
struct personel p[]={p1,p2,p3,p4,p5};
//int personel maas(maas);
int sum=0;
for (size_t i = 0; i <p; i++)
{
    if (p[i].yerler==ist)
    {
       sum=p[i].maas+sum;
       printf("Fiyat toplamlari %d",sum);
    }
    
}

    return 0;
}

#include <stdio.h>

void yeniKayit(FILE *);
void goster(FILE *);
void guncelle(FILE *);
void kayitSil(FILE *);
void notListele(FILE *);

struct Ogrenci{
    int ogrNo;
    char adi[15];
    char soyadi[15];
    int notu;
};
int main(){

FILE *dosya;
dosya=fopen("ogrenci.dat","r+");
if(dosya==NULL)
    printf("dosya acilmadi\n");
else{
       /* yeniKayit(dosya);
        yeniKayit(dosya);
        yeniKayit(dosya);
        goster(dosya);
       guncelle(dosya);
       goster(dosya);
       kayitSil(dosya);
        goster(dosya);*/
        notListele(dosya);

}
   
fclose(dosya);
}

void yeniKayit(FILE *dosya){
struct Ogrenci ogr;
int ogrNum;
printf("Ogrenci numarasi giriniz:");
scanf("%d",&ogrNum);
fseek(dosya,(ogrNum-1)* sizeof(struct Ogrenci),SEEK_SET);

printf("adi,soyadi,notu giriniz:");
scanf("%s%s%d",ogr.adi,ogr.soyadi,&ogr.notu);
ogr.ogrNo=ogrNum;

fwrite(&ogr,sizeof(struct Ogrenci),1,dosya);

}

void goster(FILE *dosya){
struct Ogrenci ogr;
rewind(dosya);
printf("%5s%15s%15s%10s\n","Numara","Adı","Soyadı","Notu");
while(!feof(dosya)){

    fread(&ogr,sizeof(struct Ogrenci),1,dosya);
    if(ogr.ogrNo!=0&&!feof(dosya))
        printf("%5d%15s%15s%10d\n",ogr.ogrNo,ogr.adi,ogr.soyadi,ogr.notu);

}

}

void guncelle(FILE * dosya){
int ogrNum;
int YeniNot;
struct Ogrenci ogr;
printf("Düzenlenecek Ogrenci numarasi giriniz:");
scanf("%d",&ogrNum);
fseek(dosya,(ogrNum-1)* sizeof(struct Ogrenci),SEEK_SET);
fread(&ogr,sizeof(struct Ogrenci),1,dosya);

if(ogr.ogrNo==0)
    printf("Bilgi yok\n");

else  {
    printf("%5d%15s%15s%10d\n",ogr.ogrNo,ogr.adi,ogr.soyadi,ogr.notu);
    printf("Yeni notu giriniz:");
    scanf("%d",&YeniNot);
    ogr.notu=YeniNot;
    fseek(dosya,(ogrNum-1)* sizeof(struct Ogrenci),SEEK_SET);
    fwrite(&ogr,sizeof(struct Ogrenci),1,dosya);

}    
}

void kayitSil(FILE * dosya){

    struct Ogrenci ogr,bosOgrenci={0,"","",0};
    int ogrNum;
    printf("silinecek Ogrenci numarasi giriniz:");
    scanf("%d",&ogrNum);
    fseek(dosya,(ogrNum-1)* sizeof(struct Ogrenci),SEEK_SET);
    fread(&ogr,sizeof(struct Ogrenci),1,dosya);

    if(ogr.ogrNo==0)
      printf("Bilgi yok\n");

    else  {
    fseek(dosya,(ogrNum-1)* sizeof(struct Ogrenci),SEEK_SET);
    fwrite(&bosOgrenci,sizeof(struct Ogrenci),1,dosya);
    }
}
void notListele(FILE * dosya){
struct Ogrenci ogr;
int girilenNot;
printf("Hangi not üzeri");
scanf("%d",&girilenNot);
rewind(dosya);
printf("%5s%15s%15s%10s\n","Numara","Adı","Soyadı","Notu");
while(!feof(dosya)){

    fread(&ogr,sizeof(struct Ogrenci),1,dosya);
    if(ogr.ogrNo!=0&&!feof(dosya))
        if(ogr.notu>girilenNot)
            printf("%5d%15s%15s%10d\n",ogr.ogrNo,ogr.adi,ogr.soyadi,ogr.notu);

}

}
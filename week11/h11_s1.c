#include <stdio.h>
#include <stdlib.h>

void dosyaKarakterOku(char *dosyaAdi);
void dosyaKarakterYaz (char *dosyaAdi, char c);

int main(int argc, char *argv[] ){
    if (argc<2)
        printf("Yeterli argüman yok");
    else if(argc==2)
        dosyaKarakterOku(argv[1]);      
    else if (argc==3){
        dosyaKarakterYaz(argv[1],argv[2][0]);
        dosyaKarakterOku(argv[1]); 
    }


    return 0;
}

void dosyaKarakterOku(char *dosyaAdi){

    FILE *dosya;
        dosya=fopen(dosyaAdi,"r");
        if (dosya==NULL){
            printf("Dosya açılmadı");            
        }
        while(!feof(dosya))
            putchar(fgetc(dosya));

    fclose(dosya);
}

void dosyaKarakterYaz (char *dosyaAdi, char c){

    FILE *dosya;
    if((dosya=fopen(dosyaAdi,"a"))==NULL ){
        printf("Dosya açılmadı");
        exit(1);
    }
    fputc(c,dosya);
    fclose(dosya);
}
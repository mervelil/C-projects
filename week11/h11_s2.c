#include <stdio.h>
#include <stdlib.h>

int * dosyaFrekansOku(char *dosyaAdi);

int main(int argc, char *argv[]){
    int *dizi;
    int i;

    if(argc<2)
        printf("eksik argüman");
    else {
        dizi=dosyaFrekansOku(argv[1]);  
        for (i=0;i<26;i++)
            printf("%c - %d  ",'a'+i,dizi[i]);      
    }

    
}

int *dosyaFrekansOku(char *dosyaAdi){

    FILE *dosya;
    char c;
    int *frekans=(int *) calloc(26,sizeof(int));

    dosya=fopen(dosyaAdi,"r");
    if(dosya==NULL){
        printf("dosya acilmadi");
        exit(1);   
    }
    while(!feof(dosya)){
        c=fgetc(dosya);
        frekans[c-'a']++;
    }  

    fclose(dosya);
    return frekans;  
}
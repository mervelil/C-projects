#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *dosya1,*dosya2;
    char c;
    if (argc!=3){

        printf ("argümanlar hatali \n");
        printf("ilki hedef ikincisi kaynak");        
        exit(1);
    }

    if((dosya1=fopen(argv[1],"w"))==NULL)
        printf("hedef dosya acilmadi");

    if((dosya2=fopen(argv[2],"r"))==NULL)
        printf("kaynak dosya acilmadi"); 

    while(!feof(dosya2)){
        c=fgetc(dosya2);
        if(!feof(dosya2))
            fputc(c,dosya1);
    }          
    fclose(dosya1);
    fclose(dosya2);
}


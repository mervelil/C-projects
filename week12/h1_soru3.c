#include <stdio.h>

int main(){

FILE *dosya;
char ogrAdi[20],adi[20];
int num,i,ogrNum;

dosya=fopen("isim.txt","a+");
if(dosya==NULL)
    printf("dosya acilmadi\n");
else {
    for(i=0;i<1;i++) {

        printf("Adi:");
        scanf("%s",ogrAdi);
        printf("Numara:");
        scanf("%d",&num);
        fprintf(dosya,"%s\t%6d\n",ogrAdi,num);
        printf("\n");
        
    }
    rewind(dosya);
    while(fscanf(dosya,"%s%d",adi,&ogrNum)!=EOF)
        printf("%s\t%6d\n",adi,ogrNum);

}    

fclose(dosya);
}
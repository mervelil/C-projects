#include <stdio.h>
#include <string.h>

char *strEkle(char *hedef,const char *kaynak){
strcpy(hedef+strlen(hedef),kaynak);
return hedef;

}

int main(){

    char str1[5]="izmir";
    char str2[10]="adana";
    strEkle(str1,str2);

    printf("%s\n",str1);
    printf("%s",str2);

}
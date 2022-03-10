#include <stdio.h>
#include <string.h>
#define N 6
int main() {

    char sehir[N][10]={"istanbul","samsun","ankara","edirne","kars","antalya"};
    int i,j;
    char gec[10];

    for(i=0;i<N-1;i++)
       for(j=0;j<N-1;j++)
           if(strcmp(sehir[j],sehir[j+1])>0) {
              strcpy(gec,sehir[j]);
              strcpy(sehir[j],sehir[j+1]);
              strcpy(sehir[j+1],gec);
           }
    for(i=0;i<N;i++){
        printf("%s \n",sehir[i]);
    }

}
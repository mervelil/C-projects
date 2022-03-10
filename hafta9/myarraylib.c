#include "myarraylib.h"
#include <stdio.h>
#include <stdlib.h>
#include "time.h"

float *diziOlustur(int n) {
   float *v = (float *)malloc( n * sizeof(float));
   return v;
}

void diziDoldur(float *v, int n) {
   int i;
   srand(time(0));
   for (i = 0; i < n; i++)
      v[i] = (rand() % 10) + 1;
}

int **ikiBuyutDiziOlusutur(int satir,int sutun){
	
	int i;
	int **dizi=malloc(satir*sizeof(int *));
	for(i=0;i<satir;i++)
		dizi[i]=malloc(sutun*sizeof(int));
	return dizi;	
}

void diziyazdir(float *v, int n) {
   int i;
   for (i = 0; i < n; i++)
      printf("%.2f ", v[i]);
   puts("");
}

void ikiBoyutdiziDoldur(int **d, int satir, int sutun) {
   int i,j;
   srand(time(0));
   for (i = 0; i < satir; i++)
   		for (j = 0; j < sutun; j++)
      		d[i][j] = (rand() % 10) + 1;    		
      		
}
void ikiBoyutdiziYazdir(int **d, int satir, int sutun) {
   int i,j;
   srand(time(0));
   for (i = 0; i < satir; i++)
   		for (j = 0; j < sutun; j++)
      		printf("%d  ",d[i][j]) ;    		
      		
}

float topla(float *v, int n) {
   int i;
   float toplam = 0.0;
   for (i = 0; i < n; i++)
      toplam += v[i];
   return toplam;
}










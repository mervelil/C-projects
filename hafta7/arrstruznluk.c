#include <stdio.h>


int main()
{
   char *iller [20] = { "Sinop", "Mersin", "Mardin", "Kastamonu" };
   char *q;
    q=uzunlukbul(**iller);
    return 0;
}
char* uzunlukbul(char* iller[20]){
    char *ptr;
    ptr=iller;
    size=sizeof(iller)/sizeof(int*);
    int  uzunluk=0;
    for (int i = 0; i <size; i++)
    {
        while (iller[20]!='\0')
     {
      *(ptr++);
      uzunluk++;   
     // return *iller;
     }
     printf("Uzunluğu  %d",uzunluk);
    }
    
   
     
}
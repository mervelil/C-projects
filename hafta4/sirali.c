#include <stdio.h>
#include <string.h>
int siraliMi(int ab[],int sayi);
int main()
{
     int  a[]={1,8,3,5};
     printf("%d",siraliMi(a,4));
    return 0;
}
int siraliMi(int array[],int boyut){
 
    int i;
    int art=1,az=2;
    for ( i = 1; i <boyut; i++)
    {
       if (array[i]<array[i-1])
       {
         art=-1;
       }
       if(array[i]>array[i-1]){
           az=-1;
       }
       if(art==-1&&az==-1)
          return 0;
       else if(art==1)
          return az;
       else 
       return art;
    }
    }
    


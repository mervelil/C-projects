#include <stdio.h>
#include <string.h>
int main()
{
    char k[]="kocaeli";
    char s[]="sakarya";  
    for (int i = 0; i <strlen(k); i++) {
     int ayni=0;    
       for (int j = 0; j <strlen(s); j++)
      {
           if (k[i]==s[j])
          {
           ayni=1;
          }      
      } 
      if(ayni==0){
          printf("%2c",k[i]);
      } 
    }
    printf("\n");
    return 0;
    }
      
      
     
    
    
    
       
       
    
   


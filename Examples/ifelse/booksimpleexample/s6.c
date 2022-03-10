#include <stdio.h>
int main()
{
    char c;
    printf("t ya da j char giriniz\n");
    scanf("%c",&c);
     if (c=='t')
     {
       printf("Turkey");
     }
     else if(c=='j') {
       printf("Japon");  
     }
     
    return 0;
}

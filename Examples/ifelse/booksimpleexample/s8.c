#include <stdio.h>
int main()
{
    int f;
    printf("Fiyati giriniz");
    scanf("%d",&f);
    if(f>100){
        f=f-(f*10/100);
        printf("indirimli fiyat %d",f);
    }
    else{
        printf("indirim yoko");
    }
    
    return 0;
}

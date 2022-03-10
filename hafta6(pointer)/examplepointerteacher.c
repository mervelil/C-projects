#include <stdio.h>
void passByReference(int *num);
int main(void)
{
    int a =25;
    printf("Fonksiyonun çağırılmadan önceki hali %d ",a);
    int *pA=&a;
    *pA=&a;
    passByReference(&a);
    printf("Fonksiyonun çağırılmadan önceki hali %d ",a);
    int array[]={2,3,5,2};
    int *p=array;
    printf("Arrayin taban adresi %x",array);
    printf("Arrayin [0]adresi %x\n",&array[0]);
    p +=2;
    *p=34563;
    printf("sayilar[2]=%d\n",array[2]);
    char ch[5]="alive";
    char *pCh=ch;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("ch =%x \n ",&ch[i]);
        pCh++;
    }
    

    return 0;
}
void passByReference(int *num){
 *num=*num * *num;
}


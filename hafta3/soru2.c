#include <stdio.h>

void azalt1();
void azalt2();


int main()
{
    azalt1();
    azalt1();
    azalt1();
    printf("------------");
    azalt2();
    azalt2();
    azalt2();
    return 0;
}
void azalt1() {
int a=10;
  a--;
  printf("%d\n",a);
} 
void azalt2(){
static int b =2; //sorıda zaten yerel tanımla demiş
  b--;
  printf("%d ",b); //print de b yerine b-- yazarsan 1 -1 -2 yazar
}

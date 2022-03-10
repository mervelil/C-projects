#include <stdio.h>
int findResistence(float a,float b);
int main()
{
    float a=3.47,b=20.45;
    printf(findResistence(a,b));
    return 0;
}
int findResistence(float d1,float d2){
  float res=(d1+d2)/(d1*d2);
  printf("Es değer direnc = %.2f",res);

}



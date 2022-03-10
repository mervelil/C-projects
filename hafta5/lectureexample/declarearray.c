#include <stdio.h>
int main()
{
    int i ;
    int n[10];
    for ( i = 0; i < 10; i++)
    {
        n[i]=0;
    }
    printf("%s%13s\n","Element","Value");
  for ( i = 0; i < 10; i++)
  {
       printf("%7d%13d\n",i,n[i]);
  }
  int j =0;
  int marks[5];
  marks[0]=80;
  marks[1]=50;
  marks[2]=70;
  marks[3]=90;
  marks[4]=100;
  for ( j = 0; j < 5; j++)
  {
   printf("%d\n",marks[j]);
  }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char *str = "arrt";
  diziYazdir(str);
  return 0;
}
void diziYazdir(char *str)
{
  char *arr = "array";
  int length = 0;
  str = arr;
  for (int i = 0; i < sizeof(arr); i++)
  {
    printf(" %c", *str++);
  }
}
// #include <stdio.h>
// #include <string.h>
//  void diziYazdir(char *dizi);
// int main(int argc, char const *argv[])
// {
//     char dizi[]="artic";
//     diziYazdir(dizi);
//     return 0;
// }
//  void diziYazdir(char *dizi){
//  while (*dizi!='\0')
//  {
//   printf("%c",*dizi);
//   ++dizi;
//  }
//  char s[100]; //daha dogru  eleman değiştirelibilir.
//  char  *s1="ankara"; //boyle yaparsak arraydaki elemanları değiştiremezsin dikkat et.
 
// //      int *p;
// //      char ch;
// //  p=dizi[0];
// // for (int i = 0; i < sizeof(dizi); i++)
// // {
// //    printf(" %d   %c",*(p+1));
// // }
//  }

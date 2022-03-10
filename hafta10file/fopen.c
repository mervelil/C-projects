#include <stdio.h>
void main (void)
{
  FILE *fp1;
  int id1;
  if ((fp1 = fopen ("dosya1.txt", "w")) == NULL) {
      printf("Dosya açma hatası!");
      exit(1);
  }
  for (id1=0; id1<10; id1++) fputc ('a', fp1); // o kadar a koy demek
  fclose(fp1);
  if ((fp1 = fopen ("dosya1.txt", "r")) == NULL) {
      printf("Dosya açma hatası!");
      exit(1);
  }
  for (id1=0; id1<10; id1++) printf("%c", fgetc(fp1));  
  fclose(fp1);
}

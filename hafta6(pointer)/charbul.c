#include <stdio.h>
char *chrBul(char *str, int ch);
int main()
{
char s[100];
char *p, ch;

printf("bir yaz� giriniz : ");
gets(s);
printf("yaz� i�inde arayaca��n�z karakteri giriniz : ");
scanf("%c", &ch);
p = chrBul(s, ch);
if (p == NULL)
printf("aranan karakter bulunamad�\n"); 
else{

printf("Adresi: %p",p);
printf("karakterler: %s",p);
printf("Sira: %d", p-s);
}
return 0;
}
char *chrBul(char *str, int ch)
{
while (*str != '\0') 
{
if (ch == *str)
return str;
++str;
}
if (ch == '\0')
return str;
return NULL;
}

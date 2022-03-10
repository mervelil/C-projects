#include <stdio.h>

int main()
{
    int x=20,y=3;
    char k;
    printf("Karakteri giriniz\n");
    scanf("%c",&k);
    
    switch (k)
    {
    case '^':
        printf("x sayisinin küpü %d",(x*x*x));
        break;
    case '%':
        printf("x sayisinin y sayisinin modu %d",(x%y));
        break;
    default:
        break;
    }
    return 0;
}

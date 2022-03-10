#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

int i;
char *s;
for (i=1;i<argc;i++){
    s=strrev(argv[i]);
    printf("%s\t",s);
}

return 0;
}
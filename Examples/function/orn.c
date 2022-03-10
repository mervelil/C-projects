#include <stdio.h>
#define TOPL a,b,c
#define YAZDIR(a) printf("cevap %d dir /n",a)
int main(){
    int a,b,c;
    a=5,b=8;
    c=a+b;
    YAZDIR(c);
    int no;
    void pespese(int no);
    pespese(1);
    return 0 ;

}
void pespese(int no ){
    if(no<=14) {
        printf("%d",no);
        pespese(no+4);
    }
    return;
}
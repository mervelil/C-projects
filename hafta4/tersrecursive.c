#include <stdio.h>
int ters(int sayi,int tersi);
int main(){
    int sayi=123;
    printf("tersi %d",ters(sayi,0));
    return 0;
}
int ters(int sayi,int tersi){
    if(sayi==0){
        return tersi;
    }else{
        return ters(sayi/10,tersi*10+sayi%10);
    }
}
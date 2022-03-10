#include <stdio.h>
void fun1(int num){
    if(num==0){
        return ; //return 0 yaparsan tekrar 2 kere basıyo
    }else 
   printf("\n Number is %d",num);
   
   return fun1(num-1);
}
int main(){
    fun1(4);
    return 0 ;
}
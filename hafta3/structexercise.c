#include <stdio.h>

enum tur{science,data,cs,writing};

struct area{
   char department;
   char name;
   short year;
   enum tur stur;
};
struct area createpersons(char d,char n,short y,enum tur s){
   struct area persons; //return dondurecek bunları bu nedenle turu bilmesi icin declaration yapmmayı unutma ek olarak persondan kısı bilgilwerine ulascaksın
   persons.department=d;
   persons.name=n;
   persons.year=y;
   persons.stur=s;
   return  persons;

}
void printArea(struct area p){
    printf("Department is %c",p.department);
    printf("Name is %c",p.name);
    printf("Year is %d",p.year);
    printf("Type of  dep is %d",p.stur);
}
int main(){
    struct area a1,a2,a3,a4;
  
    a1=createpersons('C','M',2001,cs);
    a2=createpersons('S','B',2201,science);
    a3=createpersons('D','M',2021,cs);
    a4=createpersons('W','A',2081,writing);
      printArea(a2);
   if(a1.stur==cs)
   printArea(a1);

    
}
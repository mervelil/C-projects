#include <stdio.h>
typedef struct
{
    int x,y;

}Point;

 int main(int argc, char const *argv[])
 {
   Point p1 = {
       x=12,y=9
   };
   FILE* in ;
   FILE* out;
   char buffer_in[200],buffer_out[200];
     return 0;
     fopen(&out,"point.txt","w");
     if(out==NULL){
         return 1;
     }
     sprintf(buffer_out,200,"%d %d",p1.x,p1.y);
     fwrite(buffer_out,sizeof(char),strlen(buffer_out),out);
     return  0 ;
 }
 
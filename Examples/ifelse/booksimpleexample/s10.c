#include <stdio.h>
int main()
{
    int mid,fin;
    int note;
    printf("Mid Notunu giriniz \n ");
    scanf("%d",&mid);
    printf("Final Notunu giriniz\n ");
    scanf("%d",&fin);
    note=(mid*40/100)+(fin*60/100);
    printf("Not %d",note);
    if (note<=100&&note>80)
    {
      printf("A aldiniz %d",note);
    }
    else if (note<80&&note>60)
    {
      printf("B aldiniz %d",note);
    }
    else if (note<60&&note>50)
    {
      printf("C aldiniz %d",note);
    }
    else if(note<50) {
   
      printf("F aldiniz %d",note);
    
    }

    
    return 0;
}

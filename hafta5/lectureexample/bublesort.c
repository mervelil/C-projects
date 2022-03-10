#include <stdio.h>
void main(){
int arr[10]={10,9,7,101,23,44,12,78,34,23};
Bubble_sort(arr);
}
void Bubble_sort(int a[])
{
    int j,i,temp;
for ( i = 0; i <10; i++)
{
    for (j = i+1; j<10; j++)
    {
      if ((a[j]<a[i]))
      {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;

      }
      
    }
    
}
printf("Printing sorted element\n");
for ( i = 0; i < 10; i++)
{
    printf("%d\t",a[i]);
}


} 



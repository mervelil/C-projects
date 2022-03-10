#include <stdio.h>
#include <string.h>  
// int size;
// int findMinIndex(int array[], size);
// int findMaxIndex(int[] array, size);
// void maxMinChar(char sentence[], size);
 
int findMinIndex(int array[], int size){
  char string[] = " Hello world, welcome to the java programming lesson ";
  int i, j, min, length = strlen(string); 
  char minChar = string[0];  
    int frequency[length]; 
     for(i = 0; i < length; i++) {  
        frequency[i] = 1;  
        for(j = i+1; j < length; j++) {  
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {  
                frequency[i]++;  
 
                string[j] = '0';  
            }  
        }  
    }   
     min = frequency[0];  
    for(i = 0; i < length; i++) {  
        if(min > frequency[i] && frequency[i] != '0') {  
            min = frequency[i];  
            minChar = string[i];  
        }  
          printf("Minimum  character: %c\n", minChar); 
}
return minChar;
}
int findMaxIndex(int array[], int size){
  char string[] = " Hello world, welcome to the java programming lesson ";
  int i, j, max, length = strlen(string); 
  char maxChar = string[0];  
    int frequency[length]; 
     for(i = 0; i < length; i++) {  
        frequency[i] = 1;  
        for(j = i+1; j < length; j++) {  
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {  
                frequency[i]++;  
 
                string[j] = '0';  
            }  
        }  
    }   
     max = frequency[0];  
    for(i = 0; i < length; i++) {  

        if(max > frequency[i] && frequency[i] != '0') {  
            max = frequency[i];  
            maxChar = string[i];  
        }  
          printf("Maximum  character: %c\n", maxChar); 
}
return maxChar;
}
void maxMinChar(char sentence[], int size) {
     char string[] = "Hello world, welcome to the java programming lesson "; 
    
     
}
int main()
 {
    char string[] = " Hello world, welcome to the java programming lesson ";
   
}

#include <stdio.h>

int main(int argc, char *argv[]){	
  printf("toplam arguman sayisi = %d\n",argc);	
	char *k = *(argv+1);
	char ch[] = {'a','e','o','u','i'}; 	
	int i = 0,m = 0, durum = 0;
	int counter = 0;
	
	while(*(k + i) != '\0'){
		for (m = 0; m < 5; m++){
			if (*(k + i) != ch[m])
				durum = 0;
			else{
				durum = 1;	
				break;
			}				
		}
		if (durum == 0){			
			counter++;
		}			 
                           i++;
	}
	
	printf("sessis harflerin sayisi = %d\n",counter);
	return 0;	

}
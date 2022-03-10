#include <stdio.h>

int main(int argc, char *argv[]){	
	printf("toplam arguman sayisi = %d\n",argc);	
	char *k = *(argv+1);
	char *ch = *(argv+2);
	int i = 0;
	int counter = 0;
	while(*(k + i) != '\0'){
	     if (k[i] == ch[0])
	       counter++;
                             i++;
	}
	printf("aranan karakterin adedi = %d\n",counter);
	return 0;	
}

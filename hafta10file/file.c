#include <stdio.h>
int main()
{
FILE *outputfile ,*infile;
int b=5,f;
float a=13.45, c =6.68 ,e ,g;
outputfile=fopen("testdata.txt","w");
fprintf(outputfile,"%f %d %f ",a,b,c);
fclose(outputfile);
infile=fopen("testdata.txt","r");
fscanf(infile,"%f %d %f",&e,&f,&g);
printf("%f %d %f \n",a,b,c);
printf("%f %d %f \n",e,f,g);
    return 0;
}

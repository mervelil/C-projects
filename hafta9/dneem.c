void yapal(FILE *myFile,FILE *myFile2){

    //read file into array
    uint8_t *numberArray;
   uint8_t *numberArray2;
    uint8_t* pnumberArray=numberArray;
    uint8_t*  pnumberArray2=numberArray2;
  // pnumberArray=pnumberArray+1*sizeof(int);
  // pnumberArray2=pnumberArray2+1*sizeof(int);
    int i;
    int j;
    int a;
    int b;

 uint8_t  k=0;
    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (i = 0; i < 1; i++){
       pnumberArray=pnumberArray+1*sizeof(int);
         fscanf(myFile, "%d,",&pnumberArray);
    }

    for (i = 0; i < 1; i++){
          pnumberArray=pnumberArray+1*sizeof(int);
        printf("Number is: %u\n\n",*pnumberArray);
       
     a=*(pnumberArray); 
    }
     
     
    for (j = 0; j < 1; j++){
       pnumberArray2=pnumberArray2+1*sizeof(int);
         fscanf(myFile2, "%d,", &pnumberArray2 );
    }
    //23453456789
    //23453456789


    for (j= 0; j < 1; j++){
        pnumberArray=pnumberArray+1*sizeof(int);
        printf("Number is file 2: %d\n\n",*pnumberArray2);
      b= *(pnumberArray2);    
    }
  
   k= a +b;
    printf("sonuc text %u",k);
    fclose(myFile);
    fclose (myFile2);
    
}
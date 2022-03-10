#include <stdio.h>
struct clientData { 
   int acctNum;
   char lastName[ 5 ];
   char firstName[ 6 ];
   double balance;
};

int main()
{ 
   int i;
   struct clientData blankClient = { 0, "", "", 0.0 };
   FILE *cfPtr;
   	printf("sizeof struct clientData = %d\n",sizeof(struct clientData));

   if ( ( cfPtr = fopen( "dosya2.txt", "w" ) ) == NULL )
      printf( "File could not be opened.\n" );
   else { 

      for ( i = 1; i <= 5; i++ )
         fwrite( &blankClient, 
                sizeof( struct clientData ), 1, cfPtr );
	
	printf("dosyadaki konum = %d\n",ftell(cfPtr));

      fclose ( cfPtr );
   }

   return 0;
}

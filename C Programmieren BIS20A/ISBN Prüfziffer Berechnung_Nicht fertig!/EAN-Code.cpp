#include <stdio.h>



    int  main(int argc,char*argv[]) {
    printf("Bitte geben Sie die Kreditkartennummer ein: ");
     
	 
      char nummer[16];
      fgets(nummer,16,stdin);
	  
      printf("%s\n\n\n\n",nummer);
      printf("Ihre Kreditkartennummer lautet:  \n");
      
      for (int i=0; i<15;i++){
          nummer[i] -='0';
          printf("Test1: %i\n", nummer[i]);
      }
      int summe;
      
      for(int i=0; i<15; i=i+2) {
            int dopp = 2* nummer[i];
     
            if (dopp > 9) {
               summe = summe + (dopp % 10) + 1;
               }
            else {
                 summe = summe +dopp;
            }  
            printf("Test2: %i\n", summe);
      }
      
              
      
      getchar();
      getchar();
      getchar();
      return 0;  
      }
   
		

	
	

	
	

	

		
	

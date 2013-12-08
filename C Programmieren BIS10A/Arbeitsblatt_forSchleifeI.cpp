#include<stdio.h>


main()
{
      printf("Arbeitsblatt for-Schleife I");
      printf("\nZaehlergesteuerte Schleife");
      int i, u;
      for(i=0; i < 5 ; i=i+1)
      {
               printf("\nDer neueste Wert betraegt: %i",i);
               }
      
      printf("\n\nKopfgesteuerte Schleife");
      u = 0;
      while(u<5)
      {
                
                printf("\nDer neueste Wert betraegt: %i",u);
                u++;
               }
      
      getchar();
      getchar();     
}

#include<stdio.h>
/* 
# -> Befehl für den Kernprozessor
std = Standard
io = Input / Output
h = Headerdaten
#include <stdlib.h> (enthält System("Pause") 
*/

main()
{
      printf("Hello World!");
      printf("\nBitte geben Sie eine Zahl ein: ");
      
      int Zahl1;
      scanf("%i",&Zahl1);
      printf("Ihre Zahl war: %i", Zahl1);
      
      printf("\nBitte geben Sie eine zweite Zahl ein: ");
      int Zahl2;
      scanf("%i",&Zahl2);
      printf("Die zweite Zahl war: %i", Zahl2);
      
      getchar();
      getchar();      
}


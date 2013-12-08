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
      
      float Zahl1, Zahl2, Ergebnis;
      // Eingabe 1
      scanf("%f",&Zahl1);
      printf("Ihre Zahl war: %5.2f", Zahl1);
      // Eingabe 2
      printf("\nBitte geben Sie eine zweite Zahl ein: ");
      scanf("%f",&Zahl2);
      printf("Die zweite Zahl war: %5.2f", Zahl2);

      Ergebnis = Zahl1 + Zahl2;
      // Ergebnis
      printf("\n\nDas Ergebnis ist: %5.2f", Ergebnis);
      
      Ergebnis = Zahl1 - Zahl2;
      // Ergebnis
      printf("\n\nDas Ergebnis ist: %5.2f", Ergebnis);
      getchar();
      getchar();     
}


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
      float Eingabe1, Eingabe2, Ergebnis;
      char wahl;
            
      printf("Taschenrechner\nSie koennen den Taschenrechner mit der Eingabe 'xxx' beenden.");
      
        
      do{ 
          printf("\nBitte geben Sie eine Rechenaufgabe mit Operator ein: ");
          scanf("%f",&Eingabe1);
          scanf("%c",&wahl);
          scanf("%f",&Eingabe2);
          
          printf("\nIhre Zahl war: %5.2f", Eingabe1);
          printf("\nIhre Operator war: %5.2c", wahl);
          printf("\nDie zweite Zahl war: %5.2f", Eingabe2);
                        
          if(wahl == '+')
          Ergebnis = Eingabe1 + Eingabe2;
            
            else if(wahl == '-')
            Ergebnis = Eingabe1 - Eingabe2;
            
            else if(wahl == '*')
            Ergebnis = Eingabe1 * Eingabe2;
            
            else if(wahl == '/')
            Ergebnis = Eingabe1 / Eingabe2;
            
            else
            printf("\n\n\n Falscher Operator!!!");
                
          printf("\n\nDas Ergebnis ist: %5.2f", Ergebnis);
          Ergebnis = 0;
          
      }while((Eingabe1 != 'x')  && (wahl !='x') && (Eingabe2 != 'x'));
      
      getchar();
      getchar();       
   
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char function_eingabe_saved
// Unterfunktion für die Abspeicherung der Eingabe, bzw. Zuweisung der Eingabe.
int main(int argc, char *argv[]) {
    
    char eingabe[4][4];
	char tabelle[4][4];
	char wert = 0;
    int x,y,z;
/*	for(y=z=0; y < 3; y++) {
    	for(x=0; x < 3; x++) {
			tabelle[y][x] = 49+x+y+z;
			printf("| %c", tabelle[y][x]);			
		}
        printf("\n");
    	for(x=0; x < 3; x++) {
			printf("---");
		}
        printf("\n");
        z=z+2;
	}	
	*/
	
	/* Hier wird die Tabelle erzeugt, die Eingabe/Wertezuweisung findet 
    dann in der Unterfunktion statt, damit jede Zuweisung abgespeichert wird.*/    
	while(wert != 'C') // Am Ende kommt eine weitere Bedingung hinzu, Feld 0.0 == X
    {
        
        printf("Warte auf Eingabe: ");
        scanf("%c",&wert); 
        getchar();
        printf("\n");
        for(y=z=0; y < 3; y++) {
        	for(x=0; x < 3; x++) {
        		tabelle[y][x] = 49+x+y+z;
        		if (tabelle[y][x] == wert) {
        		  eingabe[y][x] = 'X';
        		  printf("| %c", eingabe[y][x]);
                }else  
                  printf("| %c", tabelle[y][x]);			
        	}
            printf("\n");
        	for(x=0; x < 3; x++) {
        		printf("---");
        	}
            printf("\n");
            z=z+2;
        }        
    }
    
    
	getchar();     		
	return 0;
}

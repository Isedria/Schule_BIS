#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[]) {
    char eingabe[14];
    char ato = '0';
    int berechnung[14];
    int gNberechnung = 0;
    int uNberechnung = 0;
    
    
    printf("Geben Sie bitte eine 15 stellige Nummer ein: %c", eingabe[14]);
    fgets (eingabe, 16, stdin);
    
    for (int i = 0; i < 15; i++) {
        berechnung[i] = eingabe[i] - '0';
        if (i%2 == 0) {               
          // printf("Ungerade Zahl: %c\n", eingabe[i] + '0');
           if (berechnung[i]*2 >= 9) {
                          int zwei_p, erste_stelle, zweite_stelle;
                          zwei_p = uNberechnung + (berechnung[i]*2);
                          zweite_stelle = 10 - zwei_p;                               
                          uNberechnung                 
           uNberechnung = uNberechnung + (berechnung[i]*2);
           printf("Ungerade Zahl (verdoppelt): %i\n", uNberechnung);
           }
   /*     else { 
            gNberechnung = gNberechnung + eingabe[i];
            printf("Gerade Zahl: %i\n", gNberechnung);
           }*/;
}       
    for (int i = 0; i<15; i++) {
        printf("Ausgabe: %c\n", eingabe[i]);       
    
    }        
    
    getchar();     		
	return 0;
}

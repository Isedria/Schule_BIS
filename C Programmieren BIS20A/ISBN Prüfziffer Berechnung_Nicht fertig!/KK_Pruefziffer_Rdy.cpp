#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char eingabe[14];
    int berechnung[14];
    int gNberechnung = 0;
    int uNberechnung = 0;
    int gesamt;
        
    printf("Geben Sie bitte eine 15 stellige Nummer ein: %c", eingabe[14]);
    fgets (eingabe, 16, stdin);
    
    for (int i = 0; i < 15; i++) {
        berechnung[i] = eingabe[i] - '0';
        if (i%2 == 0) {
           if (berechnung[i]*2 >= 10) {
                int zwei_gesamt, erste_stelle, zweite_stelle;
                
                zwei_gesamt = (berechnung[i]*2);
                zweite_stelle = zwei_gesamt-10;                               
                uNberechnung = uNberechnung + zweite_stelle + 1; 
                zwei_gesamt = 0;
                zweite_stelle = 0;
                }
           else {                              
                uNberechnung = uNberechnung + (berechnung[i]*2);                
                }
           }
        else { 
            gNberechnung = gNberechnung + berechnung[i];
            };
    }       
    gesamt = gNberechnung + uNberechnung;        
    if (gesamt >= 10) {
       for (int i = gesamt; i > 10; i=i-10) {
           gesamt = gesamt -10;     
       }
    };
    if (gesamt < 10) {
       int diff_berechnung;
       for (int i = 1; gesamt < 10; i++) {
           gesamt = gesamt + 1;
           diff_berechnung = i;      
           }
           gesamt = diff_berechnung;
    };
    printf("Pruefziffer lautet: %i\n", gesamt);
    printf("Kreditkartennummer: ");
    for (int i = 0; i<15; i++) {
        printf("%c", eingabe[i]);
    };
    printf("%i", gesamt);

   	getchar();             
   	getchar();     		
	return 0;
}

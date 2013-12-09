#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[]) {
    char eingabe[14];
    char ato = '0';
    
    
    printf("Geben Sie bitte eine 15 stellige Nummer ein: %c", eingabe[14]);
    fgets (eingabe, 15, stdin);
// '8' - '0' = 8
    for (int i = 0; i < 15; i++) {
        //eingabe[i]= (eingabe[i] - 48);
        if (i%2 == 1) {
           eingabe[i]= eingabe[i]*2;    
           printf("Ungerade Zahl: %c\n", eingabe[i]);
           }
        else { 
            printf("Gerade Zahl: %c\n", eingabe[i]);
           };
 /*       if (i%2 == 0) {
           printf("Gerade Zahl: %c\n", eingabe[i]);
           eingabe[i]= eingabe[i] - ato;
           
           }*/
}       
    for (int i = 0; i<15; i++) {
        printf("Ausgabe: %c\n", eingabe[i]);       
    
    }        
    getchar();  
    getchar();     		
	return 0;
}

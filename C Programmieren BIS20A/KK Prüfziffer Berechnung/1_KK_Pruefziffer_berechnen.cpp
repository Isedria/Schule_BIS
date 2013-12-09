#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[]) {
    char eingabe[14];
    
    printf("Geben Sie bitte eine 15 stellige Nummer ein: %c\n", eingabe[14]);
    fgets (eingabe, 15, stdin);
    
    for (int i = 0; i < 15; i++) {
        if (eingabe[i]%2 == 1) {
           printf("Ungerade Zahl: %c\n", eingabe[i]);
           };
        if (eingabe[i]%2 == 0) {
           printf("Gerade Zahl: %c\n", eingabe[i]);
           }
    }        
    getchar();  
    
    getchar();  
    
    getchar();     		
	return 0;
}

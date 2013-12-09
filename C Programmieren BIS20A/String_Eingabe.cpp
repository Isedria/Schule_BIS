#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[]) {
	char satz[20];
	fgets(satz, 20, stdin);
	printf("Sie haben %s eingegeben. \n\n\n\n\n", satz);
	
	int i = 0;
	while (satz[i] != '\0') {
		/*if (satz[i] > 'Z') { // 'Z' = ACSII "90"
			printf("%c", satz[i] - 32);
		}*/
		
		if (satz[i] >= 'A' && satz[i] <= 'Z'){
			printf("%c", satz[i] + 32);
		}
		else {printf("%c", satz[i]);}
		i++;	
	}
	printf("\nLaenge ist: %i\n", strlen(satz));
	printf("Von uns gezaehlt: %i",i);
	
    getchar(); 	
    getchar();     		
	return 0;
}

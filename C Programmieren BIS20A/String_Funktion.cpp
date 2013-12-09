#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char big(char *x, int size)	{
     char satz=x[0], i;
     for(i=0; i<size; i++) {         
              if (satz[i] > 'Z') { // 'Z' = ACSII "90"
                 satz[i] - 32;
              }
              i++;
	}
	return satz[i];
}

int main(int argc, char *argv[]) {
	char satz[50];
	printf("%s\n\n\n\n\n", satz);
	
	int i = 0;

	printf("%c", big(satz,50);
	printf("\nLaenge ist: %i\n", strlen(satz));
	printf("Von uns gezaehlt: %i",i);
			
	return 0;	
/*char small   {
int i = 0;
	while (satz[i] != '\0') {
		if (satz[i] >= 'A' && satz[i] <= 'Z'){
			printf("%c", satz[i] + 32);
		}
		else satz[i]);
		i++;
	}
	return satz[i];
}		
*/	
}

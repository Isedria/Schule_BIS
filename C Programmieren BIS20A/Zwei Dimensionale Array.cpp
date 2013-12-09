#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	int tabelle[11][11];
	int zeile, spalte, erg;

	for(zeile=1; zeile<11; zeile++) {
          for(spalte=1; spalte<11; spalte++) {
			tabelle[zeile][spalte] = spalte*zeile;	
			printf("%4.0i", tabelle[zeile][spalte]);
			erg = spalte*zeile;
		}
		printf("\n");
	}	
	getchar();     		
	return 0;
}

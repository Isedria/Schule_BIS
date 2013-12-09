#include <stdio.h>  //standard input output
#include <stdlib.h> //standard lib
#include <conio.h>  //console input output
#include <math.h>   //mathematische Funktionen
#include <time.h>   //Zeitfunktionen

int main(int argc, char *argv[]) {
//	srand (time(NULL));
//	while (rand() % 10 != 5) printf("test\n");
	char * monate[] = {"Januar",
	"Februar","Maerz","April","Mai","Juni","Juli"
	,"August","September","Oktober"
	,"November","Dezember"};
	int t[12];
	for (int i = 0; i < 12; i++) {
		printf("Bitte geben Sie Temperatur fuer den Monat %s ein: ", monate[i]);
		scanf("%i",&t[i]);
		getchar(); // Enter-Zeichen muss auch von dem Eingabestream verschwinden
	}
	float dt = 0;
	for (int i = 0; i < 12; i++) {
		dt = dt + t[i];
	}
	dt = dt / 12;
	
	printf("Die Durchschnittstemperatur war: %.2f\n",dt);
	
	return 0; // Rückgabewert an das Betriebssystem
}

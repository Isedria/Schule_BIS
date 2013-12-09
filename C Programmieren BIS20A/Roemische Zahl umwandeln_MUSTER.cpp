#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]) {
	
	// Eingabe der Zahl
	// Zeichenkette der Länge 20
	// um die römische Zahl aufzunehmen
	char nummer[20];
	int zahl = 0;
	printf("Bitte geben Sie eine roemische Zahl ein!" 
			"\nMax. Laenge 18:");
	
	// fgets speichert '\n''\0'
	fgets(nummer, 20, stdin);
	
	// Verarbeitung
	// toUpper
	// klein in Großbuchstaben umwandeln
	int i = 0;
	while (nummer[i] != '\0') {
		if (nummer[i] < 'z' && nummer[i] > 'a')
		nummer[i] = nummer[i] - 'a' + 'A';
	i++;
	}
	
	// umwandeln
	i = 0;
	while (nummer[i] != '\0') {
		if (nummer[i] == 'M') {
			zahl += 1000;
		} else if (nummer[i] == 'D') {
			if (nummer[i+1] == 'M')
			  	zahl -= 500;
			else
				zahl += 500;
		} else if (nummer[i] == 'C') {
			if (nummer[i+1] == 'M'
			    || nummer[i+1] == 'D')
			    zahl -= 100;
			else
				zahl += 100;
		} else if (nummer[i] == 'L') {
			if (nummer[i+1] == 'M'
			    || nummer[i+1] == 'D'
				|| nummer[i+1] == 'C')
			    zahl -= 50;
			else
				zahl += 50;
		} else if (nummer[i] == 'X') {
			if (nummer[i+1] == 'M'
			    || nummer[i+1] == 'D'
				|| nummer[i+1] == 'C'
				|| nummer[i+1] == 'L')
			    zahl -= 10;
			else
				zahl += 10;
		} else if (nummer[i] == 'V') {
			if (nummer[i+1] == 'M'
			    || nummer[i+1] == 'D'
				|| nummer[i+1] == 'C'
				|| nummer[i+1] == 'L'
				|| nummer[i+1] == 'X')
			    zahl -= 5;
			else
				zahl += 5;
		} else if (nummer[i] == 'I') {
			if (nummer[i+1] == 'M'
			    || nummer[i+1] == 'D'
				|| nummer[i+1] == 'C'
				|| nummer[i+1] == 'L'
				|| nummer[i+1] == 'X'
				|| nummer[i+1] == 'V')
			    zahl -= 1;
			else
				zahl += 1;
	}
	i++;
}
	
	// Ausgabe
	printf("Roemische Zahl: %s"
	 	   "arabische Zahl %i\n", nummer, zahl);
	
	
	getchar();
	return EXIT_SUCCESS;
}


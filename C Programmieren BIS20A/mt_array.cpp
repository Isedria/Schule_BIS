#include <stdio.h>  //standard input output
#include <stdlib.h> //standard lib
#include <conio.h>  //console input output
#include <math.h>   //mathematische Funktionen
#include <time.h>   //Zeitfunktionen

int arrayMin(int *x, int size) {
int min=x[0], i;
for(i=1; i<size; i++) {
	if(x[i] < min) {
		min = x[i];
	}
}
return min;

}
int arrayStelle(int *x, int size) {	
int min=x[0], i;
for(i=1; i<size; i++) {
	if(x[i] < min) {
		min = x[i];
	}
}
return i;

}
int arrayMax(int *x, int size) {
int max=x[0], i;
for(i=1; i<size; i++) {
	if(x[i] > max) {
		max = x[i];
	}
}
return max;
}
/*
int array_nMT(int *x, int size) {
int nMT=x[0], i;
for(i=1; i<20; i++) {
	if(x[i] > size) {
		nMT = x[i];
	}
}
return nMT;
}

*/
int main(int argc, char *argv[]) {
	srand (time(NULL));
	
	int z[20]; // Zahl
	int r[20];
	int diff[20];
	for (int i = 0; i < 20; i++) {
		z[i] = i+1;
		r[i] = rand() % 100 +1;
		printf("Die %i Zahl lautet: %i\n", z[i], r[i]);

	}
	float mt = 0;
	for (int i = 0; i < 20; i++) {
		mt = mt + r[i];
	}
	mt = mt / 20;
	
	printf("Mittelwert: %.2f\n",mt);
	printf("Min: %d\n", arrayMin(r, 20));
	printf("Max: %d\n", arrayMax(r, 20));
	mt+= 0.5;
	int result_mt = (int)mt;
	printf("Ausgabe Result_MT: %d\n", result_mt);
	
	for (int i = 0; i < 20; i++){
		printf("Test1random: %d\n", r[i]);
		printf("Test2mt: %d\n", result_mt);		
		diff[i] = abs(result_mt-r[i]);		
		printf("Test3diff: %d\n", diff[i]);
			
		
		
	}
	
//	int nMt = arrayMin(diff,20);
	int stelle = arrayStelle(diff,20);
	
	for (int i = 0; i < 20; i++){
		printf("StelleTEST %d\n", arrayStelle(diff,20));
		if (stelle == i)
			printf("Naechster Mittelwert: %d\n", stelle);
			
	}
	


//	printf("Nächste Zahl am Mittelwert: %d\n", array_nMT(r, result_mt));

	
	return 0; // Rückgabewert an das Betriebssystem
}

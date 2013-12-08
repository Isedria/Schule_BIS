#include<stdio.h>

int main()
{
    int jahr;
    printf("Schaltjahr Rechner\n");
    printf("Der Gregorische Kalendar wurde im Jahr 1582 entwickelt.\n");
    printf("Alle Eingaben die kleiner als 1582 sind, fuehren zum Abbruch. \n");
    printf("Mit 0 koennen Sie den rechner beenden\n"); 
    
    do{    
	    printf("\n\nBitte geben Sie ein Jahr an: ",jahr);
	    scanf("%i", &jahr);
	    
	    if (jahr%4 == 0 && jahr%400 == 0)
	       printf("Das angegebene Jahr ist kein Schaltjahr.");
	    
	    else if (jahr%4 == 0 || jahr%100 == 0)
	        printf("Das angegebene Jahr ist ein Schaltjahr.");
	        else
	        printf("Das angegebene Jahr ist kein Schaltjahr!");
	}while(jahr > 1582 && jahr != 0);

getchar();
getchar();
return 0;
}
      
         
    
    
      
      

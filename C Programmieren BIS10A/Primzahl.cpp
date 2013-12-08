#include<stdio.h>

int main()
{
    int eingabe, pruefzahl;
    printf("Programm Primzahl - der Klassiker\n");
    printf("\n\nBitte geben Sie eine Zahl an: ",eingabe);
	scanf("%i", &eingabe);
	        

    for ( pruefzahl=2; eingabe != pruefzahl && eingabe%pruefzahl != 0; pruefzahl ++);
    
    if (eingabe == pruefzahl)
       printf ("ist eine Primzahl");
    else
        printf ("ist keine Primzahl");
        
   
getchar();
getchar();
return 0;
}
      

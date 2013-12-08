#include<stdio.h>


main()
{
    int eingabe;

    printf("Programm Switch Case Anwendung\n");
    printf("\n\nBitte geben Sie eine Zahl zwischen 1 - 3 an: ",eingabe);
    scanf("%i", &eingabe);

    switch(eingabe) {
    case 1: printf("Sie haben eine 1 gewaehlt.\n"); break;
    case 2: printf("Sie haben eine 2 gewaehlt.\n"); break;
    case 3: printf("Sie haben eine 3 gewaehlt.\n"); break;
    default: printf("Die Eingabe ist nicht zulaessig.\n"); break;
    }
      
getchar();
getchar();
return 0;
}

#include<stdio.h>

Main()
{
  int i, x, y;

  do{
        printf("\n - Summe zweier Zahlen -  "),
        printf("  ======================= \n ");
        
        printf("  Bitte eine Zahl eingeben: ");
        scanf("%i", x);
    
        printf("\n Bitte noch eine Zahl eingeben:  ");
        scanf("%i", y);
    
        i = (x + y / 2);
        
        if (x=y)
           printf("i=x=y");
        else
           printf("/n/n Das Ergebnis lautet: %.2i", i);

        printf("/nNochmal ?");       
        Scanf("%i",&i);

    }while(i != 0)



  getchar(); 
  getchar();
  return 0;
}


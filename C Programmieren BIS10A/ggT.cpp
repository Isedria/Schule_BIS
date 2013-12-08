#include<stdio.h>

int main(void)
{
    int a, b, erg;
    printf("ggT - Rechner\n");
    printf("Bitte geben Sie eine Zahl ein: ", a);
    scanf("%i", &a);
    printf("Bitte geben Sie eine weitere Zahl ein: ", b);
    scanf("%i", &b);
    
    do{
      if (a > b)
      {
            a = a - b;
            erg = a;
      }
      else
      {
          b = b - a;
          erg = b;
          }
      }while(erg > 0);      
          
      if ( a > 0)
      {printf("ggT = %i", a);
       }
      else
      {printf("ggT = %i", b);
       }    

getchar();
getchar();
return 0;
}
      
         
    
    
      
      

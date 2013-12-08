#include<stdio.h>
#include<math.h>

// sqrt = sqare root

float quadrat (float a,float b);

main()
{
    float a,b,result;

    printf("Programm 'Satz des Pythagoras'\n");
    printf("\n\nBitte geben Sie die erste Seitenflaeche ein: ",a);
    scanf("%f", &a);
    printf("\n\nBitte geben Sie die zweite Seitenflaeche ein: ",b);
    scanf("%f", &b);
    result = pow((quadrat (a,b)), 0.5);
    printf("\nDie dritte Seitenflaeche:  %f",result);


getchar();
getchar();
return 0;
}

float quadrat (float a,float b)
{
      return ((a*a)+(b*b));
}      



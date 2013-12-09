#include<stdio.h>
#include<math.h>

// sqrt = sqare root

main()
{
	int i;
	float temp[12];
	char *monat[] = {"Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember"};	
	
	printf("\nBitte geben Sie die Temperaturen für die naechsten 12 Monate an.\n\n");
	
	for (i=0; i<12; i++)
	{		
		printf("\nBitte geben Sie die Temperatur an:");
		scanf("\n%f",&temp[i]);
		printf("\nDie Temperatur im %i . Monat betraegt: %3.1f Grad\n", i+1, temp[i]);
	
	}
		
	for (i=0; i<12; i++)
	{		
	//	strcat(temp[i],monat[i]);
		printf("\nDie Temperatur im %s betraegt: %3.1f Grad\n", monat[i], temp[i]);
	
	}
	
//	printf("\nDie Januar Temperatur betraegt: ",temp[0]);
/*
	monat[1] = Januar;
	monat[2] = Februar;
	monat[3] = Maerz;
	monat[4] = April;
	monat[5] = Mai;
	monat[6] = Juni;
	monat[7] = Juli;
	monat[8] = August;
	monat[9] = September;
	monat[10] = Oktober;
	monat[11] = November;
	monat[12] = Dezember; 
*/	
getchar();
return 0;
	
}

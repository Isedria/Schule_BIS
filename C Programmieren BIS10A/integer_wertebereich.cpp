#include<stdio.h>


main()
{
      printf("Integer Wertebereich");
      
      int y;
      short int x;
      
      for(x=0, y=0; x < 32768; x=x+1, y= y+1)
      {
               printf("\n* %i",x);
               printf("* %i",y);
               }
            
      getchar();
      getchar();     
}

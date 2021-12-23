
#include <stdio.h>
#include <time.h>

void main()
{
   clock_t start,end;
   double cost;
   long x=10,i=1000000L,j;
   start=clock();
   while(i--) 
        {
          x++;//insert your codes 
         }
   end=clock();
   cost=(double)(end-start)/CLOCKS_PER_SEC;
   printf("%lf SECONDS\n",cost);
}


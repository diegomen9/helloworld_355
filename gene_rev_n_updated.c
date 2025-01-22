#include <stdlib.h>
#include <stdio.h>

// Generate the reverse number
int  main (int argc, char** argv)
{
   int res, temp, rev = 0;
   temp = atoi(argv[1]);
   while (temp > 0)
   {
      res = temp % 10;
      rev = (rev * 10) + res;
      temp = temp / 10;
   }
   
   printf("%d \n", rev);
   return 0;
}





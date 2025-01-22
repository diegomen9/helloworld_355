#include <stdio.h>

/*function declaration*/
int gene_reverse_n(int ori);


int main()
{
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);
   
     /* Generate the reverse number */
     int rev = gene_reverse_n(n);

     /* Check value */
     if (n == rev)
         printf("Yes \n");
     else
         printf("No \n");
   
     return 0;
}

/* Generate the reverse number */
int gene_reverse_n(int ori)
{
     int res, temp = ori, rev = 0;
     while (temp > 0)
     {
          res = temp % 10;
          rev = (rev * 10) + res;
          temp = temp / 10;
     }
     return rev;
}


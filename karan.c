#include <stdio.h>
int main()
{ 
   int n,sum=0;
   printf("Enter the value of last natural you want sum of:\n");
   scanf ("%d",&n);

   sum = (n*n+n)/2;

   printf("The value of sum of %d is %d\n",n,sum);
   return 0;
}

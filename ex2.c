#include <stdio.h>
int main()
{
 int num,i;
 printf("Enter the number you want multiplication table of:\n");
 scanf("%d", &num);

 for ( i=1;i<11;i++)
 {
    printf("%d * %d = %d\n",num,i,num*i);
 }

  return 0;


}
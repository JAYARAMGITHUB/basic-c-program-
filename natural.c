#include <stdio.h>
 
void main()
{
    int i, number, sum = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of first the given natural numbers = %d\n",sum);
}

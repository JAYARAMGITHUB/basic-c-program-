#include <stdio.h>
int main()
{
    int number1, number2, number3;

    printf("Enter three different numbers");
    scanf("%d %d %d", &number1, &number2, &number3);

    if( number1>=number2 && number1>=number3 )
        printf("%d. is the largest number");

    if( number2>=number1 && number2>=number3 )
        printf("%d. is the largest number");

    if( number3>=number1 && number3>=number2 )
        printf("%d. is the largest number");

}

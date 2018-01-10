#include <stdio.h>
int main()
{
    char characters;
    printf("Enter a character");
    scanf("%c",&characters);

    if( (characters>='a' && characters<='z') || (characters>='A' && characters<='Z'))
        printf("%c is an alphabet");
    else
        printf("%c is not an alphabet");

    
}

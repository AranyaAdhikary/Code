/* functions that can substitute toupper() and tolower() */

#include<stdio.h>

char to_upper(char a)
{
    return (char)((int)a-32);
}

char to_lower(char a)
{
    return (char)((int)a+32);
}

int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if(c >'a' && c <'z')
        printf("After case conversion, %c becomes %c.\n", c,to_upper(c));
    else if(c >'A' && c <'Z')
        printf("After case conversion, %c becomes %c.\n", c,to_lower(c));
    else
        printf("It is a numerical or special character.\n");
}
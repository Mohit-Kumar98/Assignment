// Write a program to check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>

int main()
{
    char c;
    printf("Enter the Alphabet:");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Uppercase");
    else if (c >= 'a' && c <= 'z')
        printf("Lowercase");
    else
        printf("Wrong input");

    return 0;
}
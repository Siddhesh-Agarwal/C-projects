// find length of a string
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    printf("Length of the string is %d\n", i);
    return 0;
}
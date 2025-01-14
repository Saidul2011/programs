#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the sentence:");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (i == 0 && (97 <= str[i] && str[i] <= 122))
            str[i] -= 32;
        if ((str[i] == ' ') && (97 <= str[i + 1] && str[i + 1] <= 122))
            str[i + 1] -= 32;
        i++;
    }
    puts(str);
}
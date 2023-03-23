#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int paline(char* s)
{
    int i, a = 0, n;
    n = strlen(s);
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            a++;

    }
    if (a == i)
        return 1;
    else
        return 0;

}
int main()
{

    char s[101];
    printf("Type your String:\n");
    gets(s);
    if (paline(s))
    {
        printf("string is palindrome\n");
    }
    else
        printf("string is not palindrome\n");

}
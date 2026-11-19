#include <stdio.h>

int leet(char *wort)
{
    int count = 0;

    for (int i = 0; wort[i] != '\0'; i++)
    {
        if (wort[i] == 'e' || wort[i] == 'E')
        {
            wort[i] = '3';
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Verwendung: %s <text>\n", argv[0]);
        return 1;
    }

    int count = leet(argv[1]);

    printf("Neuer Text: %s\n", argv[1]);
    printf("Treffer: %d\n", count);

    return 0;
}
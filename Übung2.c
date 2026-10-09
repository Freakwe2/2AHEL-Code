#include <stdio.h>

int main(int argc, char* argv[])
{

    int Volljaerig = 18;
    int alter;
    printf("Gib dein alter ein: ");
    scanf("%d" ,&alter);
    if (alter < Volljaerig)
    {
        printf("Du bist nicht alt genug\n");
    }
    if(alter > Volljaerig)
    {
        printf("Du bist alt genug\n");
    }
    return 0;
} 
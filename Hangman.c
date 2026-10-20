#include <stdio.h>

int main()
{
    const char secret[] = "REDBULL";
    char guess;

    printf("Rate den Buchstaben: ");
    if (scanf(" %c", &guess) != 1){
        printf("Ungueltige Eingabe\n");
        return 1;
    }
    
    if (secret == guess)
    {
        printf("Richtig\n");
    }
    else
    {
        printf("Falsch %c", secret);
    }
    
    return 0;
}
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
    
    int hits = 0;
    for (int i = 0; i < (sizeof(secret) / sizeof(char)) - 1; i++) {
        if((secret[i]) == guess) {
            hits++;
        }
    }
    printf("Treffer: %d", hits);

    return 0;
}
#include <stdio.h>

int countHits(const char secret [], const char guess) {
    int hits = 0;
    for (int i = 0; i < sizeof(secret) -1; i++) {
        if ((secret[i]) == guess) {
            hits++;
        }
    }
    return hits; 
}

int main()
{
    const char secret[] = "REDBULL";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    const char guess;
    int hits = 0;
    printf("Das Wort hat %d Buchstaben\n", len);
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }
         
    printf("Rate den Buchstaben: ");
    if (scanf(" %c", &guess) != 1){
        printf("Ungueltige Eingabe\n");
        return 1;
    }
    
    for (int i = 0; i < len; i++) {
        if (guess == secret[i]) {
            hits++;
            guessed[i] = guess;
        }
    }
    for (int i = 0; i < len; i++){
        printf("%c ", guessed[i]);
    }
    printf("Treffer: %d\n", hits);

    return 0;
}
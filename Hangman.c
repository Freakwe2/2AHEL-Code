#include <stdio.h>
#include <ctype.h>

int main()
{
    const char secret[] = "REDBULL";
    const int len = sizeof(secret) - 1;

    char guessed[len];
    char guess;

    int hits;
    int gefunden = 0;
    int leben = 5;

    printf("Das Wort hat %d Buchstaben\n", len);

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    while (gefunden < len && leben > 0) {

        printf("\nWort: ");
        for (int i = 0; i < len; i++) {
            printf("%c ", guessed[i]);
        }
        printf("\nLeben: %d", leben);
        printf("\nRate einen Buchstaben: ");

        if (scanf(" %c", &guess) != 1) {
            printf("Ungueltige Eingabe!\n");
            return 1;
        }

        guess = toupper(guess);
        hits = 0;

        for (int i = 0; i < len; i++) {
            if (toupper(secret[i]) == guess &&
                guessed[i] == '_') {

                guessed[i] = secret[i];
                hits++;
                gefunden++;
            }
        }

        if (hits == 0) {
            printf("Kein Treffer!\n");
            leben--;
        } 
    }
    if (gefunden == len){
        printf("\nRichtig! Das Wort war %s\n", secret);
    }
    else {
        printf("\nFalsch! Das Wort war %s\n", secret);
    }
    return 0;
}
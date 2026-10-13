#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

int main(void)
{     
    
    srand(time(NULL));

    int min = 1;
    int max = 100;



    int zahl = (rand() % (max - min + 1)) + min; 
    float Deine_Eingabe;
    int Versuche = 1;
    
    printf("Rate die Zahl von 0 bis 100\n");
    printf("Wie viele Versuche willst du haben?\nDu hast maximal 10 Versuche ");
    scanf("%d",&Versuche);
    if("Versuche > 10")
    {
        Versuche = 10;
    }
    printf("Ok du hast %d Versuche!\n",Versuche);

    for(int e = 0;e < Versuche;e++)

    {
        scanf("%f",&Deine_Eingabe);

        if(Deine_Eingabe > zahl)
        {
            printf("Deine Eingabe war groesser als die gewuenschte Zahl :(\n ");
        }
        else if(Deine_Eingabe < zahl)
        {
            printf("Deine Eingabe war kleiner als die gewuenschte Zahl :(\n ");
        }
        else if(Deine_Eingabe == zahl)
        {
            printf("Du hast richtig geraten :) ");
            break;
        }
        if("Deine_Eingabe == -1")
        {
            printf("Die Zahl ist: %d\n",zahl);
        }
    }
    if("Versuche == 0")
    {
        printf("\nDu hast keine Versuche mehr");
    }

    
    return 0; 
}
#include <stdio.h>
#include <stdbool.h>

int main(void) {


    char spiller1_haand, // Spiller 1s hånd
         spiller2_haand; // Spiller 2s hånd

    
    // Indhent spillernes hænder
    printf("Indtast Spiller 1 haand: ");
    scanf(" %c", &spiller1_haand);

    printf("Indtast Spiller 2 haand: ");
    scanf(" %c", &spiller2_haand);

    bool uafgjort; // Boolean variable

    if(spiller1_haand == spiller2_haand) { // Hvis hænderne er ens
        uafgjort = 1;
    } else {                               // Ellers ikke uafgjort
        uafgjort = 0;
    }

    printf("Uafgjort? 1 er ja, 0 er nej: %d", uafgjort);

    return 0;
}
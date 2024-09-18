#include <stdio.h>
#include <stdbool.h>

int main(void) {

    char spiller1_haand, // Værdi af spiller 1 hånd
         spiller2_haand; // Værdi af spiller 2 hånd


    // Hent værdier af spiller hænder
    printf("Skriv haand for spiller 1: ");
    scanf(" %c", &spiller1_haand);

    printf("Skriv haand for spiller 2: ");
    scanf(" %c", &spiller2_haand);

    // Om spiller 1 har vundet
    int spiller1_vandt;
     if (spiller1_haand == 's' && spiller2_haand == 'p') {              // Saks mod papir
        spiller1_vandt = 1;
    } else if ((spiller1_haand == 'r' && spiller2_haand == 's')) {      // Sten mod saks
        spiller1_vandt = 1;
    } else if(spiller1_haand == 'p' && spiller2_haand == 'r') {         // Papir mod sten
        spiller1_vandt = 1;
    } else {
        spiller1_vandt = 0;                                             // Alle andre kombinationer
    }

    // Om det er uafgjort
    bool uafgjort;
    uafgjort = (spiller1_haand == spiller2_haand);

    if(spiller1_vandt == 1) {
        printf("Spiller 1 vandt");
    } else if(uafgjort) {
        printf("Uagjort");
    } else {
        printf("Spiller 2 vandt");
    }


    return 0;
}
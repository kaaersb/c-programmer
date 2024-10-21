#include <stdio.h>

void cashexchange(int dollar_ammount, int *hundreds, int *fifties, int *twenties, int *tens) {

    // Beregn antal hundred dollar sedler
    *hundreds = dollar_ammount / 100;
    // Beregn rest
    dollar_ammount %= 100;
    // Beregn antal halvtreds dollar sedler
    *fifties = dollar_ammount / 50;
    // Beregn rest
    dollar_ammount %= 50;
    // Beregn antal tyve dollar sedler
    *twenties = dollar_ammount / 20;
    // Beregn rest
    dollar_ammount %= 20;
    // Beregn antal ti dollar sedler
    *tens = dollar_ammount / 10;
}

int main(void) {

    int total_dollars;
    int hundreds, fifites, twenties, tens;

    // Indtast dollar ammount
    printf("Indtast andtal dollars (skal vaere dividerbart med 10): ");
    scanf("%d", &total_dollars);

    // Løkke indtil den indtastede dollar mængde er dividerbar med 10
    while (total_dollars % 10 != 0) {
        printf("%d er ikke dividerbart med 10, proev igen: ", total_dollars);
        scanf("%d", &total_dollars);
    }

    // // Kald funktionen og send pointers til hundreds, fifites, twenties, tens
    cashexchange(total_dollars, &hundreds, &fifites, &twenties, &tens);

    // Udskriv resultatet
    printf("%d dollars veksles til: %d 100, %d 50, %d 20 og %d 10.", total_dollars, hundreds, fifites, twenties, tens);
    return 0;
}
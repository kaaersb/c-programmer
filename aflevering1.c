#include <stdio.h>

int main(void) {
    int INPUT,
        sek,
        min,
        timer,
        dage,
        uger;

    printf("Indtast et antal sekunder: ");
    scanf("%d", &INPUT);

    sek = INPUT % 60; // Antal sekunder
    min = INPUT / 60; // Total antal minutter

    timer = min / 60; // Antal timer
    min = min % 60;   // Antal resterende minutter

    dage = timer / 24; // Antal dage
    timer = timer % 24; // Antal resterende timer

    uger = dage / 7; // Antal uger
    dage = dage % 7; // Antal resterende dage

    printf("%d uger, %d dage, %d timer, %d minutter, %d sekunder\n", uger, dage, timer, min, sek);

    return 0;
}

#include <stdio.h>

int main(void) {
    int INPUT = 0,
        sek = 0,
        min = 0,
        timer = 0,
        dage = 0,
        uger = 0,
        temp1 = 0,
        temp2 = 0;

    printf("Indtast et antal sekunder: ");
    scanf("%d", &INPUT);

    /* Antal sekunder */
    sek = INPUT % 60;
    temp1 = INPUT / 60;

    /* Antal minutter */
    min = temp1 % 60;
    temp2 = temp1 / 60;

    /* Antal timer */
    timer = temp2 % 24;
    temp1 = temp2 / 24;

    /* Antal dage */
    dage = temp1 % 7;

    /* Antal uger */
    uger = temp1 / 7;

    printf("%d uger, %d dage, %d timer, %d minutter, %d sekunder\n", uger, dage, timer, min, sek);

    return 0;
}

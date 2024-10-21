#include <stdio.h>

// Funktion til at konvertere sekunder til timer, minutter og sekunder
void hours_minutes_seconds(int total_seconds, int *hours, int *minutes, int *seconds) {
    // Beregn antal timer
    *hours = total_seconds / 3600;
    // Beregn resterende sekunder efter timer
    total_seconds %= 3600;
    // Beregn antal minutter
    *minutes = total_seconds / 60;
    // Beregn resterende sekunder efter minutter
    *seconds = total_seconds % 60;
}

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Indtast antal sekunder
    printf("Indtast antal sekunder: ");
    scanf("%d", &total_seconds);

    // Kald funktionen og send pointers til timer, minutter og sekunder
    hours_minutes_seconds(total_seconds, &hours, &minutes, &seconds);

    // Udskriv resultatet
    printf("%d sekunder svarer til %d timer, %d minutter og %d sekunder.\n", total_seconds, hours, minutes, seconds);

    return 0;
}
    
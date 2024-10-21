#include <stdio.h>

void valuta_converter(double dollars, double *euros, double *kroner, double *rubles, double *yen) {
    // Beregn euros
    *euros = dollars * 0.89;

    //Beregn kroner
    *kroner = dollars * 6.66;

    //Beregn rubles
    *rubles = dollars * 66.43;

    //Beregn yen
    *yen = dollars * 119.9;
}

int main(void) {
    double total_dollars = 0;
    double euros, kroner, rubles, yen;

    // Indtast antal dollars
    printf("Enter a dollar ammount: ");
    scanf("%lf", &total_dollars);
    
    // Kald funktionen og send pointers til euros, kroner, rubles og yen
    valuta_converter(total_dollars, &euros, &kroner, &rubles, &yen);

    // Udksriv resultatet
    printf("%.2f dollars svarer til %.2f euros, %.2f kroner, %.2f rubles og %.2f yen.", total_dollars, euros, kroner, rubles, yen);

    return 0;
}
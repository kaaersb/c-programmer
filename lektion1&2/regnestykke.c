#include <stdio.h>
#include <math.h>

int main(void) {

    // Brugeren angiver linjestykke
    double p1_x;
    double p1_y;
    double p2_x;
    double p2_y;
    double p3_x;
    double p3_y;
    printf("Indtast punkt1:\n");
    scanf("%lf %lf", &p1_x, &p1_y);

    printf("Punkt 1 (%lf, %lf)\n", p1_x, p1_y);

    printf("Indtast punkt2:\n");
    scanf("%lf %lf", &p2_x, &p2_y);

    printf("Punkt 2 (%lf, %lf)\n", p2_x, p2_y);

    printf("Indtast punkt3:\n");
    scanf("%lf %lf", &p3_x, &p3_y);

    printf("Punkt 2 (%lf, %lf)\n", p3_x, p3_y);

    // Programmet udregner længden
    double delta_p1p2x;
    double delta_p1p2y;
    double delta_p1p3x;
    double delta_p1p3y;
    double delta_p2p3x;
    double delta_p2p3y;


    double laengde_p1p2;
    double laengde_p1p3;
    double laengde_p2p3;
    double samlet_laengde;

    delta_p1p2x = p1_x - p2_x;
    delta_p1p2y = p1_y - p2_y;
    delta_p1p3x = p1_x - p3_x;
    delta_p1p3y = p1_y - p3_y;
    delta_p2p3x = p2_x - p3_x;
    delta_p2p3y = p2_y - p3_y;

    laengde_p1p2 = sqrt(delta_p1p2x*delta_p1p2x + delta_p1p2y*delta_p1p2y);
    laengde_p1p3 = sqrt(delta_p1p3x*delta_p1p3x + delta_p1p3y*delta_p1p3y);
    laengde_p2p3 = sqrt(delta_p2p3x*delta_p2p3x + delta_p2p3y*delta_p2p3y);

    samlet_laengde = laengde_p1p2 + laengde_p1p3 + laengde_p2p3;

    // Programmet udskriver længden

    printf("\nLængde: %lf", samlet_laengde);

    return 0;
}
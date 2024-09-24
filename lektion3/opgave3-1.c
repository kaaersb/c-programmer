#include <stdio.h>
#include <math.h>


int main(void) {
    double r,   // radius
           x,   // 
           y;   //

    //Afvigelses accept grænse
    const double d = 0.4;
           

    int inside, outside, periphery;
     
    printf("Indtast radius: ");
    scanf(" %lf", &r);

    printf("Indtast x-koordinat: ");
    scanf(" %lf", &x);

    printf("Indtast y-koordinat: ");
    scanf(" %lf", &y);

    // Udregning
    double punkt_kvadrat = x*x + y*y;
    double radius_kvadrat = r*r;

    int indenfor = punkt_kvadrat < radius_kvadrat;
    int periferien = fabs(punkt_kvadrat - radius_kvadrat) < d;
    int udenfor = punkt_kvadrat > radius_kvadrat;

    //Svar
    printf("Punktet (%lf, %lf) er %s \n", x,y, periferien ? "paa periferien" : (indenfor ? "indenfor periferien" : (udenfor ? "udenfor periferien" : "fejl, noob")));    
    printf("d = %lf, fabs = %lf", d, fabs(punkt_kvadrat - radius_kvadrat));
    return 0;
}
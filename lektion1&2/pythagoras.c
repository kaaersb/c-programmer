#include <stdio.h>
#include <math.h>
int main(void){
    //Fisk
    int n,m;
    //Indtastning foretaget af bruger

    printf("Indtast 2 variabler (m og n, hvor n < m): \n");
    scanf("%d %d", &m, &n);
    
    //Beregning
    int side1 = m*m - n*n;
    int side2 = 2*m*n;
    int hypotenuse = m*m + n*n;
    
    //Output
    printf("Side 1's laengde: %d\n", side1);
    printf("Side 2's laengde: %d\n", side2);
    printf("Hypotenuse: %d\n", hypotenuse);
}



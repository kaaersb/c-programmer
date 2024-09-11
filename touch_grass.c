#include <stdio.h>
#include <math.h>

#define SQ_FEET_PER_SECOND 2

int main(void) {
    //Deklaration af variable
    int yard_x, yard_y;
    int house_x, house_y;
    
    //Indtastning af laengder
    printf("Indtast havens laengde & bredde: ");
    scanf("%d %d", &yard_x, &yard_y);
    printf("Indtast husets laengde & bredde\n");
    scanf("%d %d", &house_x, &house_y);
    //Udregning af arealer
    double yard_area, house_area;
    house_area = house_x * house_y;
    yard_area = yard_x * yard_y - house_area;
    
    //Udregning af tid
    double seconds = yard_area / SQ_FEET_PER_SECOND;

    //Output
    printf("Antallet af sekunder det ville tage at klippe plaenen ville vaere foelgende antal sekunder: %.2f", seconds);    
}
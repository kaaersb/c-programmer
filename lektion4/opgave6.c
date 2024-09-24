#include <stdio.h>
int main(void){  
    int i = 0, power = 1;

    while (i <= 10) {
        power *= 2;
        printf("%5d i = %d\n", power, i);
        i++;
    }
    
    printf("\n");

    return 0;
}
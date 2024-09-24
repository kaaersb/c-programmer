#include <stdio.h>

#define START_POP 9780

int main(void) {
    int count_years=0,
        current_pop = START_POP;
        

    while(current_pop < 30000) {
        current_pop = current_pop * 1.1;
        count_years++;
        printf("Nuvaerende befolkning: %d efter %d aar\n", current_pop, count_years);
    }

    printf("Overgik en befolkning paa 30.000 efter %d aar\n", count_years);
}
#include <stdio.h>

int main(void){

    int n, sum = 0;

    printf("Indtast n \n > \0");
    scanf(" %d", &n);
    
    for(int i = 0; i <= n; i++) {
        sum += i; // sum = sum + i
    }

    printf("Sum: %d\n", sum);

    int est = (n * (n + 1)) / 2;
    printf("Estimat eller (n * (n + 1)) / 2 = %d\n", est);
    
    if(sum == est) {
        printf("Tallene er ens");
    } else {
        printf("Tallene er IKKE ens");
    }

    return 0;
}
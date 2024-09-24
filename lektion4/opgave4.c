#include <stdio.h>
#include <math.h>

int main(void) {

    int m,n,k,sum = 0;
    printf("Indtast m \n > \0");
    scanf("%d", &m);
    printf("Indtast n \n > \0");
    scanf("%d", &n);
    printf("Indtast k \n > \0");
    scanf("%d", &k);

    if(m==n) {
        printf("m kan ikke vaere lig n!");
        return 1;
    }
    
    if(m<n){
        for(int i = n; i<=m; i++){
            if(i % k == 0) sum += i;
        }
    }
    
     printf("sum: %d\n", sum);

    return 0;
}

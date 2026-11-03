#include <stdio.h>

int main(void) {
    
    float jorge, eric, prod;

    
    printf("Ingresa Jor: ");
    
    scanf("%f", &jorge);

    printf("Ingresa Er: ");
    scanf("%f", &eric);

    prod = jorge * eric;

    printf("El producto de %.2f y %.2f es: %.2f\n", jorge, eric, prod);

    return 0;
}

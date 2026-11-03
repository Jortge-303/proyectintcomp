#include <stdio.h>

int main(void) {
    
    float jorge, eric, resultado;

    
    printf("Ingresa Jor: ");
    
    scanf("%f", &jorge);

    printf("Ingresa Er: ");
    scanf("%f", &eric);

    resultado = jorge + eric;

    printf("La suma de %f y %f da: %f\n", jorge, eric, resultado);

    return 0;
}

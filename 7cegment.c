#include <stdio.h>   // print, scan
#include <string.h>  // strcpy, strcmp, strlen
#include <stdbool.h> // true(1) o false(0)

int main() {
    char entrada[50]; 
    bool a, b, c, d, e, f, g;
    bool entrada_valida;

    strcpy(entrada, ""); 

    while (strcmp(entrada, "apagar") != 0) {
        printf("Ingrese ABC (000 a 111) o escriba [apagar] para salir: ");
        scanf("%49s", entrada); 

        if (strcmp(entrada, "apagar") != 0) { 
            entrada_valida = true; // Asumimos que es válida hasta demostrar lo contrario

            // Evaluación de los 8 estados posibles (000 al 111) los else if sustituyen a los ifs normales para evaluar multiples condiciones en cadena
            if (strcmp(entrada, "000") == 0) {
                a = true;  b = true;  c = true;  d = true;  e = true;  f = true;  g = false;
            } else if (strcmp(entrada, "001") == 0) {
                a = false; b = true;  c = true;  d = false; e = false; f = false; g = false;
            } else if (strcmp(entrada, "010") == 0) {
                a = true;  b = true;  c = false; d = true;  e = true;  f = false; g = true;
            } else if (strcmp(entrada, "011") == 0) {
                a = true;  b = true;  c = true;  d = true;  e = false; f = false; g = true;
            } else if (strcmp(entrada, "100") == 0) {
                a = false; b = true;  c = true;  d = false; e = false; f = true;  g = true;
            } else if (strcmp(entrada, "101") == 0) {
                a = true;  b = false; c = true;  d = true;  e = false; f = true;  g = true;
            } else if (strcmp(entrada, "110") == 0) {
                a = true;  b = false; c = true;  d = true;  e = true;  f = true;  g = true;
            } else if (strcmp(entrada, "111") == 0) {
                a = true;  b = true;  c = true;  d = false; e = false; f = false; g = false;
            } else {
                entrada_valida = false;
                printf("\n[COMANDO INVÁLIDO] Usa combinaciones de 000 a 111.\n\n");
            }

            // Si la combinación fue correcta, dibuja el display en consola
            if (entrada_valida) {
                printf("\n   Pantalla de 7 Segmentos\n\n");

                // FILA 1: SEGMENTO SUPERIOR (a)
                printf(" ");
                if (a) printf("---"); else printf("   ");
                printf("\n");

                // FILAS 2 Y 3: SEGMENTOS SUPERIORES LATERALES (f y b)
                for (int i = 0; i < 2; i++) {
                    printf(" ");
                    if (f) printf("|"); else printf(" ");
                    printf("   ");
                    if (b) printf("|"); else printf(" ");
                    printf("\n");
                }

                // FILA 4: SEGMENTO CENTRAL (g)
                printf(" ");
                if (g) printf("---"); else printf("   ");
                printf("\n");

                // FILAS 5 Y 6: SEGMENTOS INFERIORES LATERALES (e y c)
                for (int i = 0; i < 2; i++) {
                    printf(" ");
                    if (e) printf("|"); else printf(" ");
                    printf("   ");
                    if (c) printf("|"); else printf(" ");
                    printf("\n");
                }

                // FILA 7: SEGMENTO INFERIOR (d)
                printf(" ");
                if (d) printf("---"); else printf("   ");
                printf("\n\n");
            }
        }
    }

    printf("Servidor apagado, buen día\n");
    return 0; 
}

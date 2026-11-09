#include <stdio.h> //print, scan
#include <string.h> //los strings/arreglos strcpy, strcmp, strlen
#include <stdbool.h> //true(1) o false(0), cualquier otra cosa es (1)

// [REQUISITO 4] Utilizar, al menos, una función para organizar el código.
void procesarSistema(bool A, bool B, bool C) {
    // [REQUISITO 1] Utilizar variables para representar las salidas del sistema.
    bool RYF = A && (B || C);
    bool G = !RYF;

    printf("\n----Estatus----\n");

    // [REQUISITO 2] Implementar las condiciones necesarias mediante estructuras de selección.
    // [REQUISITO 3] Mostrar en pantalla el estado de las salidas del sistema, indicando cuándo se activan o desactivan los LED.
    if (G) {
        printf("Sistema termorregulado\n");
        printf("Ventiladores apagados\n");
        printf("Focos: [Verde encendido, Rojo y amarillo apagados]\n");
    } else {
        printf("Sistema en riesgo de sobrecalentamiento\n");
        printf("Enfriamiento activado\n");
        printf("Focos: [Rojo y amarillo encendidos, Verde apagado]\n");
    }
    printf("\n");
}

int main() {
    char entrada[50]; //equivalente a string entrada en java se reservan 50 bytes por seguridad
    // [REQUISITO 1] Utilizar variables para representar las entradas del sistema.
    bool A, B, C; 

    strcpy(entrada, ""); //copiar la cadena por lo mismo de java
                               //compara cadenas y mientras entrada y apagar no sean iguales sigue el ciclo
    // [REQUISITO 5] Permitir que el usuario ingrese diferentes combinaciones de valores para comprobar el funcionamiento del sistema.
    while (strcmp(entrada, "apagar") != 0) {
        printf("Ingrese los valores ABC [SIN ESPACIOS] o escriba [apagar] para que el sistema termine: ");
        
        scanf("%49s", entrada); //freno
         //Jerarquiza a string apagar y garantiza que no hayan problemas en el ciclo
        if (strcmp(entrada, "apagar") != 0) { 
            
            if (strlen(entrada) == 3 && //asegura que el usuario ingrese 3 carácteres 
            //extrae los datos ingresados por el usuario y los separa en a,b,c
                (entrada[0] == '0' || entrada[0] == '1') &&
                (entrada[1] == '0' || entrada[1] == '1') &&
                (entrada[2] == '0' || entrada[2] == '1')) {

                A = (entrada[0] == '1');
                B = (entrada[1] == '1');
                C = (entrada[2] == '1');

                // Llamada a la función externa encargada de procesar las salidas e imprimirlas
                procesarSistema(A, B, C);

            } else {
                printf("\n[COMANDO INVÁLIDO]\n\n");
            }
        }
    }

    printf("Servidor apagado, buen día\n");
    return 0; //final
}


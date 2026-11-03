#include <stdio.h> //print, scan
#include <string.h> //los strings/arreglos strcpy, strcmp, strlen
#include <stdbool.h> //true(1) o false(0), cualquier otra cosa es (1)

int main() {
    char entrada[50]; //equivalente a string entrada en java se reservan 50 bytes por seguridad
    bool A, B, C, RYF, G; 

    strcpy(entrada, ""); //copiar la cadena por lo mismo de java
                               //compara cadenas y mientras entrada y apagar no sean iguales sigue el ciclo
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

                
                RYF = A && (B || C);
                G = !RYF;

                printf("\n----Estatus----\n");

                if (G) {
                    printf("Sistema termorregulado\n");
                    printf("Ventiladores apagados\n");
                } else {
                    printf("Sistema en riesgo de sobrecalentamiento\n");
                    printf("Enfriamiento activado\n");
                }
                printf("\n");

            } else {
                printf("\n[COMANDO INVÁLIDO]\n\n");
            }
        }
    }

    printf("Servidor apagado, buen día\n");
    return 0; //final
}

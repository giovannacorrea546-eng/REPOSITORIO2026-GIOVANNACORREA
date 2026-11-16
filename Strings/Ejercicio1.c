#include <stdio.h>
#include <string.h>

typedef struct {
    int edad;
    char iniciales[5]; 
    char tipoSangre[4];    
    float altura;           
} Paciente;

int main() {
    Paciente p;
    int opcion;
    char respuesta[20];

    printf("Datos del Paciente\n");
    printf("Edad: ");
    scanf("%d", &p.edad);

    printf("Iniciales (sin espacios): ");
    scanf("%4s", p.iniciales);

    printf("Tipo de sangre: ");
    scanf("%3s", p.tipoSangre);

    printf("Altura en metros: ");
    scanf("%f", &p.altura);

    do {
        printf("\nConsultar datos del paciente\n");
        printf("1. Ver Edad\n");
        printf("2. Ver Iniciales\n");
        printf("3. Ver Tipo de sangre\n");
        printf("4. Ver Altura\n");
        printf("5. Ver ficha completa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf(">> Edad: %d anios\n", p.edad);
                break;
            case 2:
                printf(">> Iniciales: %s\n", p.iniciales);
                break;
            case 3:
                printf(">> Tipo de sangre: %s\n", p.tipoSangre);
                break;
            case 4:
                printf(">> Altura: %.2f m\n", p.altura);
                break;
            case 5:
                printf(">> Ficha: [%s] | Edad: %d | Sangre: %s | Altura: %.2f m\n",
                       p.iniciales, p.edad, p.tipoSangre, p.altura);
                break;
            default:
                printf("Opcion invalida.\n");
        }

        while (1) {
            printf("\nEscriba 'continuar' para otra consulta o 'finalizar' para salir: ");
            scanf("%19s", respuesta);

            if (strcmp(respuesta, "continuar") == 0 || strcmp(respuesta, "finalizar") == 0) {
                break; // Palabra válida, rompemos este mini-bucle de control
            } else {
                printf("ERROR: Opcion no valida. Debe escribir exactamente 'continuar' o 'finalizar'.\n");
            }
        }

    } while (strcmp(respuesta, "continuar") == 0);

    printf("Cerrando programa...\n");
    return 0;
}

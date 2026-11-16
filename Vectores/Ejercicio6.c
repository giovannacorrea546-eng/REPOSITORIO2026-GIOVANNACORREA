#include <stdio.h>

int main() {
    int vector[5];
    int opcion, pos;

    // 1. Carga inicial del vector de tamaño 5
    printf("--- CARGA DE DATOS ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el valor para la posicion %d: ", i);
        scanf("%d", &vector[i]);
    }

    // 2. Menú interactivo repetitivo
    do {
        printf("\n--- MENU DE OPCIONES ---\n");
        printf("1. Acceder a un valor especifico\n");
        printf("2. Modificar un valor\n");
        printf("3. Imprimir todo el vector\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese la posicion a consultar (0 a 4): ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < 5) {
                    printf("El valor en la posicion %d es: %d\n", pos, vector[pos]);
                } else {
                    printf("Error: Posicion fuera de rango.\n");
                }
                break;

            case 2:
                printf("Ingrese la posicion a modificar (0 a 4): ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < 5) {
                    printf("Valor actual: %d. Ingrese el nuevo valor: ", vector[pos]);
                    scanf("%d", &vector[pos]);
                    printf("Valor actualizado con exito.\n");
                } else {
                    printf("Error: Posicion fuera de rango.\n");
                }
                break;

            case 3:
                printf("Contenido del vector: [ ");
                for (int i = 0; i < 5; i++) {
                    printf("%d ", vector[i]);
                }
                printf("]\n");
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while (opcion != 4);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {
    struct Alumno a1 = {"Maria Diaz", 16, 5};

    printf("Datos Iniciales del alumno\n");
    printf("Nombre: %s\n", a1.nombre);
    printf("Edad: %d años\n", a1.edad);
    printf("Año que cursa: %d\n", a1.año);

    printf("\nModificar Datos:\n");
    printf("Ingrese el nuevo nombre: ");
    scanf(" %[^\n]", a1.nombre);

    printf("Ingrese la nueva edad: ");
    scanf("%d", &a1.edad);

    printf("Ingrese el nuevo año: ");
    scanf("%d", &a1.año);

    printf("\nDatos ya Modificados:\n");
    printf("Nombre: %s\n", a1.nombre);
    printf("Edad: %d anios\n", a1.edad);
    printf("Año que cursa: %d\n", a1.año);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {

    struct Alumno a1 = {"Lucas Gomez", 16, 5};

    printf("Datos Iniciales: \n");
    printf("Nombre: %s\n", a1.nombre);
    printf("Edad: %d\n", a1.edad);
    printf("Anio: %d\n\n", a1.año);

    printf("Datos Modificados: \n");
    printf("Ingrese nuevo nombre: ");
    fgets(a1.nombre, sizeof(a1.nombre), stdin);
    a1.nombre[strcspn(a1.nombre, "\n")] = '\0';

    printf("Ingrese nueva edad: ");
    scanf("%d", &a1.edad);

    printf("Ingrese nuevo año: ");
    scanf("%d", &a1.año);

    printf("\nDatos Nuevos: \n");
    printf("Nombre: %s\n", a1.nombre);
    printf("Edad: %d\n", a1.edad);
    printf("Anio: %d\n", a1.anio);

    return 0;

#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {

    struct Alumno curso[3] = {
        {"Alumno 1", 15, 4},
        {"Alumno 2", 16, 5},
        {"Alumno 3", 17, 6}
    };

    for (int i = 0; i < 3; i++) {
        printf("\nAlumnos Modificados%d\n", i + 1);
        
        printf("Ingrese nuevo nombre: ");
        fgets(curso[i].nombre, sizeof(curso[i].nombre), stdin);
        curso[i].nombre[strcspn(curso[i].nombre, "\n")] = '\0';

        printf("Ingrese nueva edad: ");
        scanf("%d", &curso[i].edad);

        printf("Ingrese nuevo año: ");
        scanf("%d", &curso[i].año);

        while (getchar() != '\n'); 
    }

    printf("\nLista Final de Alumnos: \n");
    for (int i = 0; i < 3; i++) {
        printf("Alumno %d -> Nombre: %s | Edad: %d | Anio: %d\n", 
               i + 1, curso[i].nombre, curso[i].edad, curso[i].anio);
    }

    return 0;
}

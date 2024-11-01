#include <stdio.h>
#include <string.h>

// Estructura para almacenar el nombre y edad de una persona
struct Persona {
    char nombre[50];
    int edad;
};

// Función para ordenar las personas de mayor a menor edad
void ordenarPersonas(struct Persona personas[], int tamano) {
    struct Persona temp;
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = i + 1; j < tamano; j++) {
            if (personas[i].edad < personas[j].edad) {
                // Intercambio de posiciones si la edad de la persona en i es menor que en j
                temp = personas[i];
                personas[i] = personas[j];
                personas[j] = temp;
            }
        }
    }
}

int main() {
    struct Persona personas[3];

    // Ingreso de datos de 3 personas
    for (int i = 0; i < 3; i++) {
        printf("Ingrese el nombre de la persona %d: ", i + 1);
        scanf("%s", personas[i].nombre);
        printf("Ingrese la edad de %s: ", personas[i].nombre);
        scanf("%d", &personas[i].edad);
    }

    // Llamada a la función para ordenar de mayor a menor edad
    ordenarPersonas(personas, 3);

    // Imprimir las personas ordenadas de mayor a menor edad
    printf("\nPersonas ordenadas de mayor a menor edad:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nombre: %s, Edad: %d\n", personas[i].nombre, personas[i].edad);
    }

    // Mostrar mensajes con la persona mayor y la persona menor
    printf("\nLa persona mayor es: %s\n", personas[0].nombre);
    printf("La persona con menos edad es: %s\n", personas[2].nombre);

    return 0;
}

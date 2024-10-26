#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;

char **solicitarEspacioMemoria(int cantidadAlimentos){
    char **nombreAlimentos = (char **)malloc(cantidadAlimentos * sizeof(char *)); //puntero de punteros a cadena/caracteres

    return nombreAlimentos;
}

int main(){
    int cantidadAlimentos;
    printf("Ingrese la cantidad de alimentos: ");
    scanf("%d", &cantidadAlimentos);
    getchar();

    char **nombreAlimentos = solicitarEspacioMemoria(cantidadAlimentos);

    for (size_t i = 0; i < cantidadAlimentos; i++)
    {
        /* code */
        char bufferNombreAlimento[50];
        printf("Ingresa el nombre del alimento %d\n", i + 1);
        fgets(bufferNombreAlimento, sizeof(bufferNombreAlimento), stdin);

        printf("El  nombre del alimento es registrado: %s", bufferNombreAlimento );
    }
    

    return 0;
}
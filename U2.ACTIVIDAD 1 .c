#include<stdio.h>

#define NUM_ALIMENTOS 4

int main()
{
    // Arreglos para almacenar nombres, precios y cantidades
    char *alimentos[NUM_ALIMENTOS] = {"Hamburguesa", "Pizza", "Tacos", "Refresco"};
    float precios[NUM_ALIMENTOS] = {50.00, 80.00, 25.00, 20.50};
    int cantidades[NUM_ALIMENTOS] = {0, 0, 0, 0};
    int cantidad, opcion;
    char continuar;

    printf("Bienvenido al restaurante\n");

    // Menú inicial
    do
    {
        printf("\nMenu:\n");
        for(int i = 0; i < NUM_ALIMENTOS; i++)
        {
            printf("%d - %s - $%.2f\n", i+1, alimentos[i], precios[i]);
        }
        printf("5 - Finalizar pedido\n");
        printf("Elije una opcion: ");
        scanf("%d", &opcion);

        // Verifica si la opción está dentro del rango de alimentos
        if(opcion >= 1 && opcion <= NUM_ALIMENTOS)
        {
            printf("Ingresa la cantidad de %s: ", alimentos[opcion-1]);
            scanf("%d", &cantidad);
            cantidades[opcion-1] += cantidad;  // Suma la cantidad a la existente

            // Pregunta si se desea continuar ordenando
            printf("Deseas ordenar algo mas? (s/n): ");
            scanf(" %c", &continuar);
        }
        else if (opcion == 5)
        {
            printf("\nHas finalizado el pedido.\n");
            continuar = 'n';  // Finaliza el ciclo
        }
        else
        {
            printf("Opción no válida. Intenta de nuevo.\n");
            continuar = 's';  // Permite volver a elegir
        }

    } while (continuar == 's' || continuar == 'S');

    // Resumen de la cuenta
    float total_general = 0;
    printf("\nResumen de cuenta:\n");
    for(int i = 0; i < NUM_ALIMENTOS; i++)
    {
        if(cantidades[i] > 0) // Solo mostrar alimentos que se pidieron
        {
            float total_por_alimento = cantidades[i] * precios[i];
            printf("%s - $%.2f x %d = $%.2f\n", alimentos[i], precios[i], cantidades[i], total_por_alimento);
            total_general += total_por_alimento; // Acumula el total general
        }
    }

    // Muestra el total a pagar
    printf("\nTotal general a pagar: $%.2f\n", total_general);

    return 0;
}
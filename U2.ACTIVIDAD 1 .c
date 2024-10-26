#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

int main()
{
    int num_alimentos;  
    int cantidad, opcion;
    char continuar;

    
    printf("¿Cuántos alimentos deseas ingresar?: ");
    scanf("%d", &num_alimentos);

    getchar();  

    char **alimentos = (char **)malloc(num_alimentos * sizeof(char *));
    for(int i = 0; i < num_alimentos; i++)
    {
        alimentos[i] = (char *)malloc(50 * sizeof(char));  
    }

    float *precios = (float *)malloc(num_alimentos * sizeof(float));
    int *cantidades = (int *)malloc(num_alimentos * sizeof(int));

    for(int i = 0; i < num_alimentos; i++)
    {
        cantidades[i] = 0;
    }

    printf("\nIngresa los nombres y precios de %d alimentos:\n", num_alimentos);
    for(int i = 0; i < num_alimentos; i++)
    {
        printf("Nombre del alimento %d: ", i+1);
        fgets(alimentos[i], 50, stdin);  
        
        alimentos[i][strcspn(alimentos[i], "\n")] = '\0';

        printf("Precio de %s: ", alimentos[i]);
        scanf("%f", &precios[i]);

        getchar();  
    }

    printf("\nBienvenido al restaurante\n");

    do
    {
        printf("\nMenu:\n");
        for(int i = 0; i < num_alimentos; i++)
        {
            printf("%d - %s - $%.2f\n", i+1, alimentos[i], precios[i]);
        }
        printf("%d - Finalizar pedido\n", num_alimentos + 1);
        printf("Elije una opcion: ");
        scanf("%d", &opcion);

        if(opcion >= 1 && opcion <= num_alimentos)
        {
            printf("Ingresa la cantidad de %s: ", alimentos[opcion-1]);
            scanf("%d", &cantidad);
            cantidades[opcion-1] += cantidad;  

            printf("¿Deseas ordenar algo más? (s/n): ");
            scanf(" %c", &continuar);
        }
        else if (opcion == num_alimentos + 1)
        {
            printf("\nHas finalizado el pedido.\n");
            continuar = 'n';  
        }
        else
        {
            printf("Opción no válida. Intenta de nuevo.\n");
            continuar = 's';  
        }

    } while (continuar == 's' || continuar == 'S');

    float total_general = 0;
    printf("\nResumen de cuenta:\n");
    for(int i = 0; i < num_alimentos; i++)
    {
        if(cantidades[i] > 0) 
        {
            float total_por_alimento = cantidades[i] * precios[i];
            printf("%s - $%.2f x %d = $%.2f\n", alimentos[i], precios[i], cantidades[i], total_por_alimento);
            total_general += total_por_alimento; 
        }
    }

    printf("\nTotal general a pagar: $%.2f\n", total_general);

    for(int i = 0; i < num_alimentos; i++)
    {
        free(alimentos[i]);
    }
    free(alimentos);
    free(precios);
    free(cantidades);

    return 0;
}
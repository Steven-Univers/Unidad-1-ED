#include<stdio.h>

int edad = 0, edadLimite = 27, edadRestante = 0;

int main (){

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    edadRestante = edadLimite - edad;

    if(edad >= 18){
        if(edadRestante <= 1) {
            printf("(//_. ) (se preocupa)\n");
        }

        printf("tu edad es: %d y te quedan %d", edad, edadRestante);
        printf("ano de vida");
    }  
    else{
        printf("eres menor de edad y tu edad es %d y te quedan %d\n", edad, edadRestante );
        printf(" ano de vida");
    }

    return 0;
}

int main (){
    //%f es para datos de tipo flotante y %d es para el tipo de dato entero y %s para string 
    //%.2f para delimitar el valor de tipo flotante 
    //%D numero entero largo 
    //%lf para double
    //%c caracter
    
}
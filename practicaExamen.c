#include<stdio.h>

int suma (int a, int b){
    int res = (a + b);
    return res;
}

int resta (int a, int b){
    return (a - b);
}

int mult (int a, int b){
    return (a * b);
}

int div (int a, int b){
    return (a / b);
}

int bienvenida (){
    return printf("Bienvenido a la calculadora pitera");
}

int main (){
    int a;
    int b;
    char I;

    bienvenida;
    printf("Ingresa 2 numeros enteros");
    scanf ("%d, %d", &a, &b);
    printf("Desea hacer una suma? \n" );
    printf("escriva ""Y"" para si y ""N"" para no");
    scanf("%c", &I);
    if (I = 'y')
    {
        suma(a,b);
    }
    else{
        printf("Desea hacer una suma? \n" );
        printf("escriva ""Y"" para si y ""N"" para no");
        scanf("%c", &I);
        if (I = 'y')
        {
            suma(a,b);
        }
        else {
            printf("Desea hacer una resta? \n");
            printf("escriva ""Y"" para si y ""N"" para no");
            scanf("%c", &I);
            if (I = ){
                resta(a,b);
            }
            else{
                printf("Desea hacer una multiplicacion? \n" );
                printf("escriva ""Y"" para si y ""N"" para no");
                scanf("%c", &I);
                if (I = 'y'){
                    mult(a,b);
                }
                else{
                    printf("Desea hacer una divicion? \n" );
                    printf("escriva ""Y"" para si y ""N"" para no");
                    scanf("%c", &I);
                    if (I = 'y'){
                        div(a,b);
                    }
                    else{
                        return 0;
                    }
                }
            }
        }
    }
}
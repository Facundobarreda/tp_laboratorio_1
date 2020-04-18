#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main (void)
{
    int opcion,respuesta,respuesta2;
    float numero1, numero2, resultado,resultado2;
    long factorial1, factorial2;

    printf("\nIngrese el primer numero: ");
    scanf("%f",&numero1);

    printf("\nIngrese el segundo numero: ");
    scanf("%f",&numero2);

    printf("\nIngrese 1 para suma: \n\nIngrese 2 para resta:\n\nIngrese 3 para division:\n\nIngrese 4 para multiplicacion:\n\nIngrese 5 para factorial:\n\n");
    scanf("%d",&opcion);

switch(opcion)
{
        case 1:
            {
            respuesta=funcionsuma(numero1,numero2,&resultado);
            if(respuesta==0);
                {
                printf("\n El resultado de la suma es: %f",resultado);
                break;
                }
            }
        case 2:
            {
            respuesta=funcionresta(numero1,numero2,&resultado);
            if(respuesta==0)
            {
                printf("\n El resultado de la resta es: %f",resultado);
                break;
            }
            }
        case 3:
            {
            respuesta=funcionmultiplicacion(numero1,numero2,&resultado);
            if (respuesta==0);
            {
                printf("\n El resultado de la multiplicacion es: &f,result");
                break;
            }
            }
        case 4:
            {
            respuesta=funciondivision(numero1,numero2,&resultado);
            if (respuesta==0);
            {
                printf("\n El resultado de la division es: &f",resultado);
                break;
            }
            }
        case 5:
            {
            respuesta=factorialuno(numero1,&resultado);
            respuesta2=factorialdos(numero2,&resultado2);
            if (respuesta==0 && respuesta2==0)
            {
                printf("\nEl factorial del primer numero es: %f",resultado);
                printf("\nEl factorial del segundo numero es: %f",resultado2);
                break;
            }
            }
            system("pause");


    }
    return EXIT_SUCCESS;
}

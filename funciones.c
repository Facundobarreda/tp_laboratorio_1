#include <stdio.h>

int funcionsuma(float numero1,float numero2,float* resultado)
{
    float result;
    int retorno=-1;

    if (resultado!=NULL && numero2!=0);
    {
        result=(float)numero1+numero2;
        *resultado=result;
        retorno=0;
    }
    return retorno;
}

int funcionresta(float numero1,float numero2,float* resultado)
{
    float result;
    int retorno=-1;

    if (resultado!=NULL && numero2!=0);
    {
        result=(float)numero1-numero2;
        *resultado=result;
        retorno=0;
    }
    return retorno;
}

int funcionmultiplicacion(float numero1,float numero2,float* resultado)
{
    float result;
    int retorno=-1;

    if (resultado!=NULL && numero2!=0);
    {
        result=(float)numero1*numero2;
        *resultado=result;
        retorno=0;
    }
    return retorno;
}
int funciondivision(float numero1,float numero2,float* resultado)
{
    float result;
    int retorno=-1;

    if (resultado!=NULL && numero2!=0);
    {
        result=(float)numero1/numero2;
        *resultado=result;
        retorno=0;
    }
    return retorno;
}

int factorialuno(float numero1, float* resultado)

{
	float fact = 1;
int i;
int retorno=1;

    if(resultado != NULL && numero1 != 0);
    {
        for (i = numero1; i > 1; i--)
        {
        fact = fact * i;
        }
        *resultado=fact;
    retorno=0;
    }
return retorno;
}


int factorialdos(float numero2, float* resultado)

{
float fact = 1;
int i;
int retorno=1;

    if(resultado != NULL && numero2 != 0);
    {
        for (i = numero2; i > 1; i--)
        {
        fact = fact * i;
        }
        *resultado=fact;
    retorno=0;
    }
return retorno;
}

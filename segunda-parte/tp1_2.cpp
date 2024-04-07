#include <stdio.h>

//A continucacion declararemos las funciones

int cuadradoDeUnNumero(int numero); 
void cuadradoDeUnNumeroPuntero(int *numero); 
void parametrosDeUnaVariable(int numero); 
void invertirOrdenVariables(int *numeroA, int *numeroB); 
void ordenarVariables(int *numeroA, int *numeroB);

int main ()
{ 
    int numeroA=27, numeroB=123, cuadrado;
    printf("---------------- PRUEBA DE FUNCIONES ----------------\n\n");

    printf("El numeroA es:%d\nEl numeroB es:%d\n\n", numeroA, numeroB);
    cuadrado = cuadradoDeUnNumero(numeroA);
    printf("El cuadrado del numero con una funcion que retorna es:%d\n", cuadrado);
    cuadradoDeUnNumeroPuntero(&numeroA);
    parametrosDeUnaVariable(numeroA);
    invertirOrdenVariables(&numeroA, &numeroB);
    ordenarVariables(&numeroA, &numeroB);
    printf("\n---------------- FIN PROGRAMA ----------------");

    return 0;
}

int cuadradoDeUnNumero(int numero) //punto 4a), segunda parte
{
    return (numero*numero);
}

void cuadradoDeUnNumeroPuntero(int *numero) // punto 4b), segunda parte
{
    int aux;
    aux=(*numero * (*numero));
    printf("El cuadrado del numero es: %d\n", aux);
}

void parametrosDeUnaVariable(int numero) //punto 4c), segunda parte
{
    printf("La direccion de memoria de la variables es: %p\n", &numero);
    printf("El contenido de la variables es: %d\n", numero);
}

void invertirOrdenVariables(int *numeroA, int *numeroB) //punto 4d), segunda parte
{
    int aux;
    aux=*numeroB;
    *numeroB=*numeroA;
    *numeroA=aux;
    printf("El numeroA ahora es: %d\n", *numeroA);
    printf("El numeroB ahora es: %d\n", *numeroB);
}

void ordenarVariables(int *numeroA, int *numeroB) //punto 4e), segunda parte
{
    int aux;
    if(*numeroB < *numeroA)
    {
        aux = *numeroA;
        *numeroA=*numeroB;
        *numeroB=aux;
    }

    printf("El numero menor es: %d\n", *numeroA);
    printf("El numero mayor es: %d\n", *numeroB);
}
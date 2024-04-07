#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    // punto 3 e) de la segunda parte
    int *puntero, variable=10;
    puntero=&variable;
    printf("%p\n", puntero); //mostramos el contenido del puntero
    printf("%p\n", puntero); //mostramos la direccion almacenada por el puntero
    printf("%p\n", &variable); //mostramos la direccion de memoria de la variable
    printf("%p\n", &puntero); //mostramos la direccion de memoria del puntero
    printf("%d bytes", sizeof(int)); //tamaño en bytes que ocupa la variable

    return 0;
}

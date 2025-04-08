#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hola Mundo");// 3.(c)
    int numero = 5;
    int* puntero = &numero;
     
    printf("\n Contenido de puntero: %d", *puntero);
    printf("\n Direccion de puntero: %p", puntero);
    printf("\n Direccion de variable: %p", &numero);
    printf("\n Direccion de puntero: %p", &puntero);
    printf("\n Tamanio de bytes de la variable: %d", sizeof(numero));
    
    return 0;
}
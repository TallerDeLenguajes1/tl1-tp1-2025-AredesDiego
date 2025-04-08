#include <stdio.h>
#include <stdlib.h>

int cuadrado(int num);
void cuadradoVoid(int num);
int mostrar(int num);
void invertir(int a, int b);

int main()
{
    int numero;
    int cuadradoP;
    int numeroMostrar;
    int a, b;

    printf("\n Contenido de numero:");
    scanf("%d", &numero);

    cuadradoP = cuadrado(numero);
    printf("\n cuadrado del numero: %d", cuadradoP);

    cuadradoVoid(numero);

    numeroMostrar = mostrar(numero);

    printf("\n Ingrese un numero a:");
    scanf("%d", &a);
    printf("\n Ingrese un numero b:");
    scanf("%d", &b);
    invertir(a, b);

    return 0;
}

int cuadrado(int num)
{
    return num * num;
}
void cuadradoVoid(int num)
{
    num *= num;
}
int mostrar(int num)
{
    printf("\n Contenido de numero: %d", num);
    printf("\n direccion de numero: %p", &num);
}
void invertir(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("\n Invertido a: %d", a);
    printf("\n Invertido b: %d", b);
}
void orden(int a, int b)
{
    int c;
    if (b > a)
    {
        c = b;
        a = b;
        b = c;
    }

    printf("\n Mayor: %d", a);
    printf("\n Menor: %d", b);
    
}
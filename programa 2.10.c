#include <stdio.h>
#include <math.h>

int main()
{
    int NUM;                       // Declara la variable entera NUM
    printf("Ingrese el numero: "); // Pide al usuario que ingrese un número
    scanf("%d", &NUM);             // Lee un valor entero del usuario y lo asigna a NUM
    if(NUM == 0)                   // Verifica si el número ingresado es cero
    {
        printf("\nNulo");      // Si el número es cero, imprime "Nulo"
    }else                      // Si el número no es cero
    {
        if(pow(-1, NUM) > 0)   // Calcula (-1)^NUM y verifica si el resultado es mayor que 0
        {
            printf("\nPar");   // Si el resultado es mayor que 0, imprime "Par"
        }else
        {
            printf("\nImpar"); // Si el resultado no es mayor que 0, imprime "Impar"
        }
    }
    return 0;
}

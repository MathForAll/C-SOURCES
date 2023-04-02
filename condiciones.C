#include <stdio.h> 
#include <conio.h> 

int main (void)
{
    float x = 0; 
    clrscr(); 

    printf("Ingrese un numero: "); 
    scanf("%f", &x);

    if (x == 0)
    {
        printf("El cero es nulo!");
    }
    else if (x < 0)
    {
        printf("El numero es negativo"); 
    }
    else
    {
        printf("El numero es positivo"); 
    }









    getch(); 
    return 0; 
}
#include <stdio.h>
#include <conio.h>

/* Prototipado de una funcion */
int suma(void);
int resta(int a, int b);

int main(void)
{
    
    clrscr();

    

    printf("El valor de x es: %d", suma());
    printf("\n\nEl valor de y es: %d", resta(39, 8));



    getch();
    return 0;
}

/* Declaracion */
int suma(void)
{
    int a = 6, b = 7;
    int c;

    c = a + b; 

    return c;
}

int resta(int a, int b)
{
    return b - a;
}
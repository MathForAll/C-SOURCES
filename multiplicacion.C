#include <stdio.h>
#include <conio.h>

int main (void)
{
    float x = 0.0, y = 0.0, z = 0.0, resultado = 0.0;
    clrscr();
    printf("escribe el valor del primer numero ");
	scanf("%f", &x);
    clrscr();
    printf("escribe el segundo numero ");
	scanf("%f", &y);
    clrscr();
    printf("escribe el tercer numero ");
	scanf("%f", &z);
    clrscr();
	resultado = x * y * z;
	printf("valor de la multiplicacion es %f ", resultado);
    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>


int main (void)
{
	int notas[5], suma = 0;
	float promedio = 0.0;
    clrscr();

    notas[0] = 0;
    notas[1] = 0;
    notas[2] = 0;
    notas[3] = 0;
    notas[4] = 0;

    printf("Ingrese la nota #1: ");
    scanf("%d", &notas[0]);

    printf("Ingrese la nota #2: ");
    scanf("%d", &notas[1]);

    printf("Ingrese la nota #3: ");
    scanf("%d", &notas[2]);

    printf("Ingrese la nota #4: ");
    scanf("%d", &notas[3]);

    printf("Ingrese la nota #5: ");
    scanf("%d", &notas[4]);


    suma = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
	promedio = suma / 5;
	printf("tu promedio es de: %.2f", promedio);



    getch();
    return 0;
}
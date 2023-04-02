#include <stdio.h> 
#include <conio.h>


int main(void)
{
    float notas[5], prom = 0.0; 
    clrscr(); 

    printf("Ingrese la nota #1: "); 
    scanf("%f", &notas[0]);

    printf("Ingrese la nota #2: "); 
    scanf("%f", &notas[1]);

    printf("Ingrese la nota #3: "); 
    scanf("%f", &notas[2]);

    printf("Ingrese la nota #4: "); 
    scanf("%f", &notas[3]);

    printf("Ingrese la nota #5: "); 
    scanf("%f", &notas[4]);

    prom = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
    prom /= 5;

    printf("Tu promedio es: %.2f%c", prom, 37);

    getch();
    return 0; 
}
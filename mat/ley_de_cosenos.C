#include <stdio.h>
#include <conio.h> 
#include <math.h>

int main(void)
{
    double A = 0.0, B = 0.0, C = 0.0, alpha = 0.0; 
    clrscr(); 

    printf("Ingrese lado B: ");
    scanf("%lf", &B);

    printf("Ingrese lado C: ");
    scanf("%lf", &C);

    printf("Ingrese lado alpha: ");
    scanf("%lf", &alpha);

    /*
        Las funciones trigonometricas reciben unicamente valores
        en radianes, para pasar de grados decimales a radianes multiplicar
        por pi y dividir entre 180.
    */
    alpha = alpha * M_PI / 180;
    A = sqrt(pow(B, 2) + pow(C, 2) - (2 * B * C * cos(alpha)));

    printf("El lado faltante es: %f", A);

    getch(); 
    return 0; 
}
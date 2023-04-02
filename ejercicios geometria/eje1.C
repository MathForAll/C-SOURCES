#include <stdio.h> 
#include <conio.h> 
#include <MATH.h>
int main()
{
    float lp = 0.0, ap = 0.0, ag = 0.0, lg = 0.0; 
    clrscr(); 

    do
    {
        printf("Ingrese el lado peque%co: ", 164); 
        scanf("%f", &lp); 
    }
    while(lp <= 0);

    ap = lp * lp; 

    ag = 4 * ap; 

    lg = sqrt(ag);

    printf("El area del cuadrado peque%co de lado %.2f es: %.2f \n", 164, lp, ap); 
    printf("El area del cuadrado grande de lado %.2f es : %.2f \n", lg, ag); 

    getch(); 
    return 0; 
}
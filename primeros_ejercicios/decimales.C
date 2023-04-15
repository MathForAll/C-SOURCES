#include <stdio.h>
#include <conio.h>

int main (void)
{
    float x = 3.14159, e = 2.72, suma = 0.0;
    int y = 34;
    char z = 'A', q = 67, r = 66;    
    clrscr(); 
   
    suma = e + x; 

    printf("El valor de la suma: %f\n", suma);
    printf("z = %c, q = %c, r = %c", z, q, r);

    getch(); 
    return 0; 
}
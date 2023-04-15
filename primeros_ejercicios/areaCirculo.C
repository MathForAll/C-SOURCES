#include <stdio.h> 
#include <conio.h> 

int main (void)
{
    float radio = 0.0, area = 0.0; 
    clrscr(); 

    printf("Escriba el radio de la circunferencia: "); 
    scanf("%f", &radio); 

    area = (3.14159) * radio * radio; 
    printf("el valor del area es: %f", area); 



    getch(); 
    return 0; 
}
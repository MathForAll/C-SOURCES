
#include <stdio.h>
#include <conio.h> 

int main (void)
{
    int n = 0; 
    clrscr(); 

    printf("Escriba un numero: "); 
    scanf("%i", &n); 


	if (n == 0)
    {
        printf("El numero es nulo");
    }
    else if ((n % 2) == 0)
    {
        printf("El numero es par"); 
    }
    else
    {
        printf("El numero es impar"); 
    }


    getch(); 
    return 0; 
}
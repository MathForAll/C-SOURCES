#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char c = '';
    char numero[3];
    int i = 0;
    int n = 0;
	clrscr();

    printf("Ingrese un numero: "); 
    
    while(c = getch())
    {
        if (c >= '0' && c <= '9')
        {
            if (i < 2)
            {
                printf("%c", c); 
                numero[i] = c;
                i++; 
            }
        }

        if (c == 13)
            break; 
    }

    numero[i] = '\0';

    n = atoi(numero);

    printf("El numero es: %d", n);


    getch();
    return 0; 
}
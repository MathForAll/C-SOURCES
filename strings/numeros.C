#include <stdio.h>
#include <conio.h> 
#include <string.h>
#include <ctype.h> 
#include <stdlib.h> 

int get_int(char texto[100], int x, int y);


int main(void)
{
    int n = 0;
    clrscr();

    n = get_int("Escriba un numero: ", 10, 10); 
    printf("El numero escrito fue: %d", n);


    getch();
    return 0; 
}

int get_int(char texto[100], int x, int y)
{
    char numero[10];
    int contadorNoNumericos = 0, i = 0; 
    do
    {
        contadorNoNumericos = 0; 

        /* Limpia el espacio en la pantalla */
        gotoxy(x, y);
        printf("                          ");
        
        /* Sobreescribe el texto */
        gotoxy(x, y);
        printf("%s", texto); 
        /* Funcion que pide un String */
        gets(numero);

        /* Recorrera cada elemento del string numero */
        for (i = 0; i < strlen(numero); i++)
            if (!isdigit(numero[i])) /* Si un elemento no es numerico el contador se aumenta */
                contadorNoNumericos++; 
    }   
    while(contadorNoNumericos != 0); 
    /* Se repita mientras que el contador no sea cero*/
    
    /* Devuelve la cadena pero convertida a entero */
    return atoi(numero);
}
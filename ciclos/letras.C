#include <stdio.h>
#include <conio.h>

int main(void)
{
    
char letra = 'l';
int contador = 0;
clrscr();

    while(letra != 'n')
    {

        printf("Escribe una Letra: ");
        scanf("%c", &letra);
        contador++;
    }

    printf("\n\n\nSe han escrito %d ",contador);



    getch();
    return 0;
}
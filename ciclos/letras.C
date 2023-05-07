#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{

char letra = 'l';
int contador = 0;
clrscr();

    while(letra != 'n')
    {
		/*letra = '';*/
        printf("Escribe una Letra: ");
        letra = getch();
        printf("%c \n", letra);
        contador++;
        delay(300);
    }

    printf("\n\n\nSe han escrito %d ",contador);



    getch();
    return 0;
}
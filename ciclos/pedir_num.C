#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
	int n = 0, contador = 0;
	clrscr();

    /*
    == Compara igualda
    != Compara desigualdad
    */
    while(n != 0)
    {
        printf("Escribe un numero: ");
        scanf("%d", &n);
        contador++;
    }

	printf("\n\n\nSE HAN ESCRITO %d", contador);
    printf("\n\n\nSALIENDO DEL PROGRAMA");
    delay(1000);
    printf(".");
    delay(1000);
    printf(".");
    delay(1000);
    printf(".");
    
    return 0;
}
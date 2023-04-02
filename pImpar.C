#include <stdio.h>
#include <conio.h>

int main (void)
{
    int n = 0;
    clrscr();

    do
    {
        printf("\n\nIngrese un numero: ");
        scanf("%d", &n);

        if (n != 0)
        {
            if ((n % 2) == 0)
                printf("\nNUMERO PAR\n");
            else
                printf("\nNUMERO IMPAR\n");
        }

    }
    while(n != 0);

	printf("PRESIONA ENTER PARA SALIR");
    getch();
    return 0;
}
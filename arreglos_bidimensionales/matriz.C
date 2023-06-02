#include <stdio.h>
#include <conio.h>

int main(void)
{
    int matriz[3][3];
    int f = 0, c = 0; 
    clrscr();

    for (f = 0; f < 3; f++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Ingrese un valor: [%d][%d]: ", f, c); 
            scanf("%d", &matriz[f][c]);
        }
    }

    printf("PRESIONE ENTER PARA CONTINUAR");
    getch();
    clrscr(); 

    for (f = 0; f < 3; f++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d ", matriz[f][c]); 
        }
        printf("\n");
    }


    getch(); 
    return 0;
}
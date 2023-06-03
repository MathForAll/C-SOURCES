#include <stdio.h>
#include <conio.h>
#include <dos.h>

void carga(void);

int main(void)
{
    /*int matriz[3][3] = {{0,1,2},
                        {3,4,5},
                        {6,7,8}};*/
    int matriz[2][10];
    int f_max = 2, c_max = 10;
    int f = 0, c = 0;
    clrscr();

    carga();

    for (f = 0; f < f_max; f++)
    {
        for (c = 0; c < c_max; c++)
        {
            printf("Ingrese un valor: [%d][%d]: ", f, c);
            scanf("%d", &matriz[f][c]);
        }
    }

    printf("PRESIONE ENTER PARA CONTINUAR");
    getch();
    clrscr();



    /* Mostrar todos los asientos */
    for (f = 0; f < f_max; f++)
    {
        for (c = 0; c < c_max; c++)
        {
            if (matriz[f][c] == 0)
            {
                textcolor(GREEN);
                cprintf("%d ", matriz[f][c]);
            }
            else
            {
                textcolor(RED);
                cprintf("%d ", matriz[f][c]);
            }
        }
        printf("\n");
    }

    printf("\n\n\n\n\n");

    /* Boletos de avion */

    printf("Asientos disponibles: \n");

    for (f = 0; f < f_max; f++)
    {
        for (c = 0; c < c_max; c++)
        {
            if (matriz[f][c] == 0)
                printf("Asiento [%d][%d]\n", f, c);
        }
    }




    /* TAREA : ASCII ART */

    getch();
    return 0;
}

void carga(void)
{
    /* IMPRIME AEROUNI EN AZUL*/
    textcolor(BLUE);
    clrscr();

    printf("           ______ _____   ____  _    _ _   _ _____ \n");
    printf("     /\\   |  ____|  __ \\ / __ \\| |  | | \\ | |_   _|\n");
    printf("    /  \\  | |__  | |__) | |  | | |  | |  \\| | | |  \n");
    printf("   / /\\ \\ |  __| |  _  /| |  | | |  | | . ` | | |  \n");
    printf("  / ____ \\| |____| | \\ \\| |__| | |__| | |\\  |_| |_ \n");
    printf(" /_/    \\_\\______|_|  \\_\\____/ \\____/|_| \\_|_____|\n");
    printf("                                                   \n");

    printf("                                                            ,,,,,,,\n");
    printf("                                    *****                .,,,,,,,  \n");
    printf("                                 /*****                ,,,,,,,,,   \n");
    printf("           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,     \n");
    printf("    .%%%%%,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.      \n");
    printf(" %%%%%%%%,,,,,,,,,,,,,,,,,,*,,,,,,,,*,,,,,,,,,,,,,,,,,,,,,,/*      \n");
    printf("((((((((((((((((((((((((((((((((((((((((((((((((((((((((,  ****    \n");
    printf(" ((((((((((((((((((((((((((((((((((((((((((((((((((((              \n");
    printf("                               *******                             \n");
    printf("                                  ******                           \n");
                                                                      
    delay(10000);

    textcolor(WHITE);
    clrscr();
}
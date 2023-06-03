#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <time.h>



void carga(void);

int main(void)
{
    /*int matriz[3][3] = {{0,1,2},
                        {3,4,5},
                        {6,7,8}};*/
    int matriz[2][10];
    int f_max = 2, c_max = 10;
    int f = 0, c = 0, i = 0, j = 0;
    char aux_f = '', aux_c = '', boleto_correcto = 'F'; 
    char opc = '';
    int f_int = 0, c_int = 0;
    
	char boletos[3][2] = {
                          {'*', '*'},
                          {'*', '*'},
                          {'*', '*'}
                        };
    /**
    0,0 0,1
    1,0 1,1
    2,0 2,1
    */
    
    clrscr();

    carga();

    srand(time(NULL));
    for (f = 0; f < f_max; f++)
    {
        for (c = 0; c < c_max; c++)
        {
            /*printf("Ingrese un valor: [%d][%d]: ", f, c);
            scanf("%d", &matriz[f][c]);*/
            matriz[f][c] = rand() % 2;
        }
    }

    printf("CARGANDO DATOS...");
    /*delay(5000);*/
    getch();
    clrscr();


    for (i = 0; i < 3; i++)
    {

            do
            {
                clrscr();
                boleto_correcto = 'F';
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

                textcolor(WHITE);

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

                printf("Asiento a comprar: (Separe por un espacio)\n==> ");
                scanf("%c %c", &aux_f, &aux_c);

                /*printf("Selecciono [%c][%c]", aux_f, aux_c);*/

                /* Validando si la fila es correcta */
                if (aux_f != '0' && aux_f != '1')
                {
                    boleto_correcto = 'F';
                    printf("\nDatos Incorrectos!");
                }
                else
                {
                    boleto_correcto = 'T';
                }

                /* Validando si la columna es correcta */
                if (aux_c < '0' || aux_c > '9')
                {
                    boleto_correcto = 'F';
                    printf("\nDatos Incorrectos!");
                }
                else
                {
                    boleto_correcto = 'T';
                }
                delay(1000);
            }
            while(boleto_correcto == 'F');
            

            /* '0' == > 48 */
            f_int = ((int) (aux_f)) - 48; 
            c_int = ((int) (aux_c)) - 48; 
            
            matriz[f_int][c_int] = 1;
            

            boletos[i][0] = aux_f;
            boletos[i][1] = aux_c;
            
            clrscr();

            printf("**************************\n");
            printf("Ha comprado el boleto: [%c][%c]\n", aux_f, aux_c);
            printf("**************************\n");


            printf("Desea Comprar otro boleto? (S/N)\n==> ");
            fflush(stdin);
            scanf("%c", &opc);

            if (opc == 'n' || opc == 'N')
                break;


    }

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
                                                                      
    /*delay(10000);*/
    getch();
    textcolor(WHITE);
    clrscr();
}
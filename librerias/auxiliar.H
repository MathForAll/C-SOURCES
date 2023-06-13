#include <stdio.h> 
#include <conio.h> 
#include <dos.h>
#include <stdlib.h>
#include <time.h>

void aletorio (void);


void carga(void)
{
    clrscr(); 
    printf("CARGANDO.");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500); 
    clrscr();
}


void aletorio (void)
{
    int numero = 0;

srand(time(NULL));

    for (numero = 0; numero < 5; numero ++)
        printf("%d ",numero ); = rand () %2;
}
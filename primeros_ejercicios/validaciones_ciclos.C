#include <stdio.h>
#include <conio.h>

int main (void)
{
    int notas[5] = {0, 0, 0, 0, 0};
    int i = 0;
    float promedio = 0.0;
    clrscr();

    do
    {
        do
        {
            printf("Ingrese la nota #%d: ", (i + 1));
            scanf("%d", &notas[i]);

            if (notas[i] > 100 || notas[i] < 0)
                printf("INGRESE SOLO NOTAS EN EL RANGO [0, 100] \n");
        }
        while(notas[i] > 100 || notas[i] < 0);
        i++;  
    }
    while(i < 5); 

    i = 0; 

    printf("\n\nTus notas son: \n");
    
    do
    {
        printf("nota %d = %d\n", (i + 1), notas[i]);
        promedio += notas[i];
        i = i + 1;
    }
    while(i < 5);

    promedio /= 5;

	printf("Tu promedio es: %f", promedio);


    if (promedio >= 60)
        printf("\nAPROBASTE!!!\n"); 
    else
        printf("\nREPROBASTE!!!\n"); 

    getch();
    return 0;
}

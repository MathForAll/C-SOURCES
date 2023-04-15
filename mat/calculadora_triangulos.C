#include <stdio.h>
#include <conio.h>

int main(void)
{
    int opc = 0; 
    float angulo1 = 0.0, angulo2 = 0.0; 
    float base = 0.0, altura = 0.0; 

    do
    {
        clrscr(); 
        printf("Ingrese una opcion: \n");
        printf("[1] Calcular angulo restante\n");
        printf("[2] Calcular Perimetro\n");
        printf("[3] Calcular Area\n");
        printf("[4] Salir\n");
		printf("--> ");

        scanf("%d", &opc);

        switch(opc)
        {
            case 1:
                clrscr();
                printf("Ha seleccionado la opcion [1]");

                do
                {
                    printf("\nIngrese angulo 1: "); 
                    scanf("%f", &angulo1);

                    printf("Ingrese angulo 2: "); 
                    scanf("%f", &angulo2); 
                    
                    if ((angulo1 <= 0 || angulo2 <= 0) || (angulo1 >= 180 || angulo2 >= 180))
                    {
                        printf("\nDATOS INCORRECTOS\n"); 
                        printf("PRESIONE ENTER PARA CONTINUAR");
                        getch();
                        clrscr();
                    }

                }
                while((angulo1 <= 0 || angulo2 <= 0) || (angulo1 >= 180 || angulo2 >= 180));

                printf("El angulo restantes es: %.2f", (180 - angulo1 - angulo2)); 

                getch();
                break; 

            case 2:
                clrscr();
                printf("Ha seleccionado la opcion [2]");

                do
                {
                    printf("\nIngrese base: "); 
                    scanf("%f", &base);

                    printf("Ingrese altura: "); 
                    scanf("%f", &altura); 
                    
                    if (base <= 0 || altura <= 0)
                    {
                        printf("\nDATOS INCORRECTOS\n"); 
                        printf("PRESIONE ENTER PARA CONTINUAR");
                        getch();
                        clrscr();
                    }

                }
                while(base <= 0 || altura <= 0);

                printf("El area del tri%cngulo es: %.2f", 160, ((base * altura) / 2));

                getch();
                break; 

            case 3:
                clrscr();
                printf("Ha seleccionado la opcion [3]");
                getch();
                break; 
            
            case 4:
                clrscr();
                printf("PRESIONE ENTER PARA SALIR");
                getch();
                break;

            default:
                clrscr();
                printf("\nOPCION INCORRECTA!\n");
                getch();
                break; 
        }
    }
    while(opc != 4);

    return 0; 
}
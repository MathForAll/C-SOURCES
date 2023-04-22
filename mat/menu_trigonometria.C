#include <stdio.h>
#include <conio.h> 
#include <MATH.H> 
#include <dos.h>

int main(void)
{
    int opc = 0; 
    float x = 0.0, y = 0.0; 
    
    clrscr();     
    printf("CARGANDO");
    delay(1000);
    printf(".");
    delay(1000);
    printf(".");
    delay(1000);
    printf(".");
    delay(3000);
    
    do
    {
        clrscr(); 
        printf("Ingrese una opci%cn: \n", 162); 
        printf("[1] potencia\n"); 
        printf("[2] raiz cuadrada\n"); 
        printf("[3] seno\n"); 
        printf("[4] coseno\n"); 
        printf("[5] tangente\n"); 
		printf("[6] Salir\n");
        printf("--> ");
        scanf("%d", &opc);
        switch(opc)
        {
            case 1: 
                printf("Ingrese la base: "); 
                scanf("%f", &x); 

                printf("Ingrese el exponente: ");
                scanf("%f", &y); 

                printf("%.2f elevado a la %.2f es %.2f", x, y, pow(x, y));
                printf("\nPRESIONA ENTER PARA CONTINUAR\n");  
                getch(); 
                break;
            case 2: 
                printf("Ingrese el argumento de la raiz: ");
                scanf("%f", &x); 
        
                printf("La raiz cuadrada de %.2f es: %.2f ", x, sqrt(x));
                printf("\nPRESIONA ENTER PARA CONTINUAR\n");  
                getch(); 
                break; 
            case 3:
                printf("Ingrese el argumento del seno: ");
                scanf("%f", &x); 

                x *= M_PI / 180;

                printf("El seno de %.2f es %.2f", x, sin(x));
                printf("\nPRESIONA ENTER PARA CONTINUAR\n");  
                getch(); 
                break;
            case 4:
                printf("Ingrese el argumento del cos: ");
                scanf("%f", &x);

                x *= M_PI / 180;
                printf("El cos de %.2f es %.2f", x, cos(x));
                printf("\nPRESIONA ENTER PARA CONTINUAR\n");  
                getch(); 
                break;
            case 5:
                printf("Ingrese el argumento del tangente: ");
                scanf("%f", &x);

                x *= M_PI / 180;
                printf("El tangente de %.2f es %.2f", x, tan(x));
                printf("\nPRESIONA ENTER PARA CONTINUAR\n");  
                getch(); 
                break; 
            
            case 6:
                printf("PRESIONA ENTER PARA SALIR");
                getch(); 
                break; 
            
            default:
                printf("OPCION INCORRECTA\n");
                printf("\nPRESIONA ENTER PARA CONTINUAR\n");  
                getch(); 
                break;
        }

        
    }
    while(opc != 6);

    return 0;   
}
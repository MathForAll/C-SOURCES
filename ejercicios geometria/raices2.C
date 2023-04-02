#include <stdio.h>
#include <conio.h>
#include <MATH.h>
#include <stdlib.h> 

int main()
{
	float a = 0.0, b = 0.0, c = 0.0, det = 0.0, x1 = 0.0, x2 = 0.0;
    char opc = '';
	clrscr();

    do
    {
        printf("Ingrese el valor de a: ");
        scanf("%f", &a);

        printf("Ingrese el valor de b: ");
        scanf("%f", &b);

        printf("Ingrese el valor de c: ");
        scanf("%f", &c);

        det = pow(b, 2) - (4 * a * c);

        if (det > 0)
        {
            x1 = (b * (-1)) + sqrt(det);
            x1 = x1 / (2 * a);

            printf("x1 = %.2f \n", x1);

            x2 = (b * (-1)) - sqrt(det);
            x2 = x2 / (2 * a);

            printf("x2 = %.2f", x2);

        }
        else if (det == 0)
        {
            x1 = (b * (-1)) + sqrt(det);
            x1 = x1 / (2 * a);

            printf("x = %.2f", x1);
        }
        else
        {
            printf("NO HAY SOLUCION PARA LA ECUACION");
        }

        fflush(stdin); 
        printf("\n Desea hacer otro calculo? (y/n) ");
        scanf("%c", &opc);
    }
	while(opc != 'n' && opc != 'N');

    printf("\nPRESIONA ENTER PARA SALIR"); 
    getch();
    return 0;
}
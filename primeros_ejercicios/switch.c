#include <stdio.h>
#include <conio.h>

int main (void)
{
    char opc = '';
    float a = 0.0, b = 0.0;
    clrscr();

    printf("Seleccione una opcion: \n");
    printf("[+] Sumar\n");
    printf("[-] Restar \n");
    printf("[*] Multiplicar \n");
    printf("[/] Dividir \n");
    printf("--> ");
    scanf("%c", &opc);

    switch(opc)
    {
        case '+':
            printf("Eligio sumar \n");

            printf("Ingrese el primer numero: ");
            scanf("%f", &a);

            printf("Ingrese el segundo numero: ");
            scanf("%f", &b);

            printf("la suma es: %.2f", (a + b));
            break;

        case '-':
            printf("Eligio restar \n");

            printf("Ingrese el primer numero: ");
            scanf("%f", &a);

            printf("Ingrese el segundo numero: ");
            scanf("%f", &b);

            printf("La resta es: %f", (a - b));
            break;

        case '*':
            printf("Eligio multiplicar \n");

            printf("Ingrese el primer numero: ");
            scanf("%f", &a);

            printf("Ingrese el segundo numero: ");
            scanf("%f", &b);

			printf("La multiplicacion es: %f", (a * b));
            break;


        case '/':
            printf("Ingrese el primer numero: ");
            scanf("%f", &a); 

            printf("Ingrese el segundo numero: "); 
            scanf("%f", &b); 

            printf("La division es: %.1f", (a / b)); 
            break; 

        default: 
            printf("Elija una opcion entre [1] a [4]");
            break;
    }
    


    getch(); 
    return 0;
}
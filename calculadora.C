#include <stdio.h> 
#include <conio.h> 

int main(void)
{
    int opc = 0, a = 0, b = 0, resultado = 0; 
    clrscr(); 

    printf("Selecione una opcion: \n"); 
    printf("[1] Sumar\n"); 
    printf("[2] Restar\n"); 
    printf("[3] Multiplicar\n"); 
    printf("[4] Dividir\n"); 
    printf("--> "); 

    scanf("%d", &opc); 

    if (opc == 1)
    {
        printf("Ingrese el primer numero: "); 
        scanf("%d", &a); 

        printf("Ingrese el segundo numero: "); 
        scanf("%d", &b); 

        resultado = a + b; 

        printf("El resultado es %d", resultado);

    }
    else if (opc == 2)
    {
        printf("Ingrese el primer numero: "); 
        scanf("%d", &a); 

        printf("Ingrese el segundo numero: "); 
        scanf("%d", &b); 

        resultado = a - b; 

        printf("El resultado es %d", resultado);

    }
    else if (opc == 3)
    {
        printf("Ingrese el primer numero: "); 
        scanf("%d", &a); 

        printf("Ingrese el segundo numero: "); 
        scanf("%d", &b); 

        resultado = a * b; 

        printf("El resultado es %d", resultado);

    }
    else if (opc == 4)
    {
        printf("Ingrese el primer numero: "); 
        scanf("%d", &a); 

        printf("Ingrese el segundo numero: "); 
        scanf("%d", &b); 

        resultado = a / b; 

        printf("El resultado es %d", resultado);
    }
    else
    {
        printf("La opcion es incorrecta!!!!");
    }


    getch(); 
}
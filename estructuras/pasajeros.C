#include <stdio.h>
#include <conio.h>



typedef struct{
	char nombre_completo[51];
    char correo[50];
    char numero[9];
    char codigo_pasaporte[10];
    char codigo_vuelo[7];
    char boletos[3][2];
}persona;

/*
struct persona{
	char nombre_completo[51];
    char correo[50];
    char numero[9];
    char codigo_pasaporte[10];
    char codigo_vuelo[7];
    char boletos[3][2];
};
*/


int main(void)
{
    /* struct persona n[3]; */
    persona n[3];

    char tecla = '';
    int i = 0, j = 0;
    clrscr();

    for (j = 0; j < 3; j++)
    {
        printf("Ingrese su nombre completo: ");
    
        i = 0;
        do
        {
            tecla = getch();

            if (tecla == 13)
            {
                n[j].nombre_completo[i] = '\0';
            }
            else
            {
                printf("%c", tecla);
                n[j].nombre_completo[i] = tecla;
            }
            
            i++;
        }
        while (tecla != 13);
        
        printf("\nIngrese su correo: ");
        scanf("%s", &n[j].correo);

        printf("Ingrese su numero de telefono: ");
        scanf("%s", &n[j].numero);

        printf("Ingrese su codigo de pasaporte: ");
        scanf("%s", &n[j].codigo_pasaporte);

        printf("Ingrese el codigo del vuelo: ");
        scanf("%s", &n[j].codigo_vuelo);


        printf("PRESIONE ENTER PARA CONTINUAR");
        getch();
        clrscr();
    }



    for (j = 0; j < 3; j++)
    {
        printf("Nombre: %s\n", n[j].nombre_completo);
        printf("Correo: %s\n", n[j].correo);
        printf("Numero: %s\n", n[j].numero);
        printf("Cod. Pasaporte: %s\n", n[j].codigo_pasaporte);
        printf("Cod. Vuelo: %s\n", n[j].codigo_vuelo);


        
        printf("PRESIONE ENTER PARA CONTINUAR");
        getch();
        clrscr();
    }

    









    getch();
    return 0;
}
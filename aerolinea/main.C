#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <stdlib.h>

void pantalla_carga(void);
char login(void);

int main(void)
{


    if (login() == 'T')
    {
        pantalla_carga();
		printf("Bienvenido!!!");
		delay(5000);
    }

    
    return 0;
}

void pantalla_carga(void)
{
    clrscr();
    printf("CARGANDO.");
    delay(700);
    printf(".");
    delay(700);
    printf(".");
    delay(700);
    printf(".");
    printf("\n\n\nPRESIONE ENTER PARA CONTINUAR");
    getch();
    clrscr();
}

char login(void)
{
    /*
    * user = MFA\0
    * password = QWERTY\0
    */
    char user[4] = {'M', 'F', 'A', '\0'};
    char password[7] = {'Q', 'W', 'E', 'R', 'T', 'Y', '\0'};
    /*char password[4] = {'1', '2', '3', '\0'};*/
    char user_i[15], password_i[7], aux = '';
    int trys = 3, i = 0;
    
    do 
    {
        fflush(stdin);
        for (i = 0; i < 15; i++)
            user_i[i] = '';
        
        /*user_i[14] = '\0';
        password_i[6] = '\0';*/

        for (i = 0; i < 7; i++)
            password_i[i] = '';

        clrscr();
        printf("Ingrese su usuario: ");
        scanf("%s", &user_i);

        printf("Ingrese su contrase%ca: ", 164);
        /*scanf("%s", &password_i);*/
        /*no es seguro*/
        
        i = 0; 

        do
        {
            aux = getch();

            if (aux == 13)
                break;

            printf("*");
            password_i[i] = aux;
            i++;
        }
        while(aux != 13);

        password_i[i] = '\0';

        
        printf("\n\n\n==>%s", password_i);
        getch();

        /*printf("\n\n\n");

        printf("\nUsuario: %s", user);
        printf("\nPassword: %s", password);

        printf("\n===============================");

        printf("\nUsuario: %s", user_i);
        printf("\nPassword: %s", password_i[);*/


        if (strcmp(user, user_i) == 0)
        {
            if (strcmp(password, password_i) == 0)
            {
                return 'T';
            }
            else
            {
                printf("\n\n\nUsuario y/o contrase%ca incorrectos", 164);
                trys--;
            }
        }
        else
        {
            printf("\n\n\nUsuario y/o contrase%ca incorrectos", 164);
            trys--;
        }

        printf("\n\nIntentos restastes %02d", trys);
        delay(5000);
    }
    while(trys > 0);

    pantalla_carga();
    printf("\nMuchos intentos fallidos");
    printf("\nEl sistema se cerrara automaticamente...");
    delay(5000);

    return 'F'; 
}
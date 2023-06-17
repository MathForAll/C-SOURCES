#include <stdio.h>
#include <conio.h> 
#include <string.h> 


int main(void)
{
    char correo[50]; 
    char verificacion[] = {'@', 'g', 'm', 'a', 'i', 'l', '.', 'c', 'o', 'm', '\0'};
    char aux[50]; 
    int i = 0, j = 0; 
    do
    {
        clrscr();

        printf("Ingrese su correo: ");
        gets(correo);

        if (strlen(correo) <= 10)
            printf("Correo incorrecto!!!");
    }
    while (strlen(correo) <= 10);



	for (i = strlen(correo) - 10, j = 0; i < strlen(correo); i++)
    {
        aux[j] = correo[i];
        j++;
    }    

    if ((strcmp(aux, verificacion)) != 0)
            printf("Correo incorrecto!!!");
    else
		printf("Correo coreccto");
    
    getch();
    return 0;
}
/*
* Funcionalidad
*
* Identificacion (usuario/contasena || pin)
* Menu (
  Consultar saldo
  Retirar dinero
  Depositar dinero
  Adelanto de salario
  cambio de pin||contasena
  recarga electronica
  salir
  )
*/


#include <stdio.h>
#include <conio.h>
#include <dos.h>

void pantalla_carga(void);

int main(void)
{
	int pin = 0, intentos = 3, estado = 0;
    int opc = 0;
    float saldo = 5000;
	int retirar = 0;
    float deposito = 0;
    /*
    * estados {0: inactivo, 1: activo}
    */
	clrscr();

    do
    {
        clrscr();
        printf("INGRESE SU PIN: ");
        scanf("%d", &pin);
        /*
        * pin = 2109
        */
        if (pin == 2109)
        {
            printf("Ha accedido al sistema...");
            estado = 1;
            break;
        }
        else
        {
            intentos--;
            printf("PIN incorrecto!!!\n");
            printf("Le quedan %d", intentos);
            delay(1000);
        }
    }
    while(intentos > 0);



    if (estado == 1)
    {
        do
        {
            pantalla_carga();
            printf("BIENVENIDO AL SISTEMA\n");
            printf("[1] Consultar Saldo\n");
            printf("[2] Retirar Saldo\n");
            printf("[3] Depositar Saldo\n");
            printf("[4] Adelanto de Salario\n");
            printf("[5] Cambio de Pin\n");
            printf("[6] Recarga electonica\n");
            printf("[7] Salir\n");
            printf("--> ");
            scanf("%d", &opc);

            pantalla_carga();
            switch(opc)
            {
                case 1:
                    printf("SELECIONO CONSULTA DE SALDO\n");
                    printf("Su saldo es: %.2f\n", saldo);
                    printf("PRESIONE ENTER PARA CONTINUAR\n");
                    break;
                case 2:
                    printf("SELECCIONO RETIRAR SALDO\n");
                    printf("Digite la cantidad a retirar: ");
                    scanf("%d", &retirar);

                    if (retirar <= saldo)
                    {
                        saldo -= retirar; 
                        printf("RETIRO EXITOSO\n");
                        printf("\nSaldo restante %.2f", saldo);
                    }
                    else
                    {
                        printf("\nNO CUENTA CON SUFICIENTE DINERO");
                    }

                        
                    printf("PRESIONE ENTER PARA CONTINUAR\n");
                    break;
                case 3:
                    printf("SELECCIONO DEPOSITAR\n");
                    printf("Ingrese la cantidad a depositar: ");
                    scanf("%f", &deposito);

                    saldo += deposito;

                    printf("Ahora su nuevo saldo es de: %.2f\n", saldo);
                    printf("Presione enter para salir");
                    break;
                case 4: 
                    printf("SELECCIONO ADELANTO DE SALARIO");
                    break;
                case 5:
                    printf("SELECCIONO CAMBIO DE PIN");
                    break;
                case 6: 
                    printf("SELECCIONO RECARGA ELECTRONICA");
                    break;
                case 7:
                    printf("HAS SELECCIONADO SALIR");
                    break;
                default:
                    printf("OPCION INCORRECTA VUELVA INTERTARLO NUEVAMENTE");
                    break;
            }
            getch();    
        }
        while(opc != 7);

    }
    else
    {
        pantalla_carga();
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


/*

tipo_dato nombre (parametro)
{

}


*/
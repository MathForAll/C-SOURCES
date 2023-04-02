#include<stdio.h>
#include<conio.h>

int main(void)
{
    int x = 0, y = 0, z = 0;
    clrscr();
    printf("Ingrese el primer valor ");
    scanf("%i",&x);
    clrscr();
    printf("Ingrese su segundo valor ");
    scanf("%i",&y);
    z= x+y;
    clrscr();
    printf("la suma de sus valores es: %i ",z);

    getch();
    return 0;

}
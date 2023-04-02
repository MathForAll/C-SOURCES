#include <stdio.h>
#include <conio.h>

int main (void)
{
    float x = 0;
    float y = 0;
    float z = 0;
    float resultado = 0;
    clrscr();
printf("escriba la primer nota");
scanf ("%f" ,&x);
printf("escriba la segunda nota");
scanf("%f" ,&y);
printf("escriba la tercer nota");
scanf("%f" ,&z);

resultado = (x+y+z)/3;
printf("El promedio es %f",resultado);

if (resultado >= 60 )
{
    printf("El estudiante aprobo");
}
else
{
    printf("El estudiante no clasifico");
}

        

getch();
return 0;

}
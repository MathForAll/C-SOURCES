#include <stdio.h>
#include <conio.h>
#include <MATH.h>

int main(void)
{
    float x = 3.14;

    float y = 3.66738;

    int z = 5;
    float raiz = sqrt(z);

    clrscr();

	printf("x es %f\n", x);
    printf("x redondeado es %f \n", floor(x));
	printf("x redondeado es %f \n", ceil(x));

    printf("y es %f\n", y);
    printf("y es redondeado %.2f\n", y);


    printf("z es %d\n", z);
    printf("la raiz es %f\n\n", raiz);


	printf("z elevado a la y %f", pow(z, 3));




    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void)
{
    int n = 0, i = 0;
    clrscr();

    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
		n = rand() % 101;
		printf("El numero es: %d\n", n);
    }
    


    getch(); 
    return 0;
}
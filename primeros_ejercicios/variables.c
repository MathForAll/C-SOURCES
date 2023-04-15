#include <stdio.h>
#include <conio.h>

int main(void)
{
    int x;
    int y;
    int z;
	clrscr();

    x = 6;
    z = 8;
    y = x + z;

    printf("x = %i \n", x);
    printf("z = %i \n", z);
    printf("y = %i \n", y);

    getch();
    return 0;
}
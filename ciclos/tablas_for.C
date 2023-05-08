#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
    int n = 3;
    int i = 0;
    clrscr();

    for (i = 0; i <= 12; i++)
    {
		printf("%d * %d = %d\n", n, i, (n * i));
    }

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>

int main (void)
{
    int n = 0;
    clrscr();

	for (n = 0; n <= 100; n++)
		printf("%03d ", (n * 5));


    getch();
    return 0;
}
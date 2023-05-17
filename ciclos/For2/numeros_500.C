#include <stdio.h>
#include <conio.h>

int main (void)
{
    int n = 0;
    clrscr();

    for (n = 0; n <= 500; n += 5)
    {
        printf("%03d ", n);
    }

    getch();
    return 0;
}
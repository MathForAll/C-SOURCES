#include <stdio.h>
#include <conio.h>

int main(void)
{
    int x = 0;
    clrscr();
    while(x <= 100)
    {
        printf("%03d  ", (5*x));
        x++;
    }


    getch();
    return 0;
}
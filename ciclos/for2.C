#include <stdio.h>
#include <conio.h> 

int main (void)
{
    int i = 0; 
    clrscr();

    for (i = 0; i <= 100; i += 5)
    {
        printf("%03d ", i);
    }

    getch();
    return 0;
}
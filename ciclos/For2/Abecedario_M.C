#include <stdio.h>
#include <conio.h>

int main (void)
{
    int i = 0;
    clrscr();
    
    for(i = 97; i <= 122; i++)
    {
        printf("%c ",i);
    }

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>

int main (void)
{
    int i = 0;
    clrscr();
    
    for(i = 122; i >= 97; i--)
    {
        printf("%c ",i);
    }

    getch();
    return 0;
}
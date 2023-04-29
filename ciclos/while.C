#include <stdio.h>
#include <conio.h>

int main(void)
{


    int x = 100;
    clrscr();

    /*
    do
    {
        printf("%03i ", x);
        x--;
    }
	while(x >=200);
    */

    while(x >= 0)
    {
        printf("%03i ", x);
        x -= 5; /*x = x - 5*/
    }


    getch();
    return 0;
}
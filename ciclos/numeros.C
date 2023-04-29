#include <stdio.h>
#include <conio.h>

int main(void)
{

    int x = 0;
    clrscr();
    while(x<= 300)
    {
		printf("%03d ",x);
        x += 5;
    }

	getch();
    return 0;
}
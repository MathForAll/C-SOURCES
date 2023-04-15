#include <stdio.h>
#include <conio.h>


int main(void)
{
	int n = 0;
	clrscr();
    do
	{
		if ((n % 5) == 0)
			printf("\n");

		printf("%03d ", n);
		n++;
    }
    while(n <= 100);


    getch(); 
    return 0;
}
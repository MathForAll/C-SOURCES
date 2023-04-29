#include <stdio.h> 
#include <conio.h> 

int main(void)
{
    int n = 3; 
    int i = 0; 
    clrscr();

    while(i <= 12)
    {
        printf("%d * %d = %d\n", n, i, (n * i));
        i++;
    }

    getch();
    return 0;
}
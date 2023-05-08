#include <stdio.h>
#include <conio.h>

int main()
{
    int birth = 0;
	int i = 0;
	clrscr();

    printf("Ingrese se anio de nacimiento: ");
    scanf("%d", &birth);

    for (i = birth; i <= 2023; i++)
		printf("%d\n", i);

    getch();
    return 0;
}
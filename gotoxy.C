#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include "auxiliar.H"
#include <stdlib.h>


int main (void)
{
    

    clrscr();
    aletorio();
    getch();
   

    carga(); 
  

	gotoxy(1, 1);
    printf("X");
	gotoxy(80, 1);
	printf("X");
	gotoxy(80, 23);
    printf("X");
	gotoxy(1, 23);
	printf("X");

    gotoxy(5,5);



    getch();
    return 0; 
}
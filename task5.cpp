#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void move();
void bigAlphabet();
main()
{
system("cls");     
gotoxy(9,5);
bigAlphabet();
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void bigAlphabet()
{
cout<<"**************      **        **   ************   **      **        *        *****        **";
gotoxy(9,6);
cout<<"**           *      **        **   **        **   **      **      ** **      **  **       **";
gotoxy(9,7);
cout<<"**           *      **        **   **        **   **      **    **    **     **   **      **";
gotoxy(9,8);
cout<<"**          *       **        **   **        **   **      **   **      **    **    **     **";
gotoxy(9,9);
cout<<"**         *        **        **   **        **   **      **   **      **    **     **    **";
gotoxy(9,10);
cout<<"***********         **        **   ***********    **********   **********    **      **   **";
gotoxy(9,11);
cout<<"**         *        **        **   ** **          **      **   **      **    **       **  **";
gotoxy(9,12);
cout<<"**          *       **        **   **  **         **      **   **      **    **        ** **";
gotoxy(9,13);
cout<<"**           *      **        **   **    **       **      **   **      **    **         ****";
gotoxy(9,14);
cout<<"**            *     ************   **      **     **      **   **      **    **          ***";
gotoxy(9,15);
cout<<"**************      ************   **        **   **      **   **      **    **           **";
}
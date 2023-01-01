#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void alphA();
void alphW();
void alphA2();
void alphI();
void alphS();

main()
{
system("cls");     
gotoxy(9,5);
alphA();
alphW();
alphA2();
alphI();
alphS();
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void alphA()
{
cout<<"     # ";
gotoxy(10,6);
cout<<"   ## ##";
gotoxy(10,7);
cout<<" ###   ###";
gotoxy(10,8);
cout<<"###     ###";
gotoxy(10,9);
cout<<"###     ### ";
gotoxy(10,10);
cout<<"###########";
gotoxy(10,11);
cout<<"###     ### ";
gotoxy(10,12);
cout<<"###     ### ";
gotoxy(10,13);
cout<<"###     ### ";
gotoxy(10,14);
cout<<"###     ### ";
gotoxy(10,15);
cout<<"###     ### ";
}
void alphW()
{
gotoxy(10,19);
cout<<"###             ###";
gotoxy(10,20);
cout<<"###             ###";
gotoxy(10,21);
cout<<"###             ### ";
gotoxy(10,22);
cout<<"###             ###";
gotoxy(10,23);
cout<<"###             ### ";
gotoxy(10,24);
cout<<"###     ##      ###";   
gotoxy(10,25);
cout<<"###    ## ##    ###";
gotoxy(10,26);
cout<<"###   ##   ##   ###";
gotoxy(10,27);
cout<<"###  ##     ##  ###";
gotoxy(10,28);
cout<<"### ##       ## ###";
gotoxy(10,29);
cout<<"###             ####";
}
void alphA2()
{
cout<<"     # ";
gotoxy(10,33);
cout<<"   ## ##";
gotoxy(10,34);
cout<<" ###   ###";
gotoxy(10,35);
cout<<"###     ###";
gotoxy(10,36);
cout<<"###     ### ";
gotoxy(10,37);
cout<<"###########";
gotoxy(10,38);
cout<<"###     ### ";
gotoxy(10,39);
cout<<"###     ### ";
gotoxy(10,40);
cout<<"###     ### ";
gotoxy(10,41);
cout<<"###     ### ";
gotoxy(10,42);
cout<<"###     ### ";
}
void alphI()
{
gotoxy(10,46);
cout<<"###            ";
gotoxy(10,47);
cout<<"###             ";
gotoxy(10,48);
cout<<"###              ";
gotoxy(10,49);
cout<<"###             ";
gotoxy(10,50);
cout<<"###";   
gotoxy(10,51);
cout<<"###";
gotoxy(10,52);
cout<<"###";
gotoxy(10,53);
cout<<"###";
gotoxy(10,54);
cout<<"###";
gotoxy(10,55);
cout<<"###";
}
void alphS()
{
gotoxy(10,59);
cout<<"##############            ";
gotoxy(10,60);
cout<<"##############             ";
gotoxy(10,61);
cout<<"###              ";
gotoxy(10,62);
cout<<"###             ";
gotoxy(10,63);
cout<<"##############";   
gotoxy(10,64);
cout<<"##############";
gotoxy(10,65);
cout<<"           ###";
gotoxy(10,66);
cout<<"           ###";
gotoxy(10,67);
cout<<"           ###";
gotoxy(10,68);
cout<<"##############";

}
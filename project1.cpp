#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void playerMove(int,int);
main()
{
system("cls");     
printMaze();
int x=3;
int y=3;
while(true)
    { 
playerMove(x,y);
  if(x<20)
{
x=x+1;
}
   if(x==20)
{
  gotoxy(x-1,y);
cout<<" ";
x=3;
}

}
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze()
{
cout<<" _______ ________________________________________";
cout<<endl;
cout<<"|	|    _____________	________________|";        
cout<<endl;
cout<<"|__|	|__________	  |   			|   _____ ";      
cout<<endl;
cout<<"|  |    |   ____________________|     _____	|  |     |";
cout<<endl;
cout<<"|	   |	__________	|    |	   |	|  |   __|";
cout<<endl;
cout<<"|______	   |			|_____ 	   |____|     |__|";
cout<<endl;
cout<<"|  |______________________	|____________________    |";
cout<<endl;
cout<<"|		  |				     | 	 |";
cout<<endl;
cout<<"|_____________ 	  |	_____________	  _______    |   |";
cout<<endl;
cout<<"	      	     |	  |____________	     |		     |   | ";
cout<<endl;
cout<<"	      	     |		       |     |		  ___|___|";
cout<<endl;
cout<<"	       __________      	       |     |	    |		 |";	
cout<<endl;
cout<<"	      |		 |     	       |     |	    |____________|";
cout<<endl;
cout<<"	      |   _______|     	       |_____|      |		 |";
cout<<endl;
cout<<"	      |					    |	     ____|";
cout<<endl;
cout<<"       |	   ___________ 		 ______  |  |	 |	";
cout<<endl;
cout<<"	      |   | 			|   	 |  |	 |       ";
cout<<endl;
cout<<"	      |___|_____________________|________|_______|	";
}
void playerMove(int x, int y)
{
  gotoxy(x-1,y);	
  cout<<" ";
    gotoxy(x,y);	
  cout<<"P";
Sleep(200);
}





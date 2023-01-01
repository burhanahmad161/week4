#include<iostream>
#include<windows.h>
using namespace std;
void printTrue(int,int);
void printFalse(int,int);
main()
{
system("cls");     
int a,b;
cout<<"enter a number:";
cin>>a;
cout<<"enter a number:";
cin>>b;
  printTrue(a,b);
 printFalse(a,b);
}
void printTrue(int a ,int b)
{
 if(a==b)
	{
	  cout<<"true";
	}
}
void printFalse(int a,int b)
{
if(a!=b)
	{
	  cout<<"false";
	}
}
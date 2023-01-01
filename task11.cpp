#include<iostream>
using namespace std;
void speedLimit(int speed);
void highSpeed();
void normalSpeed();
main()
{
int speed;
cout<<"enter your speed";
cin>>speed;
if(speed>100)
	{
	 highSpeed();;
	}
if(speed==100)
	{
	normalSpeed();
	}	
}
void highSpeed()
{
  cout<<"Halt….YOU WILL BE CHALLENGED!!!"; 
}
void normalSpeed()
{
  cout<<"Perfect! You’re going good."; 
}
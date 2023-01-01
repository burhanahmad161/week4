#include<iostream>
#include<windows.h>
using namespace std;
void pak(int,string);
void ire(int,string);
void ind(int,string);
void eng(int,string);
void can(int,string);
main()
{
system("cls");     
string country;
int price;
cout<<"Enter country name:";
cin>>country;
cout<<"Enter price:";
cin>>price;

ire(price,country);
ind(price,country);
eng(price,country);
can(price,country);
  if(country=="Pakistan")
  {
	pak(price,country);   
  }
	if(country=="Ireland")
  	{	
	ire(price,country);   
  	}
	if(country=="India")
  	{	
	ind(price,country);   
  	}
	if(country=="England")
  	{	
	eng(price,country);   
  	}
	if(country=="Canada")
  	{	
	can(price,country);   
  	}
}
void pak(int price,string country)
{
	int final_price=price*5/100;
	cout<<"Final price is"<<final_price;
}
void ire(int price,string country)
{
	int final_price=price*10/100;
	cout<<"Final price is"<<final_price;
}
void ind(int price,string country)
{
	int final_price=price*20/100;
	cout<<"Final price is"<<final_price;
}
void eng(int price,string country)
{
	int final_price=price*30/100;
	cout<<"Final price is"<<final_price;
}
void can(int price,string country)
{
	int final_price=price*45/100;
	cout<<"Final price is"<<final_price;
}

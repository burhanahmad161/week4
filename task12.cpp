#include<iostream>
using namespace std;
void totalPrice(int roses,int white,int tulips);
void discPrice(float disc_price,float total_price);
main()
{
int roses,white,tulips;
float disc_price,total_price;
cout<<"enter number of red roses:";
cin>>roses;
cout<<"enter number of white roses:";
cin>>white;
cout<<"enter number of tulips:";
cin>>tulips;

total_price=(roses*2)+(white*4.10)+(tulips*2.5);
if(total_price>200)
       {
	discPrice(disc_price,total_price);	
	}
}
void discPrice(float disc_price,float total_price)
{
       disc_price=total_price*20/100;
	cout<<"final price is:"<<disc_price;
}
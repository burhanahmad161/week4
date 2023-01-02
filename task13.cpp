#include<iostream>
using namespace std;
void tomresult(int holidays);
main()
{
int holidays;
cout<<"enter number of holidays";
cin>>holidays;
tomresult(holidays);
}
void tomresult(int holidays)
{
int work_days=365-holidays;
int time_games=(work_days*63)+(holidays*127);
int differ_norm=30000-time_games;
float differ_in_min=differ_norm*0.16666667;
cout<<"tom sleep well"<<differ_in_min<<"hours"<<endl;
cout<<"tom will play"<<time_games<<endl;
}	
#include<iostream>
using namespace std;
void calculateAggregate();
void compareMarks();
main()
{
   int operation;
   cout<<"enter your operation i.e 1 for aggregate and 0 for comparison";
   cin>>operation;
   if(operation==1)
	{
		calculateAggregate();
	}
   if(operation==0)
	{
	      compareMarks();
	}        
  }
void calculateAggregate()
{
  float matric_marks,inter_marks,ecat_marks;
  string name;
  float percentage_matric,weightage_matric;
 float percentage_inter,weightage_inter;	
 float percentage_ecat,weightage_ecat,aggregate;
cout<<"enter your name"; 
	cin>>name;
	cout<<"enter your matric marks:";
	cin>>matric_marks;
	cout<<"enter your inter marks";
	cin>>inter_marks;
	cout<<"enter your ecat marks:";
	cin>>ecat_marks;
	percentage_matric=matric_marks*100/1100;
	weightage_matric=percentage_matric*0.1;
	cout<<"weightage of matric marks is"<<weightage_matric<<endl;
	percentage_inter=inter_marks*100/550;
	weightage_inter=percentage_matric*0.4;
	cout<<"weightage of inter marks is"<<weightage_inter<<endl;
	percentage_ecat=ecat_marks*100/400;
	weightage_ecat=percentage_ecat*0.5;
	cout<<"weightage of ecat marks is"<<weightage_ecat<<endl;
	aggregate=weightage_matric+weightage_inter+weightage_ecat;
	cout<<"aggregate is:"<<aggregate;
}
void compareMarks()
{
	string s1_name,s2_name;
	int ecat_st1,ecat_st2;
	cout<<"enter your name:";
	cin>>s1_name;
	cout<<"enter your ecat number:";
	cin>>ecat_st1;
	cout<<"enter your name:";
	cin>>s2_name;
	cout<<"enter your ecat number:";
	cin>>ecat_st2;
  if(ecat_st1>ecat_st2)
   {
      cout<<"roll number 1:"<<ecat_st2<<endl;
	cout<<"roll number 2:"<<ecat_st1<<endl;
    }
  if(ecat_st1<ecat_st2)
    {
          cout<<"roll number 1"<<ecat_st1<<endl;
	cout<<"roll number 2"<<ecat_st2<<endl;
    }
}

	










#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//variable delcaration
double overTimeHours;
double rate;
double stdHours;
double salary;

//pointer variable declaration
int *ptrOverTimeHours = new int();
int *ptrRate = new int();
int *ptrStdHours = new int();

//get user input
cout<<"Enter standard hours worked: ";
cin>>stdHours;
cout<<"Enter the pay rate: ";
cin>>rate;
cout<<"Enter overtime hours worked: ";
cin>>overTimeHours;

//calculate salary
salary = stdHours * rate + 1.5 * overTimeHours * rate;

//initialize pointer variable
ptrStdHours = (int*)&stdHours;
ptrRate = (int*)&rate;
ptrOverTimeHours = (int*)&overTimeHours;

//display the output
cout<<endl<<setw(18)<<left<<"stdHours = "<<fixed<<setprecision(2)<<stdHours<<setw(22)<<"\t\tptrStdHours = "<<ptrStdHours;
cout<<endl<<setw(18)<<"rate = "<<fixed<<setprecision(2)<<rate<<setw(22)<<"\t\tptrRate = "<<ptrStdHours;
cout<<endl<<setw(18)<<"overTimeHours = "<<fixed<<setprecision(2)<<overTimeHours<<setw(22)<<"\t\tptrOverTimeHours = "<<ptrStdHours;
cout<<endl<<endl<<setw(10)<<setprecision(2)<<"Total salary = "<<salary;

//delete ptrStdHours;
//delete ptrRate;
//delete ptrOverTimeHours;
return 0;
}
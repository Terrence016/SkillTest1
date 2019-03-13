#include <iomanip>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{

	double hours;
	cout << "How many hours a day do you work?  ";
	cin >> hours;
	cout << "Daily Gross Income: $" << setprecision(2) << fixed << hours * 15.50 <<endl;

	double days;
	cout << "How many days a week do you work?  ";
	cin >> days;	
	cout << "Weekly Gross Income: $" << setprecision(2) << fixed << days * hours * 15.50 << "\n" <<endl; 

	cout << "Whole Summer Job Expenses"<<endl;	
	cout << "Gross Income: $" << setprecision(2) << fixed << days * hours * 15.50 * 5 <<endl;
	cout << "Net Income: $" << setprecision(2) << fixed << (days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14) << "\n" <<endl;
	
	cout << "Money alloted for:"<<endl;
	cout << "Clothes & Accessories : $" << setprecision(2) << fixed << ((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10 <<endl;
	cout << "School Supplies: $" << setprecision(2) << fixed << ((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01 <<endl;
	cout << "Saving Bonds: $" << setprecision(2) << fixed << ((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10)) <<endl;
	cout << "Additional Saving Bonds from Parents: $" << setprecision(2) << fixed << (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10))) / 2 <<endl;
	cout << "Total Saving Bonds: $" << setprecision(2) << fixed << ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10))) / 2 ) + ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10))))<<endl;

	_getch();
	return 0;
}
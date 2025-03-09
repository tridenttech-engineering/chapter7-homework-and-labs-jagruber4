//Lab7-4.cpp - displays the average electric bill
//Created/revised by Jake Gruber on 9 Mar 2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare named constants and variables
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;
	int months = 0;

	//get user inputs
	cout << "Bill for month 1: ";
	cin >> bill;
	while (bill >= 0.0)
		{
			totalBills += bill;
			months += 1;
			cout << "Bill for month " << months + 1 << ": ";
			cin >> bill;
			
		}//end while

	if (months > 0)
	{
		avgBill = totalBills / months;
		cout << fixed << setprecision (2);
		cout << "Average electric bill for " << months << " months is $" << avgBill << endl;
	}

	else 

		cout << "No bill amount entered." << endl;
		
	//end if
	
	return 0;
}	//end of main function
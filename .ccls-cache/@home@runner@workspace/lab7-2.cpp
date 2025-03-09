//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by Jake Gruber on 9 Mar 2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare named constants and variables
    double sales = 0.0;
    const double growthRate = 0.055;
    double increase = 0.0;
    int years = 0;

    //get current sales
    cout << "Current year's sales: ";
    cin >> sales;

    //while loop to calculate sales each year
    while (sales < 150000.0)
        {
            increase = sales * growthRate;
            sales += increase;
            years += 1;
            
        }//end while

    //display the number of years and sales
    cout << fixed << setprecision (2);
    cout << "Sales " << years << " years from now: $" << sales << endl;

    
    return 0;
} //end of main function

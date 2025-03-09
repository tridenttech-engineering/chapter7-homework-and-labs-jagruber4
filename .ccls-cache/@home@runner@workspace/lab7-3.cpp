//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    //declare named constants and variables
    int day = 1;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    //for loop to get number of texts each day
    while (day < 8)
        {
            cout << "How many text messages did you send on day " << day << "? ";
            cin >> dailyTexts;
            totalTexts += dailyTexts;
            day += 1;
        }//end for

    //calculate and display the average
    average = static_cast<double>(totalTexts) / (day - 1);
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages each day." << endl;

    return 0;
}   //end of main function
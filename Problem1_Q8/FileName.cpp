#include <iostream>
using namespace std;

int main() 
{
    //(Population projection) The U.S. 
    //Census Bureau projects population based on the following assumptions: (Lab)■■ One birth every 7 seconds ■■ One death every 13 seconds ■■ One new immigrant every 45 seconds.
    //Write a program to display the population for each of the next five years. Assume that the current population is 312,032,486, and one year has 365 days. 

    int current_population;
    cout << "What is the current popualtion: ";
    cin >> current_population;

    int seconds_in_year = 365 * 24 * 60 * 60;

    int births_per_year = seconds_in_year / 7;
    int deaths_per_year = seconds_in_year / 13;
    int immigrants_per_year = seconds_in_year / 45;

    for (int year = 1; year <= 5; year++) 
    {
        current_population += births_per_year + immigrants_per_year - deaths_per_year;
        cout << "Year " << year << ": " << current_population << endl;
    }

    return 0;
}
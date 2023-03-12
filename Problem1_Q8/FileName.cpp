#include <iostream>
using namespace std;

int main() {
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
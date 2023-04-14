#include <iostream>
#include <stdio.h>
using namespace std;


int main() {

    int human_age, days_years, hours_years;

    days_years = 365, hours_years = 8760;

    cout << "===================\n";
    cout << "enter your age\n";cin >> human_age;
    cout << "===================\n";
    system("clear");

    if (human_age <= 150) {
        cout << "===================\n";
        cout << "age in days: " << human_age*days_years << endl;
        cout << "age in hours: " << human_age*hours_years << endl;
        cout << "===================\n";
    }

    else{
        cout << "==========================================\n";
        cout << "Sorry, I only accept numbers from 1 to 150\n";
        cout << "==========================================\n";
    }

    return 0;
}

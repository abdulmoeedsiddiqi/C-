
#include <iostream>
using namespace std;

int main() {
    int ageYears;

    // Prompt the user to enter age in years
    cout << "Enter your age in years: ";
    cin >> ageYears;

    // Calculate age in months
    int ageMonths = ageYears * 12;

    // Calculate remaining days if months is not completed
    int remainingDays = (ageYears * 365) % 30;

    // Display the results
    cout << "Your age in months: " << ageMonths << endl;
    if (remainingDays > 0) {
        cout << "And " << remainingDays << " days." << endl;
    }

    return 0;
}

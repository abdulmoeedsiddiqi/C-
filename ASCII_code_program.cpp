#include <iostream>
using namespace std;

int main() {
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is within the valid ASCII range
    if (number >= 0 && number <= 127) {
        // Convert the number to its corresponding ASCII character
        char asciiCharacter = static_cast<char>(number);

        // Display the ASCII character
        cout << "The ASCII character for " << number << " is: " << asciiCharacter << endl;
    } else {
        cout << "Invalid input. Please enter a number between 0 and 127." << endl;
    }

    return 0;
}

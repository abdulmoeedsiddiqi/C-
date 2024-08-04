
#include <iostream>
using namespace std;

int main() {
    int choice;
    char sub_choice;

    cout << "Select from the following:\n1. Inch Centimeter Conversion.\n2. Gallon Liters Conversion.\n3. Mile Kilometer Conversion.\n4. Pound Kilogram Conversion.\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Select\n(a) Inch To Centimeter\n(b) Centimeter to Inch\n";
            cin >> sub_choice;
            switch (sub_choice) {
                case 'a': {
                    float inch;
                    cout << "Enter inches: ";
                    cin >> inch;
                    cout << "There are " << 2.54 * inch << " centimeters in " << inch << " inches.\n";
                    break;
                }
                case 'b': {
                    float centimeter;   
                    cout << "Enter centimeters: ";
                    cin >> centimeter;
                    cout << "There are " << centimeter / 2.54 << " inches in " << centimeter << " centimeters.\n";
                    break;
                }
                default:
                    cout << "Invalid case.\n";
            }
            break;

        case 2:
            cout << "Select\n(a) Gallon To Liters\n(b) Liters To Gallon\n";
            cin >> sub_choice;
            switch (sub_choice) {
                case 'a': {
                    float gallon;
                    cout << "Enter Gallons: ";
                    cin >> gallon;
                    cout << "There are " << 3.785 * gallon << " liters in " << gallon << " gallons.\n";
                    break;
                }
                case 'b': {
                    float liters;
                    cout << "Enter Liters: ";
                    cin >> liters;
                    cout << "There are " << liters / 3.785 << " gallons in " << liters << " liters.\n";
                    break;
                }
                default:
                    cout << "Invalid case.\n";
            }
            break;

        case 3:
            cout << "Select\n(a) Mile To Kilometer\n(b) Kilometer To Mile\n";
            cin >> sub_choice;
            switch (sub_choice) {
                case 'a': {
                    float mile;
                    cout << "Enter Miles: ";
                    cin >> mile;
                    cout << "There are " << 1.60934 * mile << " kilometers in " << mile << " miles.\n";
                    break;
                }
                case 'b': {
                    float kilometer;
                    cout << "Enter Kilometers: ";
                    cin >> kilometer;
                    cout << "There are " << kilometer / 1.60934 << " miles in " << kilometer << " kilometers.\n";
                    break;
                }
                default:
                    cout << "Invalid case.\n";
            }
            break;

        case 4:
            cout << "Select\n(a) Pound To Kilogram\n(b) Kilogram To Pound\n";
            cin >> sub_choice;
            switch (sub_choice) {
                case 'a': {
                    float pound;
                    cout << "Enter Pounds: ";
                    cin >> pound;
                    cout << "There are " << 0.453592 * pound << " kilograms in " << pound << " pounds.\n";
                    break;
                }
                case 'b': {
                    float kilogram;
                    cout << "Enter Kilograms: ";
                    cin >> kilogram;
                    cout << "There are " << kilogram / 0.453592 << " pounds in " << kilogram << " kilograms.\n";
                    break;
                }
                default:
                    cout << "Invalid case.\n";
            }
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}

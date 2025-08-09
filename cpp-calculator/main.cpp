#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Simple C++ Calculator\\n";
    cout << "Usage: enter: <number> <op> <number> (op in + - * /)\\n";
    cout << "Example: 3.5 * 2\\n\\n";

    double leftOperand = 0.0;
    double rightOperand = 0.0;
    char operation = 0;

    while (true) {
        cout << "> ";
        if (!(cin >> leftOperand >> operation >> rightOperand)) {
            if (cin.eof()) {
                cout << "\nGoodbye!\n";
                break;
            }
            cout << "Invalid input. Please try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        double result = 0.0;
        bool ok = true;
        switch (operation) {
            case '+': result = leftOperand + rightOperand; break;
            case '-': result = leftOperand - rightOperand; break;
            case '*': result = leftOperand * rightOperand; break;
            case '/':
                if (rightOperand == 0.0) {
                    std::cout << "Error: division by zero.\n";
                    ok = false;
                } else {
                    result = leftOperand / rightOperand;
                }
                break;
            default:
                std::cout << "Unsupported operator: '" << operation << "'. Use one of + - * /\n";
                ok = false;
        }

        if (ok) {
            std::cout.setf(std::ios::fixed);
            std::cout.precision(6);
            std::cout << "= " << result << "\n";
        }

        // consume rest of line if anything remains
        if (std::cin.peek() == '\n') {
            std::cin.get();
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return 0;
}
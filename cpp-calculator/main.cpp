#include <iostream>
#include <limits>

int main() {
    std::cout << "Simple C++ Calculator\\n";
    std::cout << "Usage: enter: <number> <op> <number> (op in + - * /)\\n";
    std::cout << "Example: 3.5 * 2\\n\\n";

    double leftOperand = 0.0;
    double rightOperand = 0.0;
    char operation = 0;

    while (true) {
        std::cout << "> ";
        if (!(std::cin >> leftOperand >> operation >> rightOperand)) {
            if (std::cin.eof()) {
                std::cout << "\nGoodbye!\n";
                break;
            }
            std::cout << "Invalid input. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
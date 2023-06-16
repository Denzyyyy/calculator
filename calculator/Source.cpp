#include <iostream>
using namespace std;
int main() {
    char choice;
    double num1, num2, result;

    do {
        
        std::cout << "Calculator Menu:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        // Perform the selected operation
        switch (choice) {
        case '1':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '2':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '3':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            }
            else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
        }

        
        std::cout << "Do you want to perform another calculation? y/n: ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');


    return 0;
}

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            return 1;
    }

    cout << "Result: " << num1 << operation << num2 << " = " << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

int MainMenu();
int InputData(int, int&);
int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);

int main() {
    int num1 = 0, num2 = 0, choice, results = 0;
    char continueChoice = 'y', action = '=';

    do {
        do {
            choice = MainMenu();

            switch (choice) {
                case 1:
                    results = Addition(InputData(1, num1), InputData(2, num2));
                    action = '+';
                    break;

                case 2:
                    results = Subtraction(InputData(1, num1), InputData(2, num2));
                    action = '-';
                    break;

                case 3:
                    results = Multiplication(InputData(1, num1), InputData(2, num2));
                    action = '*';
                    break;

                case 4:
                    results = Division(InputData(1, num1), InputData(2, num2));
                    action = '/';
                    break;

                default:
                    cout << "User Input Incorrect\n\n";
                    break;
            }

            if (choice >= 1 && choice <= 4)
                cout << num1 << " " << action << " " << num2 << " = " << results << "\n";

        } while (choice < 1 || choice > 4);

        cout << "Do you want to repeat? (y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

int MainMenu() {
    int choice;

    cout << "---Please Select A Math Solution---\n";
    cout << "1. Add\n"
         << "2. Subtract\n"
         << "3. Multiply\n"
         << "4. Divide\n"
         << "\n"
         << "Enter A Choice: ";
    cin >> choice;

    return choice;
}

int InputData(int numOrder, int& num) {
    cout << "Enter number " << numOrder << ": ";
    cin >> num;
    return num;
}

int Addition(int num1, int num2) {
    return num1 + num2;
}

int Subtraction(int num1, int num2) {
    return num1 - num2;
}

int Multiplication(int num1, int num2) {
    return num1 * num2;
}

int Division(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero.\n";
        return 0;
    }
}

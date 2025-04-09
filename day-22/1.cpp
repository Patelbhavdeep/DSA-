#include <iostream>
using namespace std;

void calculator() {
    char user;
    int a, b;

    do {
        cout << "---------------------------" << endl;
        cout << " press + for Addition" << endl;
        cout << " press - for Subtraction" << endl;
        cout << " press * for Multiplication" << endl;
        cout << " press / for Division" << endl;
        cout << " press % for Modulus" << endl;
        cout << " press 0 to Exit" << endl;
        cout << "---------------------------" << endl;


        cout << "Enter any sign: ";
        cin >> user;

       
        switch (user) {
        case '+':
        case '-':
        case '*':
        case '%':
            cout << "Enter first value: ";
            cin >> a;
            cout << "Enter second value: ";
            cin >> b;
            break;
        }

        cout << "------------------------------------------" << endl;
        cout << "------------------------------------------" << endl;


        switch (user) {
        case '+':
            cout << "Your input is  : " << a << " + " << b << endl;
            cout << "Your output is : " << a + b << endl;
            break;

        case '-':
            cout << "Your input is  : " << a << " - " << b << endl;
            cout << "Your output is : " << a - b << endl;
            break;

        case '*':
            cout << "Your input is  : " << a << " * " << b << endl;
            cout << "Your output is : " << a * b << endl;
            break;

        case '/':
            cout << "Your input is  : " << a << " / " << b << endl;
            cout << "Your output is : " << float(a) / b << endl;
            break;

        case '%':
            cout << "Your input is  : " << a << " % " << b << endl;
            cout << "Your output is : " << a % b << endl;
            break;

        case '0':
            cout << "exit cacluater " << endl;
            break;

        default:
            cout << "Invalid input!" << endl;
            break;
        }

    } while (user != '0');
}

int main() {
    calculator(); 
 
}

#include <iostream>
using namespace std;

int main()
{

    cout << " press 1 for (+)" << endl;
    cout << " press 2 for (-)" << endl;
    cout << " press 3 for (*)" << endl;
    cout << " press 4 for (/)" << endl;
    cout << " press 5 for (%)" << endl;

   
    char user;

    cout << "enter any sign = ";
    cin >> user;
    int a, b;

    cout << "enter first value = ";
    cin >> a;

    cout << "enter second value = ";
    cin >> b;
    cout << "------------------------------------------" << endl;
    switch (user)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << a << " x " << b << " = " << a * b;
        break;

    case '/':
        cout << a << " / " << b << " = " << float(a) / b;
        break;
    case '%':
        cout << a << " / " << b << " = " << (a % b);
        break;

    default:
        cout << "Invalid value !";
        break;
    }
}

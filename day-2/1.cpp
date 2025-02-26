#include <iostream>

using namespace std;

int main()
{

    int user;
    float a, b, c, d, sum = 0, amount, total;

    cout << "Enter Your Units = ";
    cin >> user;

    if (user <= 50)
    {
        a = user * 0.50;
        cout << a << endl;
    }

    else if (user <= 150)
    {
        b = (50 * 0.5) + ((user - 50) * 0.75);
        cout << b << endl;
    }

    else if (user <= 300)
    {
        c = (50 * 0.5) + (100 * 0.75) + ((user - 150) * 1.20);
        cout << c << endl;
    }

    else
    {
        d = (50 * 0.5) + (100 * 0.75) + (150 * 1.20) + ((user - 300) * 1.50);
        cout << "Total sum = " << d << endl;
    }
    sum = (a + b + c + d) * 20 / 100;
    cout << "20%   value is = " << amount << endl;

    total = (a + b + c + d) + amount;
    cout << "total  Amount = " << total;
}

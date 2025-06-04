#include <iostream>
using namespace std;

int main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int space = i; space >= 2; space--)
        {
            cout << " " << " ";
        }
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }

        for (int j = 4; j >= i; j--)
        {
            cout << j << " ";
        }
        for (int space = i; space >= 2; space--)
        {
            cout << " " << " ";
        }

        cout << endl;
    }
}
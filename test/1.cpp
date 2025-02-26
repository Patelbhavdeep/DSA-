#include <iostream>
using namespace std;
int main()
{

    int user, sarvado;

    cout << "Enter numbers = ";
    cin >> user;

    for (int i = 1; i <= user; i++)
    {

        cout << i << " ";
        sarvado = +i;
    }
    cout << " = " << sarvado;
}
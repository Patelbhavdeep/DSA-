#include <iostream>
using namespace std;

int main()
{
    int user, first = 0, second = 1, third;

    cout << "enter any number  =  ";
    cin >> user;
    
    for (int i = 0; i < user; i++)
    {
        cout << first << " ";
        third = first + second;
        first = second;
        second = third;
    }
}
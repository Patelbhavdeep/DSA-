#include <iostream>
using namespace std;

int main() {
    int a = 11;
    for (int raw = 1; raw <= 4; raw++) 
    {  
        for (int col = 1; col <= raw; col++) 
        {  
            cout << a << " ";
            a++;  
        }
        cout << endl;  
    }

  
}

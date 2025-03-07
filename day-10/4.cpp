#include <iostream>
using namespace std;

int main() {
   

    for (int raw = 1; raw <= 5; raw++) {
       
        for (int col = 1; col < raw; col++) 
        {
            cout << "  ";
        }

       
        for (int col = raw; col <= 5; col++) 
        {
            cout << (col % 2) << " "; 
        }

        
        cout << endl;
    }


}
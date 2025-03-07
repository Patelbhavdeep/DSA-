#include <iostream>
using namespace std;

int main() {
    int raw, col;

    for (raw = 5; raw >= 1; raw--) {  
        for (col = 5; col >= raw; col--)
         {  
            cout << raw << " ";  
        }
        cout << endl; 
    }

    
}

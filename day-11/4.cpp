#include <iostream>
using namespace std;

int main() {
    int n = 5;  

        for (int row = 1; row <= n; row++) {
        
        for (int space = 4; space >= row; space--) {  
            cout << "  ";  
        }

       
        for (int col = row; col <= 5; col++) {
            cout << col << " "; 
        }

       
        for (int space = 4; space >= row; space--)
        {
        cout << "  "; 
        }

        for (int col = 4; col >= row; col--) {
            cout << col << " "; 
        }

       
        cout << endl;
    }

    return 0;
}

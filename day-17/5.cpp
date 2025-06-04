#include <iostream>
using namespace std;

void abcd(int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char(65 + j) << " "; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    abcd(n);
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter row size : ";
    cin >> row;
    cout << "Enter col size: ";
    cin >> col;

    int box[row][col];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < row; i++) {
        int rSum = 0;
        for (int j = 0; j < col; j++) {
            rSum += box[i][j];
        }
        cout << "Sum of row " << i << ": " << rSum << endl;
    }

 
    
    for (int j = 0; j < col; j++) {
        int cSum = 0;
        for (int i = 0; i < row; i++) {
            cSum += box[i][j];
        }
        cout << "Sum of col " << j << ": " << cSum << endl;
    }

    
}
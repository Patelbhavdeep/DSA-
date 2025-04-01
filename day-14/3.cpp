#include <iostream>
using namespace std;

int main() {
    int row, col ;

    cout << "Enter the  row size: ";
    cin >> row;
    cout << "Enter the  col size: ";
    cin >> col;

    int a[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  
            cout << "a[" << i << "][" << j << "] : ";
            cin >> a[i][j] ;
        }
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  
            cout << a[i][j] << " " ;
        }
        cout << endl ;
    }


    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {  
            cout << a[i][j]  << " ";
        }
        cout << endl ;
    }


}
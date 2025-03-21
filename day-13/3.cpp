#include <iostream>
using namespace std;

int main() {
    int size;

    
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];  

    cout << "your input : ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    cout << "your output : ";
    while (size--) 
    {
        cout << arr[size] << " "; 
    }
    cout << endl;
    
}

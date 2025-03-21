#include <iostream>
using namespace std;

int main() {
    int a;

    
    cout << "Enter the number of elements: ";
    cin >> a;

    int arr[a]; 

    
    cout << "Enter your elements: \n ";

    for (int i = 0; i < a; i++) 
    {
        cin >> arr[i];
    }

   
    int box = arr[0];  
    for (int i = 1; i < a; i++) 
    {
        if (arr[i] < box) 
        {
            box = arr[i];  
        }
    }

 
    cout << "Minimum Value is = " << box ;

   
}
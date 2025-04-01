#include <iostream>
using namespace std;

int main() {
    int a;

    
    cout << "Enter the number of elements: ";
    cin >> a;

    int array[a]; 

    
    cout << "Enter your  elements: \n ";
    for (int i = 0; i < a; i++) 
    {
        cin >> array[i];
    }

   
    int box = array[0];  
    for (int i = 1; i < a; i++) 
    {
        if (array[i] > box) 
        {
            box = array[i];  
        }
    }

 
    cout << "Maximum  Value  is = " << box ;

    return 0;
}
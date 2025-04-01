#include<iostream>
using namespace std;

int main()
{
    int size ;
    cout<<"Enter arr size: ";
    cin>>size;
    
    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box["<< i << "] = " ;
        cin >> box[i];

    }

    for (int i = 0; i < size; i++)
    {
        if (box[i] < 0)
        {
           cout << "nagetive number  = " << box[i] << endl ;
        }
        
    }
    
}
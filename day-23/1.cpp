#include<iostream>
using namespace std;

template <typename t> 
t add (t a , t b){
    return a - b;
}
 
int main()
{
    cout << "this is a int value   : " << add(35, 45) << endl;

    
    cout << "this is a float value : " << add(500.52, 900.80) << endl;

}
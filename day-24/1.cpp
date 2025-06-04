#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    cout << "pushback" << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for(int i : v)
    {
       cout << i << " " ;
    }
    cout << endl;
    cout << "------------------------" << endl;



    cout << "pop back" << endl;
    v.pop_back();
    for(int i : v)
    {
       cout << i << " " ;
     
    }
    cout << endl;
    cout << "------------------------" << endl;



    cout << "index number value change ";
    cout << endl;
    v.insert(v.begin() + 3, 99);
    for (int i : v) cout << i << " ";
    cout << endl;
    cout << "------------------------" << endl;


    cout << "erase number";
    cout << endl;
    v.erase(v.begin() + 3);
    for (int i : v) cout << i << " ";
    cout << endl;
    cout << "------------------------" << endl;


    cout << "size of elements " << endl;
    cout << endl ;
    cout << v.size() << endl;
    cout << endl;
    cout << "------------------------" << endl;


    cout << "empty " << endl;
    cout << endl ;
    cout <<(v.empty()? "yes" : " no")  << endl;
    cout << endl;
    cout << "------------------------" << endl;


    cout << " index number value show " << endl;
    cout << endl ;
    cout <<  v.at(2) << endl;
    cout << endl;
    cout << "------------------------" << endl;

    cout << " front value check" << endl;
    cout << endl ;
    cout <<  v.front() << endl;
    cout << endl;
    cout << "------------------------" << endl;

    cout << " back value check" << endl;
    cout << endl ;
    cout <<  v.back() << endl;
    cout << endl;
    cout << "------------------------" << endl;
    cout << endl ;


    cout << " begin to end all value " << endl;
    cout << endl ;
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "------------------------" << endl;

   


    
    cout << "clear all " << endl;
    cout << endl ;
    v.clear ();
    v.size();
    cout << endl;
    cout << "------------------------" << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

class hk {
    public :
    void get(){
        cout << "hk"<< endl;
    }
};
class mk : public hk{
    public :
    void set(){
        cout << "mk"<< endl;
    }
};
int main()
{
   mk bhuro;
   bhuro.get();

    
}
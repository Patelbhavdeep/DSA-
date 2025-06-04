#include<iostream>
using namespace std;
class hk{
    public:
    void set(){
        cout << "hk"<<endl;
    };
};
class mk : public hk{
    public:
    void get(){
        cout << "mk"<<endl;
    };
};
class vk : public hk{
    public:
    void push(){
        cout << "vk"<<endl;
    };
};
int main()
{
   mk bhuro;
   bhuro.set(); 
   bhuro.get(); 
//    bhuro.push(); 
   
}
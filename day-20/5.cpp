#include<iostream>
using namespace std;
 class hk{
    public :
    void set(){
        cout << "hk"<< endl;
    }
 };
 class mk : public hk{
    public :
    void get(){
        cgggout << "hk"<< endl;
    }
 };
 class vk : public hk{
    public :
    void push(){
        cout << "hk"<< endl;
    }
 };
 class kk : public vk ,public mk{
    public :
    void call(){
        cout << "hk"<< endl;
    }
 };
int main()
{
    kk bhuro;
    bhuro.set();
    bhuro.get();
    bhuro.pull();
    bhuro.call();
    
}
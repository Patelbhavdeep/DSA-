#include<iostream>
using namespace std;
 class hk{
    public :
    void get(){
        cout << "hk"<<endl;
    }
 };
 class mk{
    public :
    void get(){
        cout << "hk"<<endl;
    }
 };
 
 class vk : public hk , public mk{
    public :
    void push(){
        cout << "hk"<<endl;
    }
 };
 
int main()
{
     vk bhuro;
     bhuro.push();
}
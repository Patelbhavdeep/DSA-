#include<iostream>
using namespace std;
template <typename t1, typename t2>
class axu{
  public:
  t1 first;
  t2 second;
};
int main()
{
    axu<int,float>meaxu = {5,4.10};
    cout << "int value   = " << meaxu.first << endl << "float value = " << meaxu.second << endl;
    
}
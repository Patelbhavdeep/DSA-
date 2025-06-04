#include<iostream>
using namespace std;
 class kano
 {
 public:
 static int a;
 };

 
 int kano::a=80;   

 
int main()
{
  cout << "a = "<<kano::a ;   
}
#include<iostream>
using namespace std;

class friends
{
private:
  string name;
  int age;
  int salary;
  
   
public:
 void bhavdeep (string name,int age,int salary ){
    this->name = name;
    this->age = age;
    this->salary = salary;
 }
 void patel(){
    cout << "-------------------------------"<< endl;
    cout << "name   :" << this->name <<endl;
    cout << "age    :" << this->age <<endl;
    cout << "salary :"  << this->salary <<endl;

 }
    
};

 
int main()
{
friends natho,lagharo,puno,arjan;

natho.bhavdeep("natho",70,10);
lagharo.bhavdeep("lagharo",30,20);
puno.bhavdeep("puno",70,10);
arjan.bhavdeep("arjan",70,10);

natho.patel();
lagharo.patel();
puno.patel();
arjan.patel();
}
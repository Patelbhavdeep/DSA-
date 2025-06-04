#include<iostream>
using namespace std;
class bhuro
{
private:
  string name;
  int age;
  int standard;
   
public:
   void mkal(string name,int age ,int standard){
     this->name=name;
     this->age=age;
     this->standard=standard;


   }

   void mhj (){
     cout << "--------------";
     cout << "name :"<<this->name<<endl;
     cout << "age :"<<this->age<<endl;
     cout << "standard :"<<this->standard<endl;
     
   }
    
};

int main()
{
    bhuro njnhjb, vbhvj,nbhc;

    njnhjb.mkal("bfbdj",8,9);
    njnhjb.mhj();
    
}
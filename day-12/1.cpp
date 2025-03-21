#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your mark : ";
    cin >> mark;

    char grade = 'F';  
   
    if (mark >= 90) 
    {
        grade = 'A';
    }
     
    else if (mark >= 80) 
    {
        grade = 'B';
    }
     
    else if (mark >= 70) 
    {
        grade = 'C';
    }
     
    else if (mark >= 60) 
    {
        grade = 'D';
    }
     
    else if (mark >= 50) 
    {
        grade = 'E';
    }
    

    cout << "Your grade is: " << grade << "\n";

   
   
}

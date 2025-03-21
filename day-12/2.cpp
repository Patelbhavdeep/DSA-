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

   
    switch (grade) 
    {
        case 'A':
          cout << "Excellent Keep up the great work!\n";                   
          break;

        case 'B':
          cout << "Good job Thoda aur mehnat karo!\n";                   
          break;

        case 'C':
          cout << "Theek hai but better kar sakte ho!\n";                   
          break;

        case 'D':
          cout << "Passing marks lekin aur focus karo!\n";                   
          break;
          
        case 'E':
          cout << "Bach gaye agle baar aur mehnat zaroori hai!\n";                    
          break;
          
        default:
          cout << "Tujse na hoga Tu riksha chala!\n";
          break;
    }

}

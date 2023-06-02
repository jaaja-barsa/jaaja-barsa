#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct company{
  string fname;
  //string lname;
  int age;
  int ID;
};

int main ()
{
    int id;
     company employee[10]; //struct to enter the employee to display information       

          
    {
     employee[0].fname = "Ahmed yousif" ;
     employee[0].age = 25;
     employee[0].ID = 0 ;
     
     employee[1].fname = "Yousif Khalil ";
     employee[1].age = 40;
     employee[1].ID = 1;
     
     employee[2].fname = "Mohamed adel ";
     employee[2].age = 30;
     employee[2].ID = 2;
     
     employee[3].fname = "Ebrahim Ahmed ";
     employee[3].age = 80;
     employee[3].ID = 3;

    
        
    cout <<"Enter your ID \n";
    cin >> id;
    
    cout << "Name " << employee[id].fname <<"\n";
    cout << "Age "  << employee[id].age <<" \n";
    cout << "ID "   << employee[id].ID <<" \n";
    
   /* cout <<" Name "<< employee[id].fname ;
    cout <<" Age " << employee[id].age;
    cout <<" ID " << employee[id].ID;
    
    cout <<" Name "<< employee[id].fname;
    cout <<" Age " <<employee[id].age ;
    cout <<" ID " <<employee[id].ID;

    cout <<" Name " <<employee[id].fname;
    cout <<" Age " <<employee[id].age;
    cout <<" ID " <<employee[id].ID;*/

    }
    
    
    
    
    
    return 0;
}
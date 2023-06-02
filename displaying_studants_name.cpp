#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct school{
  string fname;
  string lname;
  int age;
  string grade;
};

int main ()
{
    int number_studants;
    school studants[50];        // struct of array for school
 
    
    cout <<" How many studants in your school? \n";
    cin >> number_studants;              // this is to enter the studants numbers
    
    for (int counter = 0; counter < number_studants; counter++ )   // this for to repeat the number of studants
    
           //cout <<" Enter the information of studant " << counter + 1 << "  \n";
    {
    cout <<" Enter your fitst name : \n";
    cin >> studants[counter].fname;
    cout <<" Enter your family name : \n";
    cin >> studants[counter].lname;
    cout << " How old are you ? \n";
    cin >> studants[counter].age;
    cout <<" Which grade are you ? \n";
    cin >> studants[counter].grade;
    }
    cout << " Thank you ! \n";
    cout << " Here are your studants infornation \n";
    
    for ( int display = 0; display < number_studants; display++ )
    {
        cout << " Name : " << studants[display].fname <<" " << studants[display].lname <<"\n";
        cout <<" Age " << studants[display].age << " in grade " << studants[display].grade << "\n";
    }
    
    
    
    
    return 0;
}
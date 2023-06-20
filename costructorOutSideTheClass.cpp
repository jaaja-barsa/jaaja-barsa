#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
 /*  getting the enput from user and assinning values to the constructor*/
class student {
  private:
        int rollNo;
        string name;
        double fees;
        
 public: 
  student(int RollNo, string names, double fee);
  void display ();
};



    
int main(){
  student s1 = student (50, "Ahmed", 40.50 );
  s1.display();
    return 0;
}


 student::student (int RollNo, string names, double fee ){
        
        rollNo = RollNo;
        name = names;
        fees = fee;
    /*cout <<" Enter the Roll no "<<endl;
        cin >>rollNo;
        cout <<" Enter the name "<<endl;
        cin >> name;
        cout <<" Enter the fees " <<endl;
        cin >> fees;*/
    }//constructor outside the class
    
    void student::display (){
        
        cout <<" The Roll No is " << rollNo <<endl;
        cout <<" The name is " << name <<endl;
        cout <<" The fees are " << fees << endl;
    } // fucntion outside the class
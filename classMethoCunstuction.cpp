#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Students {
    public:
    string fname;
    string lname;
    int  age;
    char grade;
    
    void introduceYourSelf (){
        cout << "\n Student's information :"<<endl <<endl;
        cout<<" My name's " << fname <<endl;
        cout << " and my last name is " <<lname <<endl;
        cout << " i'm " << age << " years old"<<endl;
        cout << " i'm in grade " << grade <<endl;
        cout<<endl;
    }// This is the fuction which is the method of ckass.
    
    Students (string fname, string lname, int age, char grade){
        
        fname = fname;
        lname = lname;
        age = age;
        grade = grade;
    }//This is the our own custructor;
};

int main(){
    Students student1 = Students ("Ahmed", " Khalil", 27, 'A');
    //student1.fname = "Ahmed";
   // student1.lname = "khalil";
    //student1.age = 27;
   // student1.grade = 'A';
    student1.introduceYourSelf();
    
    /*student2.fname = " Mohmed";
    student2.lname = " Ahmed";
    student2.age = 50;
    student2.grade = 'B';*/
    Students student2 = Students ( "Mohamed", " Ahmed", 50, 'B');
    student2.introduceYourSelf();
    
    
    
    
    
    
    
    return 0;
}
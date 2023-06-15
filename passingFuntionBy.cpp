#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void getname (string&); // this fuction will get name;
int getscore (); // this fuction will get score
void print (string name, int scores ); // this fuction will print it all 


int main(){
    string name; 
    int scores;
    
    getname(name);
    print(name, getscore());
    
    return 0;
}

void getname (string& newname){
    cout <<" Enter your name " << endl;
    cin >> newname;
} // getting namespace

int getscore (){
    int scores;
    cout <<" Enter your scores " << endl;
    cin >> scores;
    return scores;
} // getting scores only

void print (string name, int scores){
    if (scores >= 700){
        cout << name <<" is in good standing " <<endl;
    }
    else if(scores >= 500){
        cout << name <<" is in questionable " << endl;
    }
    else{
        cout << name <<" is not in good standing " << endl;
    }
}










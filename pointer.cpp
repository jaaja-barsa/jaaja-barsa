#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main ()

{
    int learning_pointer = 10; //Normal variable
    int* pointer_variable = &learning_pointer;// pointer of type intiger
    pointer_variable = &learning_pointer; // assine the address of avariable

    //*pointer_variable = 20;

    cout << " This is the value of variable " << learning_pointer << " \n";
    cout << " This is the address of variable "<< pointer_variable << endl;
    cout << " This is the dereference the value which stored in pointer " <<*pointer_variable << endl;
    *pointer_variable = 20; // assined new value to the pointer
    cout << " the new value pointer " << *pointer_variable <<endl;
    cout << " The new value of variable " << learning_pointer << endl;

    return 0;
}
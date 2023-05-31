#include<iostream>

struct person			// this the struct to person's information.
{

  std::string fname;
  std::string lname;
  int age;
  int id;
};

int
main ()
{
  person p1;

  p1.fname = " Ahmed ";
  p1.lname = " Khalil";
  p1.age = 25;
  p1.id = 2543;

  std::cout << " What is your first name? \n";
  std::cin >> p1.fname;
  std::cout << " What is your family name \n";
  std::cin >> p1.lname;
  std::cout << " How old are you? \n";
  std::cin >> p1.age;
  std::cout << " Your ID is?\n";
  std::cin >> p1.id;

  std::cout<<" Here are your infomation \n";
  std::cout<<" Your name : " << p1.fname<<"\n";
  std::cout<< " Your family name : " << p1.lname<<"\n";
  std::cout <<" You are " << p1.age << " age \n";
  std::cout << " And your ID numbe is "<<p1.id <<"\n";
  /*std::cout << " your first name is " << p1.fname << "\n";
     std::cout << " your last  name is " << p1.lname << "\n";
     std::cout << " your age is " << p1.age << "\n";
     std::cout << " your id number is " << p1.id << "\n"; */

  return 0;
}

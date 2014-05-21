#include <iostream>
#include <vector>
#include <string>
#include "mm.h"
using namespace std;
class Person{
public:
   Person() = default;
   Person(string _name):name(_name)
   {   
    cout << "constructor " <<endl;
   }
   Person(const Person &p){
   this->name = p.name;
   cout << " copy constructor "<<endl;
   }
   
    Person(Person && p ):name(p.name)
    {
    p.name = "";
    cout << "move constructor" <<endl;
    }
public:
  string name;
};
int main()
{
       /* vector<string> ves={"wangxun","xun"};
        cout << ves[1] <<endl;
	Person p1 =Person("wangxun");
        Person p2(p1);
        Person p3(std::move(p1)); */
        hello();
        exit(0);

}

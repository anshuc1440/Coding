#include <iostream>
using namespace std;

class Employee
{
public:
    int salary;
    float id;
    Employee() {}
    Employee(int inpID)
    {
        id = inpID;
        salary = 5000;
    }
};

//Deriver class syntax
/*class {{derived claa-name}} : {{visibility - mode}} {{base- class-name}}
{
    class members/methods/etc...
}
*/
/*  Note-
1. Default visibility mode is private
2. Public visibility mode: public members of the base class becomes public members of the derived class
2. Private visibility mode: public members of the base class becomes private members of the derived class
4. private member are never inherited 
*/

class Programmer : public Employee
{
public:
    int languagecode = 9;

    Programmer(int inpID)
    {
        id = inpID;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), Rohan(2);
    cout << harry.salary << endl;
    cout << Rohan.salary << endl;

    Programmer obj1(10);
    cout << obj1.languagecode << endl;
    obj1.getData();
    return 0;
}
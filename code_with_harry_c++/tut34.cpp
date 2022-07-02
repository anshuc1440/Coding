#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number() {}
    Number(int n)
    {
        num = n;
    }

    //when no copy construco=tor is found , compiler uses its own copy constructor
    Number(Number &obj)
    {
        cout << "copy constructor " << endl;
        num = obj.num;
    }
     //Destructor never takes a arguement nor does it return any value
    ~Number(){
        cout<<"Destructor is called !";
    }

    void display()
    {
        cout << "The number is :" << num << endl;
    }
};

int main()
{
    Number x(11), y(15), z(20), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble x or y or z
    Number z1(x); //copy constructor is invoked
    z1.display();

    z2 = z; //copy constructor not invoked
    z2.display();

    Number z3 = z; //copy constructor invoked
    z3.display();
    return 0;
}
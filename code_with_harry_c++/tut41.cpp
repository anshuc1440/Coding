#include <iostream>
using namespace std;
//syntax of inheriting multiple inheritance
// class Derived : visibility-mode base1 , visibility-mode base2
// {
//     class bofy of class"derived"
// }

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};
class Base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int = a;
    }
};
class Derived : public Base1 , public Base2 , public Base3{
    public:
    void show(){
        cout<<"The value of Base 1 is : "<<base1int<<endl;
        cout<<"The value of Base 2 is : "<<base2int<<endl;
        cout<<"The value of Base 3 is : "<<base3int<<endl;
        cout<<"The sum of Base 1 and Base 2 is : "<<base1int + base2int + base3int<<endl;
    }
};
// The inherited derived class will look something like this
// Data members
//     base1int and base2int -->protected
// Member functions
//     set_base1int , set_base2int and show --> public

int main(){
    Derived a;
    a.set_base1int(20);
    a.set_base2int(30);
    a.set_base3int(10);
    a.show();
    
    return 0;
}
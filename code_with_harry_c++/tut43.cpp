#include <iostream>
using namespace std;

// Ambiguity resolution

class Base1{
   
    public:
    void greet(){
        cout<<"Hello"<<endl;
    }
};
class Base2{
   
    public:
    void greet(){
        cout<<"Good Morning"<<endl;
    }
};
class Derived : public Base1 , public Base2{
    int a;
    public:
    void greet(){
    Base1::greet();
}
};

class B{
    public:
    void say(){
        cout <<"Hello World"<<endl;
    }
};
class D : public B{
    public:
    // void say(){
    //     cout <<"Hello World Beautiful People "<<endl;
    // }
};
int main(){
    //Ambiguity 1
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // Derived d;
    // d.greet();

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}
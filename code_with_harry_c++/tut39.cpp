#include <iostream>
using namespace std;

class Base{
    protected:
    int a; 
    public:
    int b;
};
/*
For a protected member:
                            Public derivation   Private derivation    Protected derivaion
1. Private members          Not iherited        Not Inherited           Not Inherited
2. Protected members        Protected           Private                 Protected
3. Public members           Public              Private                 Protected
*/
class Derived : Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<b.a; // Will not work since a is protected in both base as well as derived class
    
    return 0;
}
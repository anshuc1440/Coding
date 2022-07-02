#include <iostream>
using namespace std;

class complex{
int a;
int b;

public:
void setdata(int v1,int v2){
    a = v1;
    b = v2;
}
friend complex sumComplex(complex o1 , complex o2);
    void print_number(){
        cout<<"your complex no. is : "<<a<<" + "<<b<<"i"<<endl;
    }
    
};
//Below line means that non member sumcomplex is allowed to anything with my private parts.
complex sumComplex(complex o1 , complex o2){
    complex o3;
    o3.setdata((o1.a + o2.a),(o1.b + o2.b));

    return o3;
}

int main(){
    complex c1 , c2 , sum;
    c1.setdata(2,3);
    c2.setdata(5,1);
    c1.print_number();
    c2.print_number();

    sum = sumComplex(c1,c2);
    sum.print_number();

    return 0;
}

/*
    properties of friend function
    1. Not in the scope of class
    2.since it is not in the scope of the class, it cannot be called from the object of that class . c1.sumcomplex()==invalid
    3.can be invoked without the help of an object
    4.usually contains the arguement as objects
    5.can be declared inside public and private section of the class
    6.It cannot access the members directly by the names and need object_name.member_name to access any member.
*/
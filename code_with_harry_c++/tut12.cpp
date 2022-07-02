#include <iostream>
using namespace std;

int main(){

    int a=3;
    int *b = &a;

// &---->(Address of) operator
    cout<< " The address of a is:"<<&a<<endl;
    cout<< " The address of a is:"<<b<<endl;

// * ---->(value of)operator
cout<<"The value of a is :"<<*b<<endl;

int **c =&b;
cout<<"The address of b is :"<<&b<<endl;
cout<<"The address of b is :"<<c<<endl;
cout<<"The value at address c :"<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) :"<<**c<<endl;

    return 0;
}
#include <iostream>
using namespace std;

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout << "Base1 class constructor called "<<endl;
    }
    void printdata1(){
        cout <<"The value of data1 is :"<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout << "Base2 class constructor called "<<endl;
    }
    void printdata2(){
        cout <<"The value of data2 is :"<<data2<<endl;
    }
};

class Derived : public Base1 ,/*virtual*/ public Base2{
    int derived1 , derived2;
    public:
    Derived(int a1 , int a2, int a3, int a4) : Base1(a1) ,Base2(a2){
        derived1 = a3;
        derived2 = a4;
        cout<<"Derived constructor called "<<endl;
    }
    void printdata(){
        cout<<"The value of derived1 is : "<<derived1<<endl;
        cout<<"The value of derived2 is : "<<derived2<<endl;
    }
};
int main(){
    Derived anshu(2,4,5,6);
    anshu.printdata1();
    anshu.printdata2();
    anshu.printdata();
    
    return 0;
}
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
void get_data_by_sum(complex o1, complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    }
    void print_number(){
        cout<<"your complex no. is : "<<a<<" + "<<b<<"i"<<endl;
    }

};

int main(){
    complex c1,c2,c3;

    c1.setdata(2,4);
    c1.print_number();
    
    c2.setdata(3,-6);
    c2.print_number();

    c3.get_data_by_sum(c1 , c2);
    c3.print_number();
    
    return 0;
}
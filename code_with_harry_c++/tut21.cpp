#include <iostream>
using namespace std;

class employee {
    private:
    int a,b,c;
    public:
    int d,e;

    void getdata(){
        cout <<"The value of a is : "<<a<<endl;
        cout <<"The value of b is : "<<b<<endl;
        cout <<"The value of c is : "<<c<<endl;
        cout <<"The value of d is : "<<d<<endl;
        cout <<"The value of e is : "<<e<<endl;
    }
    void setdata(int a1 ,int b1, int c1);
};
    void employee :: setdata(int a1 ,int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
    }

int main(){
    employee ok;
    // ok.a=12;  This will show error as a is private
    ok.d=121;
    ok.e=20;
    ok.setdata(14,12,73);
    ok.getdata();
    
    return 0;
}
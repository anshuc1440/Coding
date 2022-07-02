#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //******manipulators*********
    int a=2 , b=45 , c=6244;
     
     cout<<"The value of a without setw is :"<<a<<endl;
     cout<<"The value of a without setw is :"<<b<<endl;
     cout<<"The value of a without setw is :"<<c<<endl;

     cout<<"The value of a with is :"<<setw(4)<<a<<endl;
     cout<<"The value of a with is :"<<setw(4)<<b<<endl;
     cout<<"The value of a with is :"<<setw(4)<<c<<endl;
    
    return 0;
}

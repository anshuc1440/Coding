#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
    bankdeposit(){}
    bankdeposit(int p, int y , float r);
    bankdeposit(int p , int y ,int r);
    void show();
};

 bankdeposit :: bankdeposit(int p, int y , float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (
        int  i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}
 bankdeposit :: bankdeposit(int p, int y , int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (
        int  i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void bankdeposit :: show(){
    cout<<endl<<"Principal amount was : "<<principal<<endl
    <<"Return value after "<<years
    <<" years is"<<returnValue<<endl;
}

int main(){
    bankdeposit bd1 , bd2, bd3;
    int p , y;
    float r;
    int R;

    cout<<"Enter the value of p , y and r "<<endl;
    cin>>p>>y>>R;
    bd1 = bankdeposit(p,y,r);
    bd1.show();


    return 0;
}
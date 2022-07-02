#include <iostream>
using namespace std;

typedef struct employee
{
    int id;     //4
    char favchar;       //1
    float salary; //4
} hmm;

union money
{
    int rice; //4
    char car;  //1
    float pounds;  //4
};


int main(){
enum meal{ breakfast , lunch ,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner<<endl;

    hmm Anshu;
    Anshu.id=1;
    Anshu.favchar='x';
    Anshu.salary=520000;

    cout<<"The value is :"<<Anshu.id<<endl;
    cout<<"The value is :"<<Anshu.favchar<<endl;
    cout<<"The value is :"<<Anshu.salary<<endl;
    
// In union memory is being shared among rice , car , pounds.We can only use one at a time 
    union money m1;
    m1.rice=34;
    m1.car = 'c';

    cout<<m1.car<<endl;
    return 0;
}
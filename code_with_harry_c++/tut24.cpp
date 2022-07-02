#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id :" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {

        cout << "The id of this employee is : " << id << " and this employee no. : " << count << endl;
    }

    static void getcount(void){
      //  cout<<id; throws an error becoz static can use only static data members
        cout<<"The value of count is : "<<count<<endl;
    }
};
// count is the static data member 
int employee ::count; //default value is 0
int main()
{
    employee anshu, aish, anju;
    anshu.setdata();
    anshu.getdata();

    employee::getcount();

    aish.setdata();
    aish.getdata();
    employee::getcount();

    anju.setdata();
    anju.getdata();
    employee::getcount();

    return 0;
}
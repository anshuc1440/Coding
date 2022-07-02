#include <iostream>
using namespace std;

class employee
{

    int id;
    int salary;

public:
    void setId(void)
    {   salary = 50000;
        cout << " Enter the id of the employee : " << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "The id of this employee is : " << id << endl;
    }
};

int main()
{
    // employee anshu ,nihu, riu, aish;
    // anshu.setId();
    // anshu.getid();
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getdata();
    }

    return 0;
}
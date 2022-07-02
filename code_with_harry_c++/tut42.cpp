#include <iostream>
#include <cmath>
using namespace std;
/*
create 2 classes
    1.simple calculator - Take input of two function using a utility function and perform +,-,*,/ and displays results using another function
    2.scientific calculator - Any 4 scientific operations 

    create another class Hybridcalculator and inherit it using 2 classes:
    Q1.what type of inheritance are you using?
    Q2.what mode of inheritance are you using?
    Q3.create an object of hybrid calculator and display results of simple and scitific calculator
    Q4.How is code reusability implemented
*/
class SimpleCalculator
{
    private:
    int a, b;
    public:

    void set_a_and_b(int x, int y)
    {
        a = x;
        b = y;
    }
    void performOperations(){
        cout <<"The value of a + b is : " <<a + b << endl;
    
        cout <<"The value of a - b is : " <<a - b << endl;
    
        cout <<"The value of a * b is : " <<a * b << endl;
    
        cout <<"The value of a / b is : " <<a / b << endl;
    }
       
};
class ScientifcCalculator
{
    private:
    int a, b;
    public:

    void set_a_and_b(int x, int y = 1)
    {
        a = x;
        b = y;
    }
    void performOperations(){
        cout <<"The value of cos a is : " << cos(a) << endl;
    
        cout <<"The value of sin a is : " << sin(a) << endl;
    
        cout <<"The value of square root of a is : " << sqrt(a)<< endl;
    
        cout <<"The value of exp  of a : " <<  exp(a) << endl;
    }
       
};


int main()
{
    SimpleCalculator simple1;
    simple1.set_a_and_b(20, 5);
    simple1.performOperations();

    ScientifcCalculator Scientific1;
    Scientific1.set_a_and_b(45);
    Scientific1.performOperations();

    return 0;
}
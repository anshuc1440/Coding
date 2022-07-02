#include <iostream>
using namespace std;

int main(){
//Basic Example
int a = 4;
int *ptr = &a;
cout<<*ptr<<endl;
    
    //new keyboard
    int *p = new int(40);
    cout<<"The value at p is " <<*(p)<<endl;

int *arr = new int[3];
arr[0] = 10;
arr[1] = 20;
arr[2] = 30 ;
//delete[] arr;
cout <<"Value of arr[0] is "<<arr[0]<<endl;
cout <<"Value of arr[1] is "<<arr[1]<<endl;
cout <<"Value of arr[2] is "<<arr[2]<<endl;

    return 0;
}
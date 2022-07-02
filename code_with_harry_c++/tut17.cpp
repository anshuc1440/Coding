#include <iostream>
using namespace std;

// using inline function compile the code in main itself , we can use inline for small codes so that our code runs faster.
inline int product(int a,int b){
    //Not recommeded to use below lines with inline function
    //static int c=0;//This executes only once
    //c = c + 1;//Next time this function is run, the value of c will be retained
    return a*b;
}

int main(){

    int a ,b;
    cin>>a>>b;
    cout <<"The product of a and b is : "<<product(a,b)<<endl;
    cout <<"The product of a and b is : "<<product(a,b)<<endl;
    
        return 0;
}
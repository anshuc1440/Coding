#include <iostream>
using namespace std;
int glo = 6;
int sum(){

    cout << glo;
    return 0;

}
int main(){
    int glo = 3;
    glo = 78;

    cout<<glo <<endl;
    sum();

    return 0;
}
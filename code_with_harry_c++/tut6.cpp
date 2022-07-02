
///There are two types of header files :
// 1. syste header files: it comes with compiler
#include <iostream>
// 2.user defined header files: it is written by programmer
//#include "this.h" if this.h file is not included in the same directory it will give error
using namespace std;

int main()
{   //********Reference variable********
    float x = 455;
    float &y =x;

    cout <<x<<endl;
    cout <<y<<endl;

    return 0;
}

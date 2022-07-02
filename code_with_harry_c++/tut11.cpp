#include <iostream>
using namespace std;

int main(){
    int count=40;
    for (int i = 0; i < count; i++)
    {
       
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    

    return 0;
}
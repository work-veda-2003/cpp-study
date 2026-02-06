// | y = 20 |
// | x = 10 |
// -----------
// | return |
// -----------

#include <iostream>
using namespace std;

void foo(){
    int x=10;  //stack
    int y=10;  //stack

    cout<<x+y<<endl;
}

int main(){
    foo();
    return 0;
}
// x is created when foo() starts 
// y is created when foo() ends

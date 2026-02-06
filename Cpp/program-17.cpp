#include<iostream>
using namespace std;

int main(){
    int* p = new int(10); //heap allocation
    cout<< *p << endl;

    delete p;  //free heap memory
    return 0;
}
//p-> pointer stack
// *p-> actual data heap
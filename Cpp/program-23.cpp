#include<iostream>
using namespace std;

int factorial(int n){
if(n==1)return 1;
return n* factorial(n-1);
}

int main(){

    int answer = factorial(5);
cout<<"answer: "<<answer<<endl;
    return 0;
}
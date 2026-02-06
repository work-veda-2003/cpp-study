//smart pointer -avoid new delete

#include<memory>
using namespace std;
int main(){
    unique_ptr<int> p = make_unique<int>(10);
}
//Stack + heap together

int main(){
    int a = 5;
    int* b = new int (10);

    delete b;
}

//returning stack memory - bug - dandling pointer
int* foo() {
    int* x = new int(10);
    return x;   // OK
}

//Stack overflow

void recurse(){
    recurse();
}


//heap overflow/leak
void fun(){
while(true){
    new int(10);
}}
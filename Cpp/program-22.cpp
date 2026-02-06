#include<iostream>
using namespace std;

class QueueADT{


public:
virtual void enqueue(int x)=0;
virtual void dequeue()=0;
virtual int front()=0;
virtual bool isEmpty()=0;
virtual ~QueueADT(){}
};

class QueueArray:public QueueADT{

    int arr[5];
    int frontIndex,rearIndex;

public:

QueueArray(): frontIndex(0),rearIndex(-1){}
void enqueue(int x)override{
if(rearIndex==4)return;
arr[++rearIndex]=x;
}
void dequeue()override{
if(frontIndex<=rearIndex){
    frontIndex++;
}
}

int front()override{
return arr[frontIndex];
}
bool isEmpty()override{
   return frontIndex > rearIndex;
}

};
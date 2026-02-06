#include<iostream>
#include<vector>
 
using namespace std;

class Stack{
// int arr ={1,2,3,4,5};
int arr[5];
int top;
public:
Stack(){
    top=-1;
}
void push(int x){
arr[++top]=x;
}

void display()
{
    for(int ele:arr){
      cout<<"stack: "<<ele<<endl;
    }
}

};

class Queue{
int arr[5];
int front ,rear;

public:
Queue(){
    front = 0;
    rear = -1;
}
void enqueue(int x){
    arr[++rear]=x;
}

void dequeue(){
    if(front<=rear)front++;
}

void display(){
    for (int i=front;i<=rear;i++){
        cout<<"Queue: "<<arr[i]<<endl;
    }
}
};

class Deque{
    int rear;
    int front;
    int arr[5];
    
    public:
    Deque():front(2),rear(1){}
    void pushFront(int x){
        arr[--front] = x;
    }
    void pushBack(int x){
        arr[++rear] = x;
    }

    void display(){
        for(int i=front;i<=rear;i++){
            cout<<"Deque: "<<arr[i]<<endl;
        }
    }
};

struct ListNode{
    int data;
    ListNode* next;
};

class List{

    ListNode* head;

    public:
    List():head(NULL){}

    void insert(int x){
        ListNode* n = new ListNode{x,head};
        head=n;

    }
    void display(){
        ListNode* temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};


TreeNode* insertTree(TreeNode *root,int x){
    if(!root){
       TreeNode* node =new TreeNode;
        node->data=x;
        node->left=NULL;
        node->right=NULL;
        return node;
    }
    if(x<root->data){
        root->left=insertTree(root->left,x);
    }else{
        root->right=insertTree(root->right,x);
    }
    return root;


};
void inOrder(TreeNode* root){
    if(!root)return;
    inOrder(root->left);
    cout<<root->data<<endl;
    inOrder(root->right);
}

class Graph{
    vector<vector<int>>adj;
    public:
    Graph(int v){
        adj.resize(v);
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void display(){
        for(int i=0;i<adj.size();i++){
            cout<<i<<" ";
            for(int x:adj[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Stack stack ;
    Queue queue;
    Deque deque;
    List list;
    TreeNode* root = NULL;
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.display();
    root = insertTree(root,10);
    insertTree(root,5);
    insertTree(root,13);
    inOrder(root);
    cout<<endl;
    stack.push(3);
    stack.push(5);
list.insert(100);
list.insert(200);
    stack.display();

    queue.enqueue(10);
    queue.display();

    deque.pushFront(20);
    deque.pushBack(30);
    deque.display();
    list.display();
    return 0;
}
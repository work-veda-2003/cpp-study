#include <iostream>
using namespace std;

class StackADT {
public:
    virtual void push(int x) = 0;
    virtual void pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual ~StackADT() {}
};

/* ================= Stack using Array ================= */
class StackArray : public StackADT {
    int arr[5];
    int topIndex;

public:
    StackArray() : topIndex(-1) {}

    void push(int x) override {
        if (topIndex == 4) return;
        arr[++topIndex] = x;
    }

    void pop() override {
        if (topIndex >= 0) topIndex--;
    }

    int top() override {
        return arr[topIndex];
    }

    bool isEmpty() override {
        return topIndex == -1;
    }
};

/* ================= Stack using Linked List ================= */
struct Node {
    int data;
    Node* next;
};

class StackList : public StackADT {
    Node* head;

public:
    StackList() : head(NULL) {}

    void push(int x) override {
        Node* n = new Node{x, head};
        head = n;
    }

    void pop() override {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int top() override {
        return head->data;
    }

    bool isEmpty() override {
        return head == NULL;
    }
};

/* ================= Polymorphic Use ================= */
void processStack(StackADT* s) {
    s->push(10);
    s->push(20);
    cout << s->top() << endl;
    s->pop();
}

int main() {
    StackADT* s1 = new StackArray();
    StackADT* s2 = new StackList();

    processStack(s1);
    processStack(s2);
}
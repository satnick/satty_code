/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
    
    Node *node;
    Node *top;
    int count;

  public:
    myStack() {
        
        node = nullptr;
        top = nullptr;
        count = 0;
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the stack is empty
        return top == nullptr;
        
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        count++;
        
    }

    void pop() {
        // Removes the top element of the stack
        if(isEmpty()) return;
        top = top->next;
        count--;
        
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(isEmpty()) return -1;
        return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        return count;
    }
};
class myStack {
    int top = -1;
    int*  st;
    int sz;
  public:
    myStack(int n) {
        // Define Data Structures
        sz = n;
        st = new int[n];
        
    }

    bool isEmpty() {
        // check if the stack is empty
        
        return top == -1;
        
    }

    bool isFull() {
        // check if the stack is full
        if(top == sz-1)
            return true;
        
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull())
            return;
            
        st[++top] = x;
        
        
    }

    void pop() {
        // removes an element from the top of the stack
        
        //int el = st[top];
        if(isEmpty()) return;
        
        top--;
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty())
            return st[top];
        return -1;
    }
};
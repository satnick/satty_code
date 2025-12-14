class MinStack {

    vector<int> st;
    vector<int> minSt; //creating another stack which will push minimum every time an element is pushed also.
    int last;
   
public:
    MinStack() {
        last = -1;        
    }
    
    void push(int val) {
        st.push_back(val);
        last++;

        if(minSt.size() == 0)
        { 
            minSt.push_back(val);
            return;
        }

        if(minSt[last-1] > val)
        {
            minSt.push_back(val);
        }
        else
            minSt.push_back(minSt[last-1]);
        
    }
    
    void pop() {

        
        st.erase(st.begin()+last);
        minSt.erase(minSt.begin()+last);     

        last--;      
           
    }
    
    int top() {
        return st[last];       
    }
    
    int getMin() {

        return minSt[last];
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
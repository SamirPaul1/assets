class MyQueue {
public:
//Runtime: 4 ms, faster than 100.00% of C++ online submissions for Implement Queue using Stacks.
//Memory Usage: 8.8 MB, less than 97.79% of C++ online submissions for Implement Queue using Stacks.

/**
push:  O(n), O(n)
pop:   O(1), O(1)
peek:  O(1), O(1)
empty: O(1), O(1)
**/
    stack<int> stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> tmp;
        while(!stk.empty()){
            tmp.push(stk.top());
            stk.pop();
        }
        stk.push(x);
        while(!tmp.empty()){
            stk.push(tmp.top());
            tmp.pop();
        }
        
    }
    
    int pop() {
        int tmp = stk.top();
        stk.pop();
        return tmp;
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
         return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
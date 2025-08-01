// Time Complexity: O(n) for push, O(1) for pop and top
// Space Complexity: O(n) where n is the number of elements in the stack
//Optimized Approach using a single queue
class MyStack {
    private:
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        int n=q.front();
        q.pop();
        return n;
        
    }
    
    int top() {
        return q.front();
        
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
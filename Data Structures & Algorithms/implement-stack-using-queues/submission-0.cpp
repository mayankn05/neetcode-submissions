class MyStack {
    queue<int> q;


public:
    MyStack() {}

    //ya to pop direct and push me loop chala k n time lgega ya fir push seedha end me, pop k time loop chala k n time lagega
    
    void push(int x) {
        q.push(x);
        for(int i = q.size()-1; i> 0; i--){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
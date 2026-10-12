class MyStack {
    queue<int> q;


public:
    MyStack() {}

    //ya to pop direct and push me loop chala k n time lgega ya fir push seedha end me, pop k time loop chala k n time lagega
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        for(int i = 0; i < q.size() - 1; i++){
            int front = q.front();
            q.pop();
            q.push(front);
        }
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};
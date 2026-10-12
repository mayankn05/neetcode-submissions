class MyQueue {
private:
    stack<int> s1, s2;

public:
    MyQueue() {}

    void push(int x) { //push in 1
        s1.push(x);
    }

    int pop() {
        //if 2 is empty - first pop and push everything in 2 
        if (s2.empty()) { 
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        //then simple pop from 2
        int res = s2.top();
        s2.pop();
        return res;
    }

    int peek() {
        //if 2 is empty - first pop and push everything in 2 
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
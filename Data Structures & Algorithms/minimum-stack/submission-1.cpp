// class MinStack {
// public:
//     stack<int> stk;
//     MinStack() {

//     }

//     void push(int val) {
//         stk.push(val);
//     }

//     void pop() {
//         stk.pop();
//     }

//     int top() {
//         return stk.top();
//     }

//     int getMin() {
//         stack<int> tmp;
//         int mini = stk.top();
//         while (stk.size()) {
//             mini = min(mini, stk.top());
//             tmp.push(stk.top());
//             stk.pop();
//         }

//         while (tmp.size()) {
//             stk.push(tmp.top());
//             tmp.pop();
//         }

//         return mini;
//     }
// };


class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minStack;

public:
    MinStack() {}

//agar existing se bhi chota h to push, -> sbse chota on top
    void push(int val) {
        stack.push(val);
        val = std::min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }

    void pop() {
        stack.pop();
        minStack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return minStack.top();
    }
};
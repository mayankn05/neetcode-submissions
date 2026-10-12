class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> stack;
        for(int i = 0; i < n; i++){
            if(operations[i] == "+"){
                int top = stack.back();
                stack.pop_back();
                int newTop = top + stack.back();
                stack.push_back(top);
                stack.push_back(newTop);
            } else if(operations[i] == "C"){
                stack.pop_back();
            } else if(operations[i] == "D"){
                stack.push_back(2 * stack.back());
            } else{
                stack.push_back(stoi(operations[i]));
            }
        }
        return accumulate(stack.begin(), stack.end(), 0);
    }
};
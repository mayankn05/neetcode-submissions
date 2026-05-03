class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        cout << n/2;
        char temp;

        for(int i = 1; i <= n/2; i++) {
            temp = s[n-i];
            s[n-i] = s[i-1];
            s[i-1] = temp;

        }
    }
};
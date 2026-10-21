class Solution {
public:
//s1 should fit in s2
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> count1;
        for (char c : s1) {
            count1[c]++;
            cout << c << ":" << count1[c] << endl; 
        }
        //{a:1 , b:1}

        int need = count1.size(); //2
        cout<< "size " << count1.size() << endl;
        for (int i = 0; i < s2.length(); i++) {
            unordered_map<char, int> count2;
            int cur = 0;
            for (int j = i; j < s2.length(); j++) {
                char c = s2[j];
                count2[c]++;

                if (count1[c] < count2[c]) {
                    break;
                }

                if (count1[c] == count2[c]) {
                    cur++;
                    cout << "cur : " << cur << endl;
                }

                if (cur == need) {
                    cout << endl;
                    cout << cur << "==" << need << endl;
                    return true;
                }
            }
        }
        return false;
    }
};
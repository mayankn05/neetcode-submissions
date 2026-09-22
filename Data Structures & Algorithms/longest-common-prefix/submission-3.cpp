class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string firstStr = strs[0]; 
        // we assume it as reference size - no matter the size - reference string can be smaller - not bigger 
        for (int i = 0; i < firstStr.size(); i++) { //parse for first string
            for (int j = 0; j < strs.size(); j++) { //parse the vector of strings
                if (i == strs[j].length() || strs[j][i] != firstStr[i]) { 
                //if any str in vector is of size i 
                //OR
                // if any char is different as compared to first str
                    return firstStr.substr(0,i);
                    //return uptil that char
                }
            }
        }
        return firstStr;
    }
};
class Solution {
public:

    //brute force
    string mergeAlternately(string word1, string word2) {

        int len1 = word1.size();
        int len2 = word2.size();

        string res = "";
        for(int i = 0; i < min(len1, len2); i++){
            res += word1[i];
            res += word2[i];
        }

        if(len1>len2){
            res += word1.substr(len2, len1);
        } else if(len2>len1){
            res += word2.substr(len1,len2);
        }
        
        return res;
    }
};
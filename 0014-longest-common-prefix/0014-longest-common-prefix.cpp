class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";
        for (int i=0;i<strs[0].length();i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i] != strs[0][i]){
                    return ret;
                }
            }
            string s(1, strs[0][i]);
            ret.append(s);
        }

        return ret;
    }
};
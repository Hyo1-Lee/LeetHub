class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 or (x % 10 == 0 and x !=0)){
            return false;
        }
        vector<int> v;
        int i=1000000000;
        while (i > 0 && x / i == 0){
            i = i / 10;
        }
        while (i > 0){
            v.push_back(x / i);
            x = x % i;
            i = i / 10;
        }
        for(int i=0;i<v.size()/2;i++){
            if(v[i] != v[v.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};
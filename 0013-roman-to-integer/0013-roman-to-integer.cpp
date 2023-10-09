class Solution {
public:
    int romanToInt(string s) {
        map<char, int> rome;
        rome['I'] = 1;
        rome['V'] = 5;
        rome['X'] = 10;
        rome['L'] = 50;
        rome['C'] = 100;
        rome['D'] = 500;
        rome['M'] = 1000;

        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(rome[s[i]] < rome[s[i+1]]){
                sum += rome[s[i+1]] - rome[s[i]];
                i++;
            }
            else{
                sum += rome[s[i]];
            }
        }
        return sum;
    }
};
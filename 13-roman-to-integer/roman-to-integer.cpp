class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char , int> mp = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000},
        };

          int num = 0;  
    int prevValue = 0;  

    for (auto x : s) {
        int val = mp[x];  
        if (val > prevValue) {
            num += val - (2 * prevValue);  
        } else {
            num += val; 
        };

        prevValue = val;  
    };

    return num; 
};
    };
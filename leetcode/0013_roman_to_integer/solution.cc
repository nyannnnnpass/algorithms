class Solution {
public:
    int romanToInt(string s) {
        const map<char, int> roman_map {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int res = 0;
        int len = s.length();
        int nums[len];

        for (size_t i = 0; i < s.length(); i++) 
        {
            nums[i] = roman_map.find(s[i])->second;
            if (len == 1)
            {
                res += nums[i];
            }
            if (i) 
            {
                int sign = (nums[i] > nums[i - 1]) ? -1 : 1;
                res += sign * nums[i - 1];
                if (s.length() == i + 1) 
                {
                    res += nums[i];
                }
            }
        }

        return res;        
    }
};

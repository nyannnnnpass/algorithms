class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (size_t i = digits.size(); i > 0; i--) 
        {
            int digit = digits[i - 1];
            if (++digit == 10) 
            {
                digits[i - 1] = 0;
            }
            else
            {
                digits[i - 1] = digit;
                break;
            }
            
        }
        if (digits[0] == 0) 
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

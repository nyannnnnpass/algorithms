class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string res(str);
        size_t i;
        for (i = 0 ; i < str.length() ; i++)
        {
            res[i] = str[str.length() - 1 - i];
        }
        if (operator==(res, str))
        {
            return true;
        } else
        {
            return false;
        }        
    }
};

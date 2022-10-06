class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        string res(str);

        int sign = 0;
        if (str[0] == '-') sign = 1;

        for (int i = str.length() - 1, j = sign ; i >= sign ; i--, j++) 
        {
            res[j] = str[i];
        }
        if (sign) 
        {
            res[0] = str[0];
        }
        int res_num = atoi(res.c_str());
        res = to_string(res_num);
        if (res[res.length() - 1] != str[sign] ) 
        {
            res_num = 0;
        }
        return res_num;
    }
};

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        string::reverse_iterator i = s.rbegin();

        // 从末尾最后一个非空白字符开始
        while (1) {
            if (*i == ' ') {
                i++;
            }
            else break;
        }

        // 遍历到第一个空白字符或已到达开头
        while(1) {
            if (i == s.rend() || *i == ' ') 
                break;
            length++;
            i++;
        }
        
        return length;
    }
};

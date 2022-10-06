class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses_stack;
        bool flag = true;
        
        for (size_t i = 0; i < s.size(); i++) 
        {
            //if (!flag) break;

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            {
                parentheses_stack.push(s[i]);
            } 
            else
            {
                if (parentheses_stack.empty()) 
                {
                    flag = false;
                    break;
                }
                char c = parentheses_stack.top();
                parentheses_stack.pop();
                if ((c == '(' && s[i] == ')') 
                    || (c == '[' && s[i] == ']') 
                    || (c == '{' && s[i] == '}')) 
                {
                    //flag = true;
                }
                else 
                {
                    flag = false;
                    break;
                }
            }   
        }
        if (!parentheses_stack.empty()) 
        {
            flag = false;
        }
        //cout << parentheses_stack.top() << endl;

        return flag;       
    }
};

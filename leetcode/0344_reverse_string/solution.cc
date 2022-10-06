class Solution {
public:
    void reverseString(vector<char>& s) {
      int left = 0;
      int right = s.size() - 1;
      
      while (left < right) {
        char c = s[right];
        s[right] = s[left];
        s[left] = c;
        left++;
        right--;
      }
    }
};

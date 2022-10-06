class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int left = 0;
      int right = numbers.size() - 1;
      int sum;
      vector<int> ret;
      
      do {
        sum = numbers[left] + numbers[right];
        if (sum > target) right--;
        if (sum < target) left++;
      } while (sum != target);
      
      ret.push_back(left + 1);
      ret.push_back(right + 1);
      
      return ret;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int slow = 0;
      int fast = 0;
      
      // special case.
      if (nums.size() == 1)
        return 1;
      
      for (; fast < nums.size(); ++fast) {
        if (nums[slow] < nums[fast]) {
          slow++;
          nums[slow] = nums[fast];
        }
      }
      
      return slow + 1;
    }
};

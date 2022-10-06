class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int fast = 0;
      int slow = 0;
      
      if (nums.size() == 1)
        return;
      
      for ( ; fast < nums.size(); ++fast) {
        if (nums[fast] != 0) {
          nums[slow] = nums[fast];
          slow++;
        }
      }
      
      for ( ; slow < nums.size(); ++slow) {
        nums[slow] = 0;
      }
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> result;
      
      // make array sorted.
      sort(nums.begin(), nums.end());
      
      for (int anchor = 0; anchor < nums.size(); anchor++) {
        int left = anchor + 1;
        int right = nums.size() -1;        
        
        // the smallest number is bigger than 0.
        // thus the sum of any three numbers is bigger than 0.
        if (nums[anchor] > 0) break;
        
        // the biggest number is smaller than 0.
        // thus the sum of any three numbers is smaller than 0.
        if (nums[right] < 0) break;
        
        // deduplication
        if (anchor > 0 && nums[anchor - 1] == nums[anchor]) continue;
        
        while (left < right) {
          int sum = nums[anchor] + nums[left] + nums[right];
          if (sum == 0) {
            vector<int> element = {nums[anchor], nums[left], nums[right]};
            result.push_back(element);   
            
            // deduplication
            while (left < right && nums[right - 1] == nums[right]) right--;
            while (left < right && nums[left + 1] == nums[left]) left++;
            
            left++;
            right--;
          } else if (sum > 0) {
            right--;
          } else if (sum < 0) {
            left++;
          }
        }
      }
      
      return result;
    }
};

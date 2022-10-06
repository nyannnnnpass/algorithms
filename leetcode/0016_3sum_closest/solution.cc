class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
      int answer = nums[0] + nums[1] + nums[2];
      for (int anchor = 0; anchor < nums.size(); anchor++) {
        int left = anchor + 1;
        int right = nums.size() - 1;
        while (left < right) {
          int sum = nums[anchor] + nums[left] + nums[right];
          if (abs(target - sum) < abs(target - answer)) {
            answer = sum;
          }
          if (sum > target) {
            right--;
          } else if (sum < target) {
            left++;
          } else {
            return answer;
          }  
        }
      }
      
      return answer;
    }
};

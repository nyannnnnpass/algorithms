class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>> answer;
      
      if (nums.size() < 4) return answer;
      
      sort(nums.begin(), nums.end());
      
      for (int a = 0; a < nums.size(); a++) {
        for (int b = a + 1; b < nums.size(); b++) {
          int c = b + 1;
          int d = nums.size() - 1;
          while (c < d) {
            long sum = (long)nums[a] + (long)nums[b] + (long)nums[c] + (long)nums[d];
            if (sum == (long)target) {
              vector<int> tmp = {nums[a], nums[b], nums[c], nums[d]};
              answer.push_back(tmp);
              while (c < d && nums[c] == nums[c + 1]) c++;
              while (c < d && nums[d] == nums[d - 1]) d--;
              c++;
              d--;
            } else if (sum < target) {
              c++;
            } else {
              d--;
            }
          }
          while (b + 1 < nums.size() && nums[b] == nums[b + 1]) b++;
        }
        while (a + 1 < nums.size() && nums[a] == nums[a + 1]) a++;
      }
      
      return answer;
    }
};

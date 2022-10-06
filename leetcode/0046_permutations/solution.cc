class Solution {
public:
  vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int>         track;
    bool                used[nums.size()];
    fill(used, used + nums.size(), false);
    backtrack(nums, result, track, used);
    return result;
  }
  
  void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& track, bool used[]) {
    if (track.size() == nums.size()) {
      result.push_back(track);
      return;
    }
    
    for (int i = 0; i < nums.size(); ++i) {
      if (used[i]) {
        continue;
      }
      used[i] = true;
      track.push_back(nums[i]);
      backtrack(nums, result, track, used);
      track.pop_back();
      used[i] = false;
    }
    return;
  }
};

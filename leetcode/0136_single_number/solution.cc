// hashmap
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int answer;
      
      if (nums.size() == 1)
        return nums[0];
      
      set<int> table;
      for (int i = 0; i < nums.size(); i++) {
        if (table.find(nums[i]) == table.end()) {
          // First time meet, add to table.
          table.insert(nums[i]);
        } else {
          // Second time meet, remove from table.
          table.erase(nums[i]);
        }
      }
      
      answer = *table.begin();
      return answer;
    }
};

// xor
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int answer = 0;
      
      for (int i = 0; i < nums.size(); i++) {
        answer = answer ^ nums[i];
      }
      
      return answer;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); i++) {
            if (table.find(nums[i]) == table.end()) {
                table.insert({nums[i], 1});
            } else {
                table.find(nums[i])->second++;
                
            }
        }
            
        int max = 0;
        int result = nums[0];
        for (auto i = table.begin(); i != table.end(); i++) {
            if (i->second > max) {
                max = i->second;
                result = i->first;
            }
        }
        return result;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result = nums[0];
        int max = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int cnt = 0;
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) {
                i++;
                cnt++;
            }
            if (cnt > max) {
                max = cnt;
                result = nums[i];
            }
        }

        return result;
    }
};

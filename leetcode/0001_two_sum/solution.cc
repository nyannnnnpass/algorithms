class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> sum;
        vector<int>::iterator it;
        vector<int> ret;
        
        for (it = nums.begin(); it != nums.end(); ++it) {
            auto now = sum.find(target - *it);
            if (now != sum.end()) {
                ret.push_back(now->second);
                ret.push_back(it - nums.begin());
                break;
            } else {
                pair<int, int> element = {*it, it - nums.begin()};
                sum.insert(element);
            }
        }
        
        return ret;
    }
};

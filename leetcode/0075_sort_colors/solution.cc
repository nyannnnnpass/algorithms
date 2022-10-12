class Solution {
public:
    void sortColors(vector<int>& nums) {        
        int cur = 0;
        int low = 0;
        int high = nums.size() - 1;
        
        while (cur <= high) {
            if (nums[cur] == 0) {
                swap(nums[cur], nums[low]);
                ++low;
                ++cur;
            } else if (nums[cur] == 1) {
                ++cur;
            } else if (nums[cur] == 2) {
                swap(nums[cur], nums[high]);
                --high;
            }
        }
    }
};

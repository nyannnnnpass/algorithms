class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int has_inserted = 0;
      vector<int>::iterator i = nums1.begin();
      vector<int>::iterator j = nums2.begin();

      // When has_inserted not equals to n, there are still elements in nums2
      // which are waiting to be inserted.
      while (has_inserted != n) { 
        if (i - nums1.begin() <= has_inserted + m - 1) {
        // Insert into non-zero part.
        if (*j <= *i) {
          // Insert into num1.
          i = nums1.insert(i, *j);
          ++j;
          ++has_inserted;
        } else {
          // Not insert.
          ++i;
        }
        } else {
        // Insert into zero part.
        i = nums1.insert(i, *j);
        ++j;
        ++has_inserted;
        }
      }
      
      // Remove last n elements in nums1.
      for (int cnt = 0; cnt < n; ++cnt) {
        nums1.pop_back();
      }
    }
};

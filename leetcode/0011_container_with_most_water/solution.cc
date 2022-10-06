class Solution {
public:
    int maxArea(vector<int>& height) {
      // S = length * breadth
      // length = right - left
      // breadth = min(height[left], height[right])
      
      int left = 0;
      int right = height.size() - 1;
      int max_area = -1;
      
      while (left < right) {
        int length = right - left;
        int breadth = min(height[left], height[right]);
        int area = length * breadth;
        
        if (max_area < area)
          max_area = area;
        
        if (height[left] < height[right])
          left++;
        else
          right--;
      }
      
      return max_area;
    }
  
    inline int min(int num1, int num2) {
      return num1 > num2 ? num2 : num1;
    }
};

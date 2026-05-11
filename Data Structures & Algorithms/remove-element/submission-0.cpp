class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
  int left = 0;
  int right;
  for (right = 0; right < nums.size(); right++) {
    if (nums[left] == val) {
      if (nums[right] != val) {
        swap(nums[left], nums[right]);
        left++;
      }
    } else {
      left++;
    }
  }
  return left;
}
};
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0;i<n;i++){
            nums.push_back(nums[i]);
            if (i == n-1){
                break;
            }
        }
        return nums;
    }
};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_ser<int> seen;
        for(int num:nums){
            if (seen.count(num)) return false;
            see.insert(num);
        }
        return true;
    }
};
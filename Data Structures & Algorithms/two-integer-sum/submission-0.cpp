class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0 ; i < nums.size() -1 ; i ++) {
        for(int j = 1 ; j < nums.size() ; j++) {          
            if (nums[j] + nums[i] == target && i != j) { 
                return {i,j};
                }                     
            }
        }
        return {-1,-1};
    }
};
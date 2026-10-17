class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>copy(nums);
        for(int x: copy)
        {
            nums.push_back(x);
        }
        return nums;
    }
};
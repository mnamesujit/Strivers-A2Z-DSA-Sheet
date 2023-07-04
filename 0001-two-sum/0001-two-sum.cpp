class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        int start = 0;
        int end = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if (nums[j] == target - nums[i]){
                    start = i;
                    end = j;
                    break;
                }
            }
        }
        return {start, end};
    }
};
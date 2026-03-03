class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum =0;
        int n = nums.size();
        for(int i=0; i<=n; i++){
            sum = nums[i];
            for(int j=1+i; j<=n; j++){
                if(sum+nums[j]==target){
                    return {i,j};
                }
                
            }
        }
        return {};
    }
};
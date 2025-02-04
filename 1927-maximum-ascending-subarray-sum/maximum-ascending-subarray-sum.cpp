class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        if(nums.size()==1)  
            return nums[0];
        long long maxi = 0 , r = 1;
        while(r<nums.size()){
            long long sum = nums[r-1];;
            while(r<nums.size() && nums[r-1] < nums[r]){
                sum += nums[r];
                r++;
            }
             r++;
             maxi = max(maxi , sum);
        }
        return maxi;
    }
};
class Solution {
public: 
    int digitSum(int n){
        int sum = 0;

        while(n!=0){
            sum += n%10;
            n /= 10;
        }

        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int maxi = 0;
        unordered_map<int , priority_queue<int>> mp;

        for(int i=0 ; i<nums.size() ; i++){

            int tmp = digitSum(nums[i]);

            mp[tmp].push(nums[i]);
        }        
        bool isPossible = false;
        for(auto x:mp){

            int size = x.second.size();
            int i=0 , sum = 0;

            if(size < 2)
                continue;
            isPossible = true;
            while(size-- && i<2){
                sum += x.second.top();
                x.second.pop();
                i++;
            }

            maxi = max(maxi , sum);

        }

        return isPossible ? maxi : -1;
    }
};
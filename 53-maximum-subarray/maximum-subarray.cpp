class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ansst = -1;
        int ansend = -1;
        int n = nums.size();
        long long sum = 0;
        int start = 0;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            if(sum == 0){
               start = i;
            }
            sum += nums[i];
            if(sum>maxi){
                maxi = sum;
                ansend = i;
                ansst = start;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
        
    }
};
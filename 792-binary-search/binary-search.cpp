class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(tar==nums[mid]){
                return mid;
            }
            if(tar<nums[mid]){
                high = mid-1;
            }
            if(tar>=nums[mid]){
                low = mid+1;
            }
        }
        return -1;
        
    }
};
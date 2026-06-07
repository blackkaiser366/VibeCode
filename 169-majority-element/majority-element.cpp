class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int n = nums.size();
        int count;
        for(int i = 0;i<n;i++){
            if(count == 0){
                el = nums[i];
                count = 1;
            }
            else if(el == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int c1 = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==el){
                c1++;
            }
        }
        if(c1>n/2){
            return el;
        }
        return -1;

        
    }
};
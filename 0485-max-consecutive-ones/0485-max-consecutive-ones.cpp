class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int r=0;
        int len=0;
        while(r<nums.size()){
            if(nums[r]==1){
                len=max(len,r-l+1);
                r++;
            }else{
                r++;
                l=r;
            }
        }
        return len;
        
        
    }
};
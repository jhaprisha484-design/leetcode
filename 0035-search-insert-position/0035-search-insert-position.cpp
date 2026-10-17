class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int ans=nums.size();
        int mid=0;
        while(l<=r){
            mid=(r-l)/2+l;
            if(nums[mid] < target){
                l=mid+1;
            }else if(nums[mid] > target){
                ans=mid;
                r=mid-1;
            }else{
                return mid;
            }
        }
        return ans;
        
    }
};
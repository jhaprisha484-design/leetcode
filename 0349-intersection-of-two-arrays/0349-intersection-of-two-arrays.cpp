class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        if(nums2.size() < nums1.size()){
            for(int i=0;i<nums2.size();i++){
                if(find(nums1.begin(),nums1.end(),nums2[i]) !=nums1.end()){
                    v.push_back(nums2[i]);
                }
            }          
        }else{
            for(int i=0;i<nums1.size();i++){
                if (find(nums2.begin(),nums2.end(),nums1[i]) !=nums2.end()){
                    v.push_back(nums1[i]);
                }
            }   

        }
        set<int> s(v.begin(), v.end());
        vector<int> ans(s.begin(), s.end());
        return(ans);
        
        
    }
};
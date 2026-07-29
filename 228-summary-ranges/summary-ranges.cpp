class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        int i=0;
         vector<string> ans;
        while(i<n){
        int start=nums[i];
    
    while(i+1<n && nums[i+1]==nums[i]+1){
        i++;
    }
        if(start==nums[i]){ // if start and end are same only a single element is present
       ans.push_back(to_string(start));
        }
        else{
            ans.push_back(to_string(start)+"->" + to_string(nums[i]));
        }
    i++;
        }
        return ans;
    }
};
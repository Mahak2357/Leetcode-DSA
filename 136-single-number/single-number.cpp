class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
      int n=nums.size();
        
        for(int i=0;i<n;i++){
            ans=ans^nums[i]; // USING XOR RULE(a ^ a = 0 and 0 ^ a = a)
        }
        return ans;
    }
};
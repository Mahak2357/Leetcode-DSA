class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int>ans=nums;
    //vector.insert(position, start, end);
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
        
    }
};
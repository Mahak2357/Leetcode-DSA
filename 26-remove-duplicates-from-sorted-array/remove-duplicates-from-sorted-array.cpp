class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // two pointer approach
        int n=nums.size();
        if(n==0) // array is empty
        return 0;

        int i=0;
        for (int j=1;j<n;j++){
            if(nums[i]!=nums[j]) // if finds unique element
            i++;
            nums[i]=nums[j]; //store the value
        }
        return i+1;
    }
};
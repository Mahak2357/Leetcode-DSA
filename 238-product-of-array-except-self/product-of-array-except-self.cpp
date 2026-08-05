class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // LEFT PRODUCT
        int left = 1;
        for(int i = 0; i < n; i++) {
            ans[i] = left;
            left = left * nums[i];
        }
        // RIGHT PRODUCT
        int right = 1;
        for(int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * right; //left prod* right prod
            right = right * nums[i];
        }

        return ans;
    }
};
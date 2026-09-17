class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> mp; // to count the frequency of that element thats why we use map

        for(int i=0;i<n;i++){
            mp[nums1[i]]++; // to increase the count when we find the number two or more times
        }
     
       //checking elements of nums2
       for(int i=0;i<m;i++){
        if(mp[nums2[i]]>0){ // checking that is there copy of nums2 is availiable in nums1
        ans.push_back(nums2[i]); // if availiable add it into the ans
        mp[nums2[i]]--; // 1 copy used hence remove 1 count
        }
       }

        return ans;

    }
};
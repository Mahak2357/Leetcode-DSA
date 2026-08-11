class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end = nums.size()-1;

        while(start<=end){
            int mid= start + (end-start)/2;

            if(nums[mid]==target)
            return mid;
         // to check left arr is sorted or not
            if(nums[start]<=nums[mid]){
                // to check target element is present or not in left sorted arr
                if(nums[start]<=target && target<nums[mid])
                end = mid-1;
                else{
                    start = mid+1;
                } 
                } else{
                    // if left is not sorted then right will
                    if(target>nums[mid] && nums[end]>=target){
                        start= mid+1;
                    }
                        else{
                            end= mid-1;
                        }
                    }
                }
            
        
        return -1;
    }
};
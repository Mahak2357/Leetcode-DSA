class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>s(nums.begin(),nums.end()); // INSERT ALL ARR ELEMENT IN SET
        int longest=0;

        for(int num:s){
            if(s.find(num-1)==s.end()){ //ELEMENT NOT FOUND
            int currentlength=1;
            int currentnum=num;

            while(s.find(currentnum+1)!=s.end()){
                currentnum++;
                currentlength++;
            }

                longest = max(longest,currentlength);

            }
        }
        return longest;
        
    }
};
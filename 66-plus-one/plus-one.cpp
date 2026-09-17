class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();

        for(int i=n-1;i>=0;i--){ // starting from right to left as addittion occurs from right
            if(digits[i]<9){ // if a no is less than 9
                digits[i]++; // increment last digit by 1
                return digits;
            }
            digits[i]=0; //if last no is 9 then replace it with 0 and moves to i-1
        }

        digits.insert(digits.begin(),1); //if all elemets in arr is 9 then insert 1 in the beginning
        return digits;
        
    }
};
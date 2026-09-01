class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0; // for string s assuming its a smaller string
        int j=0; // for string t assuming its a larger string

        while(i<s.length() && j<t.length()){
            if(s[i]==t[j])
            i++;

            j++;
        }
        // this also handles if s="" (empty string case)
        return i==s.length(); //this automatically gives result true or false if i==s.lenghth() success or fails
        
    }
};
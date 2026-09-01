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
        return i==s.length();
    }
};
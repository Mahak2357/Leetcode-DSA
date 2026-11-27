class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        // Step 1: skip the spaces after last letter string
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: to calcuate length of last word
        int count = 0;

        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
        
    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Character ke against uska count store hoga
        unordered_map<char, int> mp;

        // FIRST LOOP: Magazine ke characters count karo
        for(int i = 0; i < magazine.length(); i++) {

            char ch = magazine[i];

            // Current character ka count 1 se increase
            mp[ch]++;
        }

        // SECOND LOOP: RansomNote ke characters check karo
        for(int i = 0; i < ransomNote.length(); i++) {

            char ch = ransomNote[i];

            // Agar character available nahi hai
            if(mp[ch] == 0) {
                return false;
            }

            // Character use ho gaya, count decrease karo
            mp[ch]--;
        }

        return true;
    }
};
        
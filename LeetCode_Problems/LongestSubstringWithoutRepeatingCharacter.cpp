// problem link
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_val = 0;
        int sti = 0;
        map<char, int> mp;
        int n = s.length();

        for(int e = 0;e < n;e++){
            if(mp.find(s[e]) != mp.end()){
                mp[s[e]]++;
            }else{
                mp[s[e]] = 1;
            }

            while((e - sti + 1) != mp.size()){
                if(mp[s[sti]] == 1){
                    mp.erase(s[sti]);
                }else{
                    mp[s[sti]]--;
                }
                sti++;
            }

            if(max_val < mp.size()){
                max_val = mp.size();
            }
        }

        return max_val;
    }
};

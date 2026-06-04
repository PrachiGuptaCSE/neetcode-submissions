class Solution {
public:
unordered_map<char,char>mp1;
unordered_map<char,char>mp2;
    bool isAnagram(string s, string t) {
        if(s.length()==t.length()){
            for(char ch: s){
                mp1[ch]++;
            }
            for(char ch: t){
                mp2[ch]++;
            }
            if(mp1==mp2){
                return true;
            }
        }
        return false;
    }
};

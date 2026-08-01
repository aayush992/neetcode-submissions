class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char,int>mp,sp;

        for(char &ch:s){
            mp[ch]++;
        }
        for(char &ch:t){
            sp[ch]++;
        }
        int f=0;
        if(mp != sp)
            f=1;

        return f==0;
    }
};

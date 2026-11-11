class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int max=0;
        int currStart=0;
        for(int i = 0;i<s.size();i++){
            if(hash.count(s[i])==1){
                if(hash[s[i]]>currStart)currStart=hash[s[i]];
            }
            if(1+i-currStart>max)max=1+i-currStart;
            hash[s[i]]=i+1;
        }
        return max;
    }
};

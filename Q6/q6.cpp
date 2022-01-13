class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int len = s.size();
        int arr[26]={0},i;
        for(i=0;i<len;i++)
        {   arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(i=0;i<26;i++)
            if(arr[i]>0)
                return false;
        return true;
    }
};


class Solution {
public:
    vector<int> diStringMatch(string s) {
        int first = 0,last = s.size();
        vector<int> arr(s.size()+1,0);
        for(int i=0;i<=s.size();++i)
        {   if(s[i]=='I')
                arr[i]=first++;
            else
                arr[i]=last--;
        }
        arr[s.size()]=first;
        return arr;
    }
};
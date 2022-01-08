class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26,0);
        //int[] arr = new int[26];
        int ind,i;
        for(i=0;i<s.size();i++)
        {   ind = s[i]-'a';
            arr[ind]++;            
        }
        
        for(i=0;i<s.size();i++)
        {   ind = s[i]-'a';
            if(arr[ind]==1)
                return i;
        }
        
        return -1;
    }
};
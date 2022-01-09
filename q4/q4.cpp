class Solution {
public:
    bool isValid(string s) {
        stack<char> news;
        int i;
        for(i=0;i<s.size();i++)
        {   if(news.empty()||s[i]=='{'|| s[i]=='('|| s[i]=='[')
                news.push(s[i]);
            else
            {   if(s[i]==']'&& news.top()!='[')
                    return false;
                if(s[i]=='}'&& news.top()!='{')
                    return false;
                if(s[i]==')'&& news.top()!='(')
                    return false;
                news.pop();
                
            }
        }
        return news.empty();
    }
};
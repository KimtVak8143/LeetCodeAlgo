class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> check;
        for(string s: strs)
        {   string t = s;
            sort(t.begin(),t.end());
            check[t].push_back(s);
        }
        vector<vector<string>> result;
        for(auto a: check)
        {
            result.push_back(a.second);
        }
        return result;
    }
};

//sample 24 ms submission
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//           unordered_map <string, int> store;
//   vector<vector<string>> res;
//   for (int i = 0; i < strs.size(); i++){
//      string tmp = strs[i];
//      sort(strs[i].begin(), strs[i].end());
//      if (store.find(strs[i]) != store.end()){
//         res[store[strs[i]]].push_back(tmp);
//      }
//      else{
//         vector<string> a = {tmp};
//         res.push_back(a);
//         store[strs[i]] = res.size() - 1;
//      }
//   }
//   return res;
//    }
//};

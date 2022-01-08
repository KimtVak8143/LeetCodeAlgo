class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> arr;
        int x = nums.size();
        int a,rest=0,sum1=0,i;
        for(i=0;i<x;i++)
        {   rest+= nums[i];            
        }
        sort(nums.begin(),nums.end(),greater<>());
        int t = 0;
        while(sum1<=rest)
        {   int temp = nums[t];
            arr.push_back(temp);
            sum1+=temp;
            rest-=temp;
            t++;
        }
        return arr;
    }
};